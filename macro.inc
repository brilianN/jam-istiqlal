 
 ;Move variable from code segment to datasegment
.MACRO MOV_VARIABLE_B 
	LDI ZH, HIGH(@0 * 2)
	LDI ZL, LOW(@0 * 2)
	LPM
	STS @1, R0
.ENDMACRO

;Load address (word) pointed by param0 to R0:R1 (R0 MSB, R1 LSB)
;
.MACRO LoadAddressFromCseg
	LDI ZH, HIGH(@0 * 2)
	LDI ZL, LOW(@0 * 2)
	LPM
	MOV R1, R0
	ADIW ZL,1
	LPM
.ENDMACRO
