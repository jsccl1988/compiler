.class public HELLOOOOOOO_WORRRRRLD
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;

.method public <init>()V

	aload_0
	invokenonvirtual    java/lang/Object/<init>()V
	return

.limit locals 1
.limit stack 1
.end method


; boola=10;

.field private static a B = 10

; doubleb=20;

.field private static b D = 20

; intc=a*b;

.field private static c I = a*b

; floatd=c+c;

.field private static d F = c+c

; floate=2;

.field private static e F = 2

; intmultiples_of_ten=0;

.field private static multiples_of_ten I = 0
.method public static main()V
; voidmain(){boola=10;doubleb=20;intc=a*b;floatd=c+c;floate=2;intmultiples_of_ten=0;if(d==400){while(d>0){d--;if(d%10==0){++multiples_of_ten;e**;}}}}

	new RunTimer
	dup
	invokenonvirtual RunTimer/<init>()V
	putstatic        HELLOOOOOOO_WORRRRRLD/_runTimer LRunTimer;
	new PascalTextIn
	dup
	invokenonvirtual PascalTextIn/<init>()V
	putstatic        HELLOOOOOOO_WORRRRRLD/_standardIn LPascalTextIn;
	; a=10
	ldc 10
	putstatic	HELLOOOOOOO_WORRRRRLD/a B
	; b=20
	ldc 20
	putstatic	HELLOOOOOOO_WORRRRRLD/b D
	; c=a*b
	getstatic	HELLOOOOOOO_WORRRRRLD/a B
	getstatic	HELLOOOOOOO_WORRRRRLD/b D
	lmul
	putstatic	HELLOOOOOOO_WORRRRRLD/c I
	; d=c+c
	getstatic	HELLOOOOOOO_WORRRRRLD/c I
	getstatic	HELLOOOOOOO_WORRRRRLD/c I
	iadd
	putstatic	HELLOOOOOOO_WORRRRRLD/d F
	; e=2
	ldc 2
	putstatic	HELLOOOOOOO_WORRRRRLD/e F
	; multiples_of_ten=0
	ldc 0
	putstatic	HELLOOOOOOO_WORRRRRLD/multiples_of_ten I
if_0:
	; d == 400
	getstatic	HELLOOOOOOO_WORRRRRLD/d F
	ldc 400
	; Exit [if_0] condition
	if_icmpne if_0_end

while_1:
	; d > 0
	getstatic	HELLOOOOOOO_WORRRRRLD/d F
	ldc 0
	; Exit [while_1] condition
	if_icmple while_1_end
	getstatic	HELLOOOOOOO_WORRRRRLD/d F
	iconst_1
	fsub
	putstatic	HELLOOOOOOO_WORRRRRLD/d F
if_2:
	; d%10 == 0
	getstatic	HELLOOOOOOO_WORRRRRLD/d F
	ldc 10
	frem
	ldc 0
	; Exit [if_2] condition
	if_icmpne if_2_end
	getstatic	HELLOOOOOOO_WORRRRRLD/multiples_of_ten I
	iconst_1
	iadd
	putstatic	HELLOOOOOOO_WORRRRRLD/multiples_of_ten I
	getstatic	HELLOOOOOOO_WORRRRRLD/e F
	getstatic	HELLOOOOOOO_WORRRRRLD/e F
	fmul
	putstatic	HELLOOOOOOO_WORRRRRLD/e F
if_2_end:

	; Jump to start of loop
	goto while_1
while_1_end:

if_0_end:


	getstatic     HELLOOOOOOO_WORRRRRLD/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
