;
; ZETA HARDWARE DEFINITIONS
;
SBC_BASE	.EQU	$60		; I/O BASE ADDRESS FOR ONBOARD PERIPHERALS
;
; BIT 7 OF MPCL_ROM SELECTS ROM/RAM (0=ROM, 1=RAM)
MPCL_RAM	.EQU 	SBC_BASE + $18	; MEMORY PAGER CONFIG LATCH - RAM (WRITE ONLY)
MPCL_ROM	.EQU 	SBC_BASE + $1C	; MEMORY PAGER CONFIG LATCH - ROM (WRITE ONLY)
;
RTC		.EQU	SBC_BASE + $10	; ADDRESS OF RTC LATCH AND INPUT PORT
PPIBASE		.EQU	SBC_BASE + $00	; PPI 82C55 I/O IS DECODED TO PORT 60-67