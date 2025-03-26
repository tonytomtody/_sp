## main.cpp

執行main.cpp
```
 g++ main.cpp -o main.out
 ./main.out
```
產生組合語言.s檔
```
g++ -S main.cpp
```

產生目的檔.o檔
```
g++ -c main.cpp
```
將該目的檔反組譯
```
objdump -d main.o

main.o:	file format mach-o arm64

Disassembly of section __TEXT,__text:

0000000000000000 <ltmp0>:
       0: d10203ff     	sub	sp, sp, #0x80
       4: a9077bfd     	stp	x29, x30, [sp, #0x70]
       8: 9101c3fd     	add	x29, sp, #0x70
       c: b81fc3bf     	stur	wzr, [x29, #-0x4]
      10: d2800200     	mov	x0, #0x10               ; =16
      14: f9001fe0     	str	x0, [sp, #0x38]
      18: 94000000     	bl	0x18 <ltmp0+0x18>
      1c: f900001f     	str	xzr, [x0]
      20: f900041f     	str	xzr, [x0, #0x8]
      24: f81f03a0     	stur	x0, [x29, #-0x10]
      28: 90000000     	adrp	x0, 0x0 <ltmp0>
      2c: f9400000     	ldr	x0, [x0]
      30: f9001be0     	str	x0, [sp, #0x30]
      34: d1001ba1     	sub	x1, x29, #0x6
      38: f90017e1     	str	x1, [sp, #0x28]
      3c: 94000000     	bl	0x3c <ltmp0+0x3c>
      40: f94017e1     	ldr	x1, [sp, #0x28]
      44: f9401be0     	ldr	x0, [sp, #0x30]
      48: 785fa3a8     	ldurh	w8, [x29, #-0x6]
      4c: f85f03a9     	ldur	x9, [x29, #-0x10]
      50: 79000128     	strh	w8, [x9]
      54: f85f03a8     	ldur	x8, [x29, #-0x10]
      58: f900051f     	str	xzr, [x8, #0x8]
      5c: f85f03a8     	ldur	x8, [x29, #-0x10]
      60: f81e83a8     	stur	x8, [x29, #-0x18]
      64: 94000000     	bl	0x64 <ltmp0+0x64>
      68: f9401fe0     	ldr	x0, [sp, #0x38]
      6c: 94000000     	bl	0x6c <ltmp0+0x6c>
      70: f94017e1     	ldr	x1, [sp, #0x28]
      74: aa0003e8     	mov	x8, x0
      78: f9401be0     	ldr	x0, [sp, #0x30]
      7c: f900011f     	str	xzr, [x8]
      80: f900051f     	str	xzr, [x8, #0x8]
      84: f85e83a9     	ldur	x9, [x29, #-0x18]
      88: f9000528     	str	x8, [x9, #0x8]
      8c: f85e83a8     	ldur	x8, [x29, #-0x18]
      90: f9400508     	ldr	x8, [x8, #0x8]
      94: f81e83a8     	stur	x8, [x29, #-0x18]
      98: 785fa3a8     	ldurh	w8, [x29, #-0x6]
      9c: f85e83a9     	ldur	x9, [x29, #-0x18]
      a0: 79000128     	strh	w8, [x9]
      a4: f85e83a8     	ldur	x8, [x29, #-0x18]
      a8: f900051f     	str	xzr, [x8, #0x8]
      ac: 94000000     	bl	0xac <ltmp0+0xac>
      b0: f9401fe0     	ldr	x0, [sp, #0x38]
      b4: 94000000     	bl	0xb4 <ltmp0+0xb4>
      b8: f900001f     	str	xzr, [x0]
      bc: f900041f     	str	xzr, [x0, #0x8]
      c0: f85e83a8     	ldur	x8, [x29, #-0x18]
      c4: f9000500     	str	x0, [x8, #0x8]
      c8: f85e83a8     	ldur	x8, [x29, #-0x18]
      cc: f9400508     	ldr	x8, [x8, #0x8]
      d0: f81e83a8     	stur	x8, [x29, #-0x18]
      d4: 785fa3a8     	ldurh	w8, [x29, #-0x6]
      d8: f85e83a9     	ldur	x9, [x29, #-0x18]
      dc: 79000128     	strh	w8, [x9]
      e0: f85e83a8     	ldur	x8, [x29, #-0x18]
      e4: f900051f     	str	xzr, [x8, #0x8]
      e8: f85f03a8     	ldur	x8, [x29, #-0x10]
      ec: f81e83a8     	stur	x8, [x29, #-0x18]
      f0: 14000001     	b	0xf4 <ltmp0+0xf4>
      f4: f85e83a8     	ldur	x8, [x29, #-0x18]
      f8: 79400101     	ldrh	w1, [x8]
      fc: 90000000     	adrp	x0, 0x0 <ltmp0>
     100: f9400000     	ldr	x0, [x0]
     104: 94000000     	bl	0x104 <ltmp0+0x104>
     108: 90000001     	adrp	x1, 0x0 <ltmp0>
     10c: 91000021     	add	x1, x1, #0x0
     110: 94000000     	bl	0x110 <ltmp0+0x110>
     114: f85e83a8     	ldur	x8, [x29, #-0x18]
     118: f9400508     	ldr	x8, [x8, #0x8]
     11c: f81e83a8     	stur	x8, [x29, #-0x18]
     120: f85e83a8     	ldur	x8, [x29, #-0x18]
     124: f1000108     	subs	x8, x8, #0x0
     128: 1a9f07e8     	cset	w8, ne
     12c: 37000068     	tbnz	w8, #0x0, 0x138 <ltmp0+0x138>
     130: 14000001     	b	0x134 <ltmp0+0x134>
     134: 14000002     	b	0x13c <ltmp0+0x13c>
     138: 17ffffef     	b	0xf4 <ltmp0+0xf4>
     13c: 90000000     	adrp	x0, 0x0 <ltmp0>
     140: f9400000     	ldr	x0, [x0]
     144: d1006ba1     	sub	x1, x29, #0x1a
     148: 94000000     	bl	0x148 <ltmp0+0x148>
     14c: f85f03a8     	ldur	x8, [x29, #-0x10]
     150: f81d83a8     	stur	x8, [x29, #-0x28]
     154: f85f03a8     	ldur	x8, [x29, #-0x10]
     158: f1000108     	subs	x8, x8, #0x0
     15c: 1a9f07e8     	cset	w8, ne
     160: 37000168     	tbnz	w8, #0x0, 0x18c <ltmp0+0x18c>
     164: 14000001     	b	0x168 <ltmp0+0x168>
     168: 90000000     	adrp	x0, 0x0 <ltmp0>
     16c: f9400000     	ldr	x0, [x0]
     170: 90000001     	adrp	x1, 0x0 <ltmp0>
     174: 91000021     	add	x1, x1, #0x0
     178: 94000000     	bl	0x178 <ltmp0+0x178>
     17c: 90000001     	adrp	x1, 0x0 <ltmp0>
     180: 91000021     	add	x1, x1, #0x0
     184: 94000000     	bl	0x184 <ltmp0+0x184>
     188: 14000001     	b	0x18c <ltmp0+0x18c>
     18c: f85f03a8     	ldur	x8, [x29, #-0x10]
     190: 79400108     	ldrh	w8, [x8]
     194: 78de63a9     	ldursh	w9, [x29, #-0x1a]
     198: 6b090108     	subs	w8, w8, w9
     19c: 1a9f07e8     	cset	w8, ne
     1a0: 370001e8     	tbnz	w8, #0x0, 0x1dc <ltmp0+0x1dc>
     1a4: 14000001     	b	0x1a8 <ltmp0+0x1a8>
     1a8: f85f03a8     	ldur	x8, [x29, #-0x10]
     1ac: f9400508     	ldr	x8, [x8, #0x8]
     1b0: f81f03a8     	stur	x8, [x29, #-0x10]
     1b4: f85d83a8     	ldur	x8, [x29, #-0x28]
     1b8: f90013e8     	str	x8, [sp, #0x20]
     1bc: f1000108     	subs	x8, x8, #0x0
     1c0: 1a9f17e8     	cset	w8, eq
     1c4: 370000a8     	tbnz	w8, #0x0, 0x1d8 <ltmp0+0x1d8>
     1c8: 14000001     	b	0x1cc <ltmp0+0x1cc>
     1cc: f94013e0     	ldr	x0, [sp, #0x20]
     1d0: 94000000     	bl	0x1d0 <ltmp0+0x1d0>
     1d4: 14000001     	b	0x1d8 <ltmp0+0x1d8>
     1d8: 14000036     	b	0x2b0 <ltmp0+0x2b0>
     1dc: 14000001     	b	0x1e0 <ltmp0+0x1e0>
     1e0: f85d83a8     	ldur	x8, [x29, #-0x28]
     1e4: f1000108     	subs	x8, x8, #0x0
     1e8: 1a9f17e8     	cset	w8, eq
     1ec: 52800009     	mov	w9, #0x0                ; =0
     1f0: b9001fe9     	str	w9, [sp, #0x1c]
     1f4: 37000128     	tbnz	w8, #0x0, 0x218 <ltmp0+0x218>
     1f8: 14000001     	b	0x1fc <ltmp0+0x1fc>
     1fc: f85d83a8     	ldur	x8, [x29, #-0x28]
     200: 79400108     	ldrh	w8, [x8]
     204: 78de63a9     	ldursh	w9, [x29, #-0x1a]
     208: 6b090108     	subs	w8, w8, w9
     20c: 1a9f07e8     	cset	w8, ne
     210: b9001fe8     	str	w8, [sp, #0x1c]
     214: 14000001     	b	0x218 <ltmp0+0x218>
     218: b9401fe8     	ldr	w8, [sp, #0x1c]
     21c: 36000108     	tbz	w8, #0x0, 0x23c <ltmp0+0x23c>
     220: 14000001     	b	0x224 <ltmp0+0x224>
     224: f85d83a8     	ldur	x8, [x29, #-0x28]
     228: f81d03a8     	stur	x8, [x29, #-0x30]
     22c: f85d83a8     	ldur	x8, [x29, #-0x28]
     230: f9400508     	ldr	x8, [x8, #0x8]
     234: f81d83a8     	stur	x8, [x29, #-0x28]
     238: 17ffffea     	b	0x1e0 <ltmp0+0x1e0>
     23c: f85d83a8     	ldur	x8, [x29, #-0x28]
     240: f1000108     	subs	x8, x8, #0x0
     244: 1a9f07e8     	cset	w8, ne
     248: 37000168     	tbnz	w8, #0x0, 0x274 <ltmp0+0x274>
     24c: 14000001     	b	0x250 <ltmp0+0x250>
     250: 90000000     	adrp	x0, 0x0 <ltmp0>
     254: f9400000     	ldr	x0, [x0]
     258: 90000001     	adrp	x1, 0x0 <ltmp0>
     25c: 91000021     	add	x1, x1, #0x0
     260: 94000000     	bl	0x260 <ltmp0+0x260>
     264: 90000001     	adrp	x1, 0x0 <ltmp0>
     268: 91000021     	add	x1, x1, #0x0
     26c: 94000000     	bl	0x26c <ltmp0+0x26c>
     270: 1400000f     	b	0x2ac <ltmp0+0x2ac>
     274: f85d83a8     	ldur	x8, [x29, #-0x28]
     278: f9400508     	ldr	x8, [x8, #0x8]
     27c: f85d03a9     	ldur	x9, [x29, #-0x30]
     280: f9000528     	str	x8, [x9, #0x8]
     284: f85d83a8     	ldur	x8, [x29, #-0x28]
     288: f9000be8     	str	x8, [sp, #0x10]
     28c: f1000108     	subs	x8, x8, #0x0
     290: 1a9f17e8     	cset	w8, eq
     294: 370000a8     	tbnz	w8, #0x0, 0x2a8 <ltmp0+0x2a8>
     298: 14000001     	b	0x29c <ltmp0+0x29c>
     29c: f9400be0     	ldr	x0, [sp, #0x10]
     2a0: 94000000     	bl	0x2a0 <ltmp0+0x2a0>
     2a4: 14000001     	b	0x2a8 <ltmp0+0x2a8>
     2a8: 14000001     	b	0x2ac <ltmp0+0x2ac>
     2ac: 14000001     	b	0x2b0 <ltmp0+0x2b0>
     2b0: f85f03a8     	ldur	x8, [x29, #-0x10]
     2b4: f81e83a8     	stur	x8, [x29, #-0x18]
     2b8: 14000001     	b	0x2bc <ltmp0+0x2bc>
     2bc: f85e83a8     	ldur	x8, [x29, #-0x18]
     2c0: 79400101     	ldrh	w1, [x8]
     2c4: 90000000     	adrp	x0, 0x0 <ltmp0>
     2c8: f9400000     	ldr	x0, [x0]
     2cc: 94000000     	bl	0x2cc <ltmp0+0x2cc>
     2d0: 90000001     	adrp	x1, 0x0 <ltmp0>
     2d4: 91000021     	add	x1, x1, #0x0
     2d8: 94000000     	bl	0x2d8 <ltmp0+0x2d8>
     2dc: f85e83a8     	ldur	x8, [x29, #-0x18]
     2e0: f9400508     	ldr	x8, [x8, #0x8]
     2e4: f81e83a8     	stur	x8, [x29, #-0x18]
     2e8: f85e83a8     	ldur	x8, [x29, #-0x18]
     2ec: f1000108     	subs	x8, x8, #0x0
     2f0: 1a9f07e8     	cset	w8, ne
     2f4: 37000068     	tbnz	w8, #0x0, 0x300 <ltmp0+0x300>
     2f8: 14000001     	b	0x2fc <ltmp0+0x2fc>
     2fc: 14000002     	b	0x304 <ltmp0+0x304>
     300: 17ffffef     	b	0x2bc <ltmp0+0x2bc>
     304: 90000000     	adrp	x0, 0x0 <ltmp0>
     308: f9400000     	ldr	x0, [x0]
     30c: f90007e0     	str	x0, [sp, #0x8]
     310: d1001ba1     	sub	x1, x29, #0x6
     314: 94000000     	bl	0x314 <ltmp0+0x314>
     318: f94007e0     	ldr	x0, [sp, #0x8]
     31c: d1006ba1     	sub	x1, x29, #0x1a
     320: 94000000     	bl	0x320 <ltmp0+0x320>
     324: f85f03a8     	ldur	x8, [x29, #-0x10]
     328: f81e83a8     	stur	x8, [x29, #-0x18]
     32c: f85f03a8     	ldur	x8, [x29, #-0x10]
     330: f1000108     	subs	x8, x8, #0x0
     334: 1a9f07e8     	cset	w8, ne
     338: 37000168     	tbnz	w8, #0x0, 0x364 <ltmp0+0x364>
     33c: 14000001     	b	0x340 <ltmp0+0x340>
     340: 90000000     	adrp	x0, 0x0 <ltmp0>
     344: f9400000     	ldr	x0, [x0]
     348: 90000001     	adrp	x1, 0x0 <ltmp0>
     34c: 91000021     	add	x1, x1, #0x0
     350: 94000000     	bl	0x350 <ltmp0+0x350>
     354: 90000001     	adrp	x1, 0x0 <ltmp0>
     358: 91000021     	add	x1, x1, #0x0
     35c: 94000000     	bl	0x35c <ltmp0+0x35c>
     360: 14000001     	b	0x364 <ltmp0+0x364>
     364: f85f03a8     	ldur	x8, [x29, #-0x10]
     368: 79400108     	ldrh	w8, [x8]
     36c: 78de63a9     	ldursh	w9, [x29, #-0x1a]
     370: 6b090108     	subs	w8, w8, w9
     374: 1a9f07e8     	cset	w8, ne
     378: 370002a8     	tbnz	w8, #0x0, 0x3cc <ltmp0+0x3cc>
     37c: 14000001     	b	0x380 <ltmp0+0x380>
     380: f85f03a8     	ldur	x8, [x29, #-0x10]
     384: f9400508     	ldr	x8, [x8, #0x8]
     388: f81d83a8     	stur	x8, [x29, #-0x28]
     38c: d2800200     	mov	x0, #0x10               ; =16
     390: 94000000     	bl	0x390 <ltmp0+0x390>
     394: f900001f     	str	xzr, [x0]
     398: f900041f     	str	xzr, [x0, #0x8]
     39c: f85e83a8     	ldur	x8, [x29, #-0x18]
     3a0: f9000500     	str	x0, [x8, #0x8]
     3a4: f85e83a8     	ldur	x8, [x29, #-0x18]
     3a8: f9400508     	ldr	x8, [x8, #0x8]
     3ac: f81e83a8     	stur	x8, [x29, #-0x18]
     3b0: 785fa3a8     	ldurh	w8, [x29, #-0x6]
     3b4: f85e83a9     	ldur	x9, [x29, #-0x18]
     3b8: 79000128     	strh	w8, [x9]
     3bc: f85d83a8     	ldur	x8, [x29, #-0x28]
     3c0: f85e83a9     	ldur	x9, [x29, #-0x18]
     3c4: f9000528     	str	x8, [x9, #0x8]
     3c8: 1400003c     	b	0x4b8 <ltmp0+0x4b8>
     3cc: f85f03a8     	ldur	x8, [x29, #-0x10]
     3d0: f81d83a8     	stur	x8, [x29, #-0x28]
     3d4: 14000001     	b	0x3d8 <ltmp0+0x3d8>
     3d8: f85d83a8     	ldur	x8, [x29, #-0x28]
     3dc: f1000108     	subs	x8, x8, #0x0
     3e0: 1a9f17e8     	cset	w8, eq
     3e4: 52800009     	mov	w9, #0x0                ; =0
     3e8: b90007e9     	str	w9, [sp, #0x4]
     3ec: 37000128     	tbnz	w8, #0x0, 0x410 <ltmp0+0x410>
     3f0: 14000001     	b	0x3f4 <ltmp0+0x3f4>
     3f4: f85d83a8     	ldur	x8, [x29, #-0x28]
     3f8: 79400108     	ldrh	w8, [x8]
     3fc: 78de63a9     	ldursh	w9, [x29, #-0x1a]
     400: 6b090108     	subs	w8, w8, w9
     404: 1a9f07e8     	cset	w8, ne
     408: b90007e8     	str	w8, [sp, #0x4]
     40c: 14000001     	b	0x410 <ltmp0+0x410>
     410: b94007e8     	ldr	w8, [sp, #0x4]
     414: 36000108     	tbz	w8, #0x0, 0x434 <ltmp0+0x434>
     418: 14000001     	b	0x41c <ltmp0+0x41c>
     41c: f85d83a8     	ldur	x8, [x29, #-0x28]
     420: f81d03a8     	stur	x8, [x29, #-0x30]
     424: f85d83a8     	ldur	x8, [x29, #-0x28]
     428: f9400508     	ldr	x8, [x8, #0x8]
     42c: f81d83a8     	stur	x8, [x29, #-0x28]
     430: 17ffffea     	b	0x3d8 <ltmp0+0x3d8>
     434: f85d83a8     	ldur	x8, [x29, #-0x28]
     438: f1000108     	subs	x8, x8, #0x0
     43c: 1a9f07e8     	cset	w8, ne
     440: 37000168     	tbnz	w8, #0x0, 0x46c <ltmp0+0x46c>
     444: 14000001     	b	0x448 <ltmp0+0x448>
     448: 90000000     	adrp	x0, 0x0 <ltmp0>
     44c: f9400000     	ldr	x0, [x0]
     450: 90000001     	adrp	x1, 0x0 <ltmp0>
     454: 91000021     	add	x1, x1, #0x0
     458: 94000000     	bl	0x458 <ltmp0+0x458>
     45c: 90000001     	adrp	x1, 0x0 <ltmp0>
     460: 91000021     	add	x1, x1, #0x0
     464: 94000000     	bl	0x464 <ltmp0+0x464>
     468: 14000013     	b	0x4b4 <ltmp0+0x4b4>
     46c: f85d83a8     	ldur	x8, [x29, #-0x28]
     470: f81e83a8     	stur	x8, [x29, #-0x18]
     474: d2800200     	mov	x0, #0x10               ; =16
     478: 94000000     	bl	0x478 <ltmp0+0x478>
     47c: f900001f     	str	xzr, [x0]
     480: f900041f     	str	xzr, [x0, #0x8]
     484: f85e83a8     	ldur	x8, [x29, #-0x18]
     488: f9000500     	str	x0, [x8, #0x8]
     48c: f85e83a8     	ldur	x8, [x29, #-0x18]
     490: f9400508     	ldr	x8, [x8, #0x8]
     494: f81e83a8     	stur	x8, [x29, #-0x18]
     498: 785fa3a8     	ldurh	w8, [x29, #-0x6]
     49c: f85e83a9     	ldur	x9, [x29, #-0x18]
     4a0: 79000128     	strh	w8, [x9]
     4a4: f85d83a8     	ldur	x8, [x29, #-0x28]
     4a8: f85e83a9     	ldur	x9, [x29, #-0x18]
     4ac: f9000528     	str	x8, [x9, #0x8]
     4b0: 14000001     	b	0x4b4 <ltmp0+0x4b4>
     4b4: 14000001     	b	0x4b8 <ltmp0+0x4b8>
     4b8: f85f03a8     	ldur	x8, [x29, #-0x10]
     4bc: f81e83a8     	stur	x8, [x29, #-0x18]
     4c0: 14000001     	b	0x4c4 <ltmp0+0x4c4>
     4c4: f85e83a8     	ldur	x8, [x29, #-0x18]
     4c8: 79400101     	ldrh	w1, [x8]
     4cc: 90000000     	adrp	x0, 0x0 <ltmp0>
     4d0: f9400000     	ldr	x0, [x0]
     4d4: 94000000     	bl	0x4d4 <ltmp0+0x4d4>
     4d8: 90000001     	adrp	x1, 0x0 <ltmp0>
     4dc: 91000021     	add	x1, x1, #0x0
     4e0: 94000000     	bl	0x4e0 <ltmp0+0x4e0>
     4e4: f85e83a8     	ldur	x8, [x29, #-0x18]
     4e8: f9400508     	ldr	x8, [x8, #0x8]
     4ec: f81e83a8     	stur	x8, [x29, #-0x18]
     4f0: f85e83a8     	ldur	x8, [x29, #-0x18]
     4f4: f1000108     	subs	x8, x8, #0x0
     4f8: 1a9f07e8     	cset	w8, ne
     4fc: 37000068     	tbnz	w8, #0x0, 0x508 <ltmp0+0x508>
     500: 14000001     	b	0x504 <ltmp0+0x504>
     504: 14000002     	b	0x50c <ltmp0+0x50c>
     508: 17ffffef     	b	0x4c4 <ltmp0+0x4c4>
     50c: 52800000     	mov	w0, #0x0                ; =0
     510: a9477bfd     	ldp	x29, x30, [sp, #0x70]
     514: 910203ff     	add	sp, sp, #0x80
     518: d65f03c0     	ret

000000000000051c <__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsB8ne180100EPFRS3_S4_E>:
     51c: d10083ff     	sub	sp, sp, #0x20
     520: a9017bfd     	stp	x29, x30, [sp, #0x10]
     524: 910043fd     	add	x29, sp, #0x10
     528: f90007e0     	str	x0, [sp, #0x8]
     52c: f90003e1     	str	x1, [sp]
     530: f94007e0     	ldr	x0, [sp, #0x8]
     534: f94003e8     	ldr	x8, [sp]
     538: d63f0100     	blr	x8
     53c: a9417bfd     	ldp	x29, x30, [sp, #0x10]
     540: 910083ff     	add	sp, sp, #0x20
     544: d65f03c0     	ret

0000000000000548 <__ZNSt3__14endlB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_>:
     548: d10083ff     	sub	sp, sp, #0x20
     54c: a9017bfd     	stp	x29, x30, [sp, #0x10]
     550: 910043fd     	add	x29, sp, #0x10
     554: f90007e0     	str	x0, [sp, #0x8]
     558: f94007e8     	ldr	x8, [sp, #0x8]
     55c: f90003e8     	str	x8, [sp]
     560: f94007e8     	ldr	x8, [sp, #0x8]
     564: f9400109     	ldr	x9, [x8]
     568: f85e8129     	ldur	x9, [x9, #-0x18]
     56c: 8b090100     	add	x0, x8, x9
     570: 52800141     	mov	w1, #0xa                ; =10
     574: 94000000     	bl	0x574 <__ZNSt3__14endlB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_+0x2c>
     578: aa0003e8     	mov	x8, x0
     57c: f94003e0     	ldr	x0, [sp]
     580: 13001d01     	sxtb	w1, w8
     584: 94000000     	bl	0x584 <__ZNSt3__14endlB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_+0x3c>
     588: f94007e0     	ldr	x0, [sp, #0x8]
     58c: 94000000     	bl	0x58c <__ZNSt3__14endlB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_+0x44>
     590: f94007e0     	ldr	x0, [sp, #0x8]
     594: a9417bfd     	ldp	x29, x30, [sp, #0x10]
     598: 910083ff     	add	sp, sp, #0x20
     59c: d65f03c0     	ret

00000000000005a0 <__ZNSt3__1lsB8ne180100INS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc>:
     5a0: d100c3ff     	sub	sp, sp, #0x30
     5a4: a9027bfd     	stp	x29, x30, [sp, #0x20]
     5a8: 910083fd     	add	x29, sp, #0x20
     5ac: f81f83a0     	stur	x0, [x29, #-0x8]
     5b0: f9000be1     	str	x1, [sp, #0x10]
     5b4: f85f83a8     	ldur	x8, [x29, #-0x8]
     5b8: f90007e8     	str	x8, [sp, #0x8]
     5bc: f9400be8     	ldr	x8, [sp, #0x10]
     5c0: f90003e8     	str	x8, [sp]
     5c4: f9400be0     	ldr	x0, [sp, #0x10]
     5c8: 94000000     	bl	0x5c8 <__ZNSt3__1lsB8ne180100INS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc+0x28>
     5cc: f94003e1     	ldr	x1, [sp]
     5d0: aa0003e2     	mov	x2, x0
     5d4: f94007e0     	ldr	x0, [sp, #0x8]
     5d8: 94000000     	bl	0x5d8 <__ZNSt3__1lsB8ne180100INS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc+0x38>
     5dc: a9427bfd     	ldp	x29, x30, [sp, #0x20]
     5e0: 9100c3ff     	add	sp, sp, #0x30
     5e4: d65f03c0     	ret

00000000000005e8 <__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenB8ne180100Ec>:
     5e8: d10143ff     	sub	sp, sp, #0x50
     5ec: a9047bfd     	stp	x29, x30, [sp, #0x40]
     5f0: 910103fd     	add	x29, sp, #0x40
     5f4: f81f83a0     	stur	x0, [x29, #-0x8]
     5f8: 381f73a1     	sturb	w1, [x29, #-0x9]
     5fc: f85f83a0     	ldur	x0, [x29, #-0x8]
     600: d10063a8     	sub	x8, x29, #0x18
     604: f90007e8     	str	x8, [sp, #0x8]
     608: 94000000     	bl	0x608 <__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenB8ne180100Ec+0x20>
     60c: f94007e0     	ldr	x0, [sp, #0x8]
     610: 94000000     	bl	0x610 <__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenB8ne180100Ec+0x28>
     614: f9000be0     	str	x0, [sp, #0x10]
     618: 14000001     	b	0x61c <__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenB8ne180100Ec+0x34>
     61c: f9400be0     	ldr	x0, [sp, #0x10]
     620: 38df73a1     	ldursb	w1, [x29, #-0x9]
     624: 94000000     	bl	0x624 <__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenB8ne180100Ec+0x3c>
     628: b90007e0     	str	w0, [sp, #0x4]
     62c: 14000001     	b	0x630 <__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenB8ne180100Ec+0x48>
     630: d10063a0     	sub	x0, x29, #0x18
     634: 94000000     	bl	0x634 <__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenB8ne180100Ec+0x4c>
     638: b94007e8     	ldr	w8, [sp, #0x4]
     63c: 13001d00     	sxtb	w0, w8
     640: a9447bfd     	ldp	x29, x30, [sp, #0x40]
     644: 910143ff     	add	sp, sp, #0x50
     648: d65f03c0     	ret
     64c: f90013e0     	str	x0, [sp, #0x20]
     650: aa0103e8     	mov	x8, x1
     654: b9001fe8     	str	w8, [sp, #0x1c]
     658: d10063a0     	sub	x0, x29, #0x18
     65c: 94000000     	bl	0x65c <__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenB8ne180100Ec+0x74>
     660: 14000001     	b	0x664 <__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenB8ne180100Ec+0x7c>
     664: 14000001     	b	0x668 <__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenB8ne180100Ec+0x80>
     668: f94013e0     	ldr	x0, [sp, #0x20]
     66c: 94000000     	bl	0x66c <__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenB8ne180100Ec+0x84>
     670: 94000000     	bl	0x670 <__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenB8ne180100Ec+0x88>

0000000000000674 <__ZNSt3__19use_facetB8ne180100INS_5ctypeIcEEEERKT_RKNS_6localeE>:
     674: d10083ff     	sub	sp, sp, #0x20
     678: a9017bfd     	stp	x29, x30, [sp, #0x10]
     67c: 910043fd     	add	x29, sp, #0x10
     680: f90007e0     	str	x0, [sp, #0x8]
     684: f94007e0     	ldr	x0, [sp, #0x8]
     688: 90000001     	adrp	x1, 0x0 <ltmp0>
     68c: f9400021     	ldr	x1, [x1]
     690: 94000000     	bl	0x690 <__ZNSt3__19use_facetB8ne180100INS_5ctypeIcEEEERKT_RKNS_6localeE+0x1c>
     694: a9417bfd     	ldp	x29, x30, [sp, #0x10]
     698: 910083ff     	add	sp, sp, #0x20
     69c: d65f03c0     	ret

00000000000006a0 <__ZNKSt3__15ctypeIcE5widenB8ne180100Ec>:
     6a0: d10083ff     	sub	sp, sp, #0x20
     6a4: a9017bfd     	stp	x29, x30, [sp, #0x10]
     6a8: 910043fd     	add	x29, sp, #0x10
     6ac: f90007e0     	str	x0, [sp, #0x8]
     6b0: 39001fe1     	strb	w1, [sp, #0x7]
     6b4: f94007e0     	ldr	x0, [sp, #0x8]
     6b8: 39c01fe1     	ldrsb	w1, [sp, #0x7]
     6bc: f9400008     	ldr	x8, [x0]
     6c0: f9401d08     	ldr	x8, [x8, #0x38]
     6c4: d63f0100     	blr	x8
     6c8: 13001c00     	sxtb	w0, w0
     6cc: a9417bfd     	ldp	x29, x30, [sp, #0x10]
     6d0: 910083ff     	add	sp, sp, #0x20
     6d4: d65f03c0     	ret

00000000000006d8 <___clang_call_terminate>:
     6d8: a9bf7bfd     	stp	x29, x30, [sp, #-0x10]!
     6dc: 910003fd     	mov	x29, sp
     6e0: 94000000     	bl	0x6e0 <___clang_call_terminate+0x8>
     6e4: 94000000     	bl	0x6e4 <___clang_call_terminate+0xc>

00000000000006e8 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m>:
     6e8: d10283ff     	sub	sp, sp, #0xa0
     6ec: a9097bfd     	stp	x29, x30, [sp, #0x90]
     6f0: 910243fd     	add	x29, sp, #0x90
     6f4: f81f83a0     	stur	x0, [x29, #-0x8]
     6f8: f81f03a1     	stur	x1, [x29, #-0x10]
     6fc: f81e83a2     	stur	x2, [x29, #-0x18]
     700: f85f83a1     	ldur	x1, [x29, #-0x8]
     704: d100a3a0     	sub	x0, x29, #0x28
     708: 94000000     	bl	0x708 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x20>
     70c: 14000001     	b	0x710 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x28>
     710: d100a3a0     	sub	x0, x29, #0x28
     714: 94000000     	bl	0x714 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x2c>
     718: b90047e0     	str	w0, [sp, #0x44]
     71c: 14000001     	b	0x720 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x38>
     720: b94047e8     	ldr	w8, [sp, #0x44]
     724: 36000a48     	tbz	w8, #0x0, 0x86c <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x184>
     728: 14000001     	b	0x72c <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x44>
     72c: f85f83a1     	ldur	x1, [x29, #-0x8]
     730: 910123e0     	add	x0, sp, #0x48
     734: 94000000     	bl	0x734 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x4c>
     738: f85f03a8     	ldur	x8, [x29, #-0x10]
     73c: f9001fe8     	str	x8, [sp, #0x38]
     740: f85f83a8     	ldur	x8, [x29, #-0x8]
     744: f9400109     	ldr	x9, [x8]
     748: f85e8129     	ldur	x9, [x9, #-0x18]
     74c: 8b090100     	add	x0, x8, x9
     750: 94000000     	bl	0x750 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x68>
     754: b90043e0     	str	w0, [sp, #0x40]
     758: 14000001     	b	0x75c <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x74>
     75c: b94043e8     	ldr	w8, [sp, #0x40]
     760: 52801609     	mov	w9, #0xb0               ; =176
     764: 0a090108     	and	w8, w8, w9
     768: 71008108     	subs	w8, w8, #0x20
     76c: 1a9f07e8     	cset	w8, ne
     770: 370000e8     	tbnz	w8, #0x0, 0x78c <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xa4>
     774: 14000001     	b	0x778 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x90>
     778: f85f03a8     	ldur	x8, [x29, #-0x10]
     77c: f85e83a9     	ldur	x9, [x29, #-0x18]
     780: 8b090108     	add	x8, x8, x9
     784: f9001be8     	str	x8, [sp, #0x30]
     788: 14000004     	b	0x798 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xb0>
     78c: f85f03a8     	ldur	x8, [x29, #-0x10]
     790: f9001be8     	str	x8, [sp, #0x30]
     794: 14000001     	b	0x798 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xb0>
     798: f9401be8     	ldr	x8, [sp, #0x30]
     79c: f9000be8     	str	x8, [sp, #0x10]
     7a0: f85f03a8     	ldur	x8, [x29, #-0x10]
     7a4: f85e83a9     	ldur	x9, [x29, #-0x18]
     7a8: 8b090108     	add	x8, x8, x9
     7ac: f9000fe8     	str	x8, [sp, #0x18]
     7b0: f85f83a8     	ldur	x8, [x29, #-0x8]
     7b4: f9400109     	ldr	x9, [x8]
     7b8: f85e8129     	ldur	x9, [x9, #-0x18]
     7bc: 8b090108     	add	x8, x8, x9
     7c0: f90013e8     	str	x8, [sp, #0x20]
     7c4: f85f83a8     	ldur	x8, [x29, #-0x8]
     7c8: f9400109     	ldr	x9, [x8]
     7cc: f85e8129     	ldur	x9, [x9, #-0x18]
     7d0: 8b090100     	add	x0, x8, x9
     7d4: 94000000     	bl	0x7d4 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xec>
     7d8: b9002fe0     	str	w0, [sp, #0x2c]
     7dc: 14000001     	b	0x7e0 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xf8>
     7e0: b9402fe8     	ldr	w8, [sp, #0x2c]
     7e4: f94013e4     	ldr	x4, [sp, #0x20]
     7e8: f9400fe3     	ldr	x3, [sp, #0x18]
     7ec: f9400be2     	ldr	x2, [sp, #0x10]
     7f0: f9401fe1     	ldr	x1, [sp, #0x38]
     7f4: f94027e0     	ldr	x0, [sp, #0x48]
     7f8: 13001d05     	sxtb	w5, w8
     7fc: 94000000     	bl	0x7fc <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x114>
     800: f90007e0     	str	x0, [sp, #0x8]
     804: 14000001     	b	0x808 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x120>
     808: f94007e8     	ldr	x8, [sp, #0x8]
     80c: d10103a0     	sub	x0, x29, #0x40
     810: f81c03a8     	stur	x8, [x29, #-0x40]
     814: 94000000     	bl	0x814 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x12c>
     818: 36000280     	tbz	w0, #0x0, 0x868 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x180>
     81c: 14000001     	b	0x820 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x138>
     820: f85f83a8     	ldur	x8, [x29, #-0x8]
     824: f9400109     	ldr	x9, [x8]
     828: f85e8129     	ldur	x9, [x9, #-0x18]
     82c: 8b090100     	add	x0, x8, x9
     830: 528000a1     	mov	w1, #0x5                ; =5
     834: 94000000     	bl	0x834 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x14c>
     838: 14000001     	b	0x83c <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x154>
     83c: 1400000b     	b	0x868 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x180>
     840: f81d03a0     	stur	x0, [x29, #-0x30]
     844: aa0103e8     	mov	x8, x1
     848: b81cc3a8     	stur	w8, [x29, #-0x34]
     84c: 1400000d     	b	0x880 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x198>
     850: f81d03a0     	stur	x0, [x29, #-0x30]
     854: aa0103e8     	mov	x8, x1
     858: b81cc3a8     	stur	w8, [x29, #-0x34]
     85c: d100a3a0     	sub	x0, x29, #0x28
     860: 94000000     	bl	0x860 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x178>
     864: 14000006     	b	0x87c <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x194>
     868: 14000001     	b	0x86c <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x184>
     86c: d100a3a0     	sub	x0, x29, #0x28
     870: 94000000     	bl	0x870 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x188>
     874: 14000001     	b	0x878 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x190>
     878: 1400000c     	b	0x8a8 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x1c0>
     87c: 14000001     	b	0x880 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x198>
     880: f85d03a0     	ldur	x0, [x29, #-0x30]
     884: 94000000     	bl	0x884 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x19c>
     888: f85f83a8     	ldur	x8, [x29, #-0x8]
     88c: f9400109     	ldr	x9, [x8]
     890: f85e8129     	ldur	x9, [x9, #-0x18]
     894: 8b090100     	add	x0, x8, x9
     898: 94000000     	bl	0x898 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x1b0>
     89c: 14000001     	b	0x8a0 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x1b8>
     8a0: 94000000     	bl	0x8a0 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x1b8>
     8a4: 14000001     	b	0x8a8 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x1c0>
     8a8: f85f83a0     	ldur	x0, [x29, #-0x8]
     8ac: a9497bfd     	ldp	x29, x30, [sp, #0x90]
     8b0: 910283ff     	add	sp, sp, #0xa0
     8b4: d65f03c0     	ret
     8b8: f81d03a0     	stur	x0, [x29, #-0x30]
     8bc: aa0103e8     	mov	x8, x1
     8c0: b81cc3a8     	stur	w8, [x29, #-0x34]
     8c4: 94000000     	bl	0x8c4 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x1dc>
     8c8: 14000001     	b	0x8cc <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x1e4>
     8cc: 14000001     	b	0x8d0 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x1e8>
     8d0: f85d03a0     	ldur	x0, [x29, #-0x30]
     8d4: 94000000     	bl	0x8d4 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x1ec>
     8d8: 94000000     	bl	0x8d8 <__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x1f0>

00000000000008dc <__ZNSt3__111char_traitsIcE6lengthB8ne180100EPKc>:
     8dc: d100c3ff     	sub	sp, sp, #0x30
     8e0: a9027bfd     	stp	x29, x30, [sp, #0x20]
     8e4: 910083fd     	add	x29, sp, #0x20
     8e8: f81f83a0     	stur	x0, [x29, #-0x8]
     8ec: f85f83a0     	ldur	x0, [x29, #-0x8]
     8f0: 94000000     	bl	0x8f0 <__ZNSt3__111char_traitsIcE6lengthB8ne180100EPKc+0x14>
     8f4: f90003e0     	str	x0, [sp]
     8f8: 14000001     	b	0x8fc <__ZNSt3__111char_traitsIcE6lengthB8ne180100EPKc+0x20>
     8fc: f94003e0     	ldr	x0, [sp]
     900: a9427bfd     	ldp	x29, x30, [sp, #0x20]
     904: 9100c3ff     	add	sp, sp, #0x30
     908: d65f03c0     	ret
     90c: f9000be0     	str	x0, [sp, #0x10]
     910: aa0103e8     	mov	x8, x1
     914: b9000fe8     	str	w8, [sp, #0xc]
     918: 14000001     	b	0x91c <__ZNSt3__111char_traitsIcE6lengthB8ne180100EPKc+0x40>
     91c: f9400be0     	ldr	x0, [sp, #0x10]
     920: 94000000     	bl	0x920 <__ZNSt3__111char_traitsIcE6lengthB8ne180100EPKc+0x44>

0000000000000924 <__ZNKSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentrycvbB8ne180100Ev>:
     924: d10043ff     	sub	sp, sp, #0x10
     928: f90007e0     	str	x0, [sp, #0x8]
     92c: f94007e8     	ldr	x8, [sp, #0x8]
     930: 39400108     	ldrb	w8, [x8]
     934: 12000100     	and	w0, w8, #0x1
     938: 910043ff     	add	sp, sp, #0x10
     93c: d65f03c0     	ret

0000000000000940 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_>:
     940: d10283ff     	sub	sp, sp, #0xa0
     944: a9097bfd     	stp	x29, x30, [sp, #0x90]
     948: 910243fd     	add	x29, sp, #0x90
     94c: f81f03a0     	stur	x0, [x29, #-0x10]
     950: f81e83a1     	stur	x1, [x29, #-0x18]
     954: f81e03a2     	stur	x2, [x29, #-0x20]
     958: f81d83a3     	stur	x3, [x29, #-0x28]
     95c: f81d03a4     	stur	x4, [x29, #-0x30]
     960: 381cf3a5     	sturb	w5, [x29, #-0x31]
     964: f85f03a8     	ldur	x8, [x29, #-0x10]
     968: f1000108     	subs	x8, x8, #0x0
     96c: 1a9f07e8     	cset	w8, ne
     970: 370000a8     	tbnz	w8, #0x0, 0x984 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x44>
     974: 14000001     	b	0x978 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x38>
     978: f85f03a8     	ldur	x8, [x29, #-0x10]
     97c: f81f83a8     	stur	x8, [x29, #-0x8]
     980: 1400007b     	b	0xb6c <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x22c>
     984: f85d83a8     	ldur	x8, [x29, #-0x28]
     988: f85e83a9     	ldur	x9, [x29, #-0x18]
     98c: eb090108     	subs	x8, x8, x9
     990: f81c03a8     	stur	x8, [x29, #-0x40]
     994: f85d03a0     	ldur	x0, [x29, #-0x30]
     998: 94000000     	bl	0x998 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x58>
     99c: f90027e0     	str	x0, [sp, #0x48]
     9a0: f94027e8     	ldr	x8, [sp, #0x48]
     9a4: f85c03a9     	ldur	x9, [x29, #-0x40]
     9a8: eb090108     	subs	x8, x8, x9
     9ac: 1a9fc7e8     	cset	w8, le
     9b0: 370000e8     	tbnz	w8, #0x0, 0x9cc <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x8c>
     9b4: 14000001     	b	0x9b8 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x78>
     9b8: f85c03a9     	ldur	x9, [x29, #-0x40]
     9bc: f94027e8     	ldr	x8, [sp, #0x48]
     9c0: eb090108     	subs	x8, x8, x9
     9c4: f90027e8     	str	x8, [sp, #0x48]
     9c8: 14000003     	b	0x9d4 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x94>
     9cc: f90027ff     	str	xzr, [sp, #0x48]
     9d0: 14000001     	b	0x9d4 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x94>
     9d4: f85e03a8     	ldur	x8, [x29, #-0x20]
     9d8: f85e83a9     	ldur	x9, [x29, #-0x18]
     9dc: eb090108     	subs	x8, x8, x9
     9e0: f90023e8     	str	x8, [sp, #0x40]
     9e4: f94023e8     	ldr	x8, [sp, #0x40]
     9e8: f1000108     	subs	x8, x8, #0x0
     9ec: 1a9fc7e8     	cset	w8, le
     9f0: 37000208     	tbnz	w8, #0x0, 0xa30 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0xf0>
     9f4: 14000001     	b	0x9f8 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0xb8>
     9f8: f85f03a0     	ldur	x0, [x29, #-0x10]
     9fc: f85e83a1     	ldur	x1, [x29, #-0x18]
     a00: f94023e2     	ldr	x2, [sp, #0x40]
     a04: 94000000     	bl	0xa04 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0xc4>
     a08: f94023e8     	ldr	x8, [sp, #0x40]
     a0c: eb080008     	subs	x8, x0, x8
     a10: 1a9f17e8     	cset	w8, eq
     a14: 370000c8     	tbnz	w8, #0x0, 0xa2c <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0xec>
     a18: 14000001     	b	0xa1c <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0xdc>
     a1c: f81f03bf     	stur	xzr, [x29, #-0x10]
     a20: f85f03a8     	ldur	x8, [x29, #-0x10]
     a24: f81f83a8     	stur	x8, [x29, #-0x8]
     a28: 14000051     	b	0xb6c <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x22c>
     a2c: 14000001     	b	0xa30 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0xf0>
     a30: f94027e8     	ldr	x8, [sp, #0x48]
     a34: f1000108     	subs	x8, x8, #0x0
     a38: 1a9fc7e8     	cset	w8, le
     a3c: 370005e8     	tbnz	w8, #0x0, 0xaf8 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x1b8>
     a40: 14000001     	b	0xa44 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x104>
     a44: f94027e1     	ldr	x1, [sp, #0x48]
     a48: 38dcf3a2     	ldursb	w2, [x29, #-0x31]
     a4c: 9100a3e0     	add	x0, sp, #0x28
     a50: f90003e0     	str	x0, [sp]
     a54: 94000000     	bl	0xa54 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x114>
     a58: f94003e0     	ldr	x0, [sp]
     a5c: f85f03a8     	ldur	x8, [x29, #-0x10]
     a60: f90007e8     	str	x8, [sp, #0x8]
     a64: 94000000     	bl	0xa64 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x124>
     a68: aa0003e1     	mov	x1, x0
     a6c: f94007e0     	ldr	x0, [sp, #0x8]
     a70: f94027e2     	ldr	x2, [sp, #0x48]
     a74: 94000000     	bl	0xa74 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x134>
     a78: f9000be0     	str	x0, [sp, #0x10]
     a7c: 14000001     	b	0xa80 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x140>
     a80: f9400be8     	ldr	x8, [sp, #0x10]
     a84: f94027e9     	ldr	x9, [sp, #0x48]
     a88: eb090108     	subs	x8, x8, x9
     a8c: 1a9f17e8     	cset	w8, eq
     a90: 370001c8     	tbnz	w8, #0x0, 0xac8 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x188>
     a94: 14000001     	b	0xa98 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x158>
     a98: f81f03bf     	stur	xzr, [x29, #-0x10]
     a9c: f85f03a8     	ldur	x8, [x29, #-0x10]
     aa0: f81f83a8     	stur	x8, [x29, #-0x8]
     aa4: 52800028     	mov	w8, #0x1                ; =1
     aa8: b9001be8     	str	w8, [sp, #0x18]
     aac: 14000009     	b	0xad0 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x190>
     ab0: f90013e0     	str	x0, [sp, #0x20]
     ab4: aa0103e8     	mov	x8, x1
     ab8: b9001fe8     	str	w8, [sp, #0x1c]
     abc: 9100a3e0     	add	x0, sp, #0x28
     ac0: 94000000     	bl	0xac0 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x180>
     ac4: 1400000c     	b	0xaf4 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x1b4>
     ac8: b9001bff     	str	wzr, [sp, #0x18]
     acc: 14000001     	b	0xad0 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x190>
     ad0: 9100a3e0     	add	x0, sp, #0x28
     ad4: 94000000     	bl	0xad4 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x194>
     ad8: b9401be8     	ldr	w8, [sp, #0x18]
     adc: 71000108     	subs	w8, w8, #0x0
     ae0: 1a9f17e8     	cset	w8, eq
     ae4: 37000068     	tbnz	w8, #0x0, 0xaf0 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x1b0>
     ae8: 14000001     	b	0xaec <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x1ac>
     aec: 14000020     	b	0xb6c <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x22c>
     af0: 14000002     	b	0xaf8 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x1b8>
     af4: 14000022     	b	0xb7c <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x23c>
     af8: f85d83a8     	ldur	x8, [x29, #-0x28]
     afc: f85e03a9     	ldur	x9, [x29, #-0x20]
     b00: eb090108     	subs	x8, x8, x9
     b04: f90023e8     	str	x8, [sp, #0x40]
     b08: f94023e8     	ldr	x8, [sp, #0x40]
     b0c: f1000108     	subs	x8, x8, #0x0
     b10: 1a9fc7e8     	cset	w8, le
     b14: 37000208     	tbnz	w8, #0x0, 0xb54 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x214>
     b18: 14000001     	b	0xb1c <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x1dc>
     b1c: f85f03a0     	ldur	x0, [x29, #-0x10]
     b20: f85e03a1     	ldur	x1, [x29, #-0x20]
     b24: f94023e2     	ldr	x2, [sp, #0x40]
     b28: 94000000     	bl	0xb28 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x1e8>
     b2c: f94023e8     	ldr	x8, [sp, #0x40]
     b30: eb080008     	subs	x8, x0, x8
     b34: 1a9f17e8     	cset	w8, eq
     b38: 370000c8     	tbnz	w8, #0x0, 0xb50 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x210>
     b3c: 14000001     	b	0xb40 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x200>
     b40: f81f03bf     	stur	xzr, [x29, #-0x10]
     b44: f85f03a8     	ldur	x8, [x29, #-0x10]
     b48: f81f83a8     	stur	x8, [x29, #-0x8]
     b4c: 14000008     	b	0xb6c <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x22c>
     b50: 14000001     	b	0xb54 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x214>
     b54: f85d03a0     	ldur	x0, [x29, #-0x30]
     b58: d2800001     	mov	x1, #0x0                ; =0
     b5c: 94000000     	bl	0xb5c <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x21c>
     b60: f85f03a8     	ldur	x8, [x29, #-0x10]
     b64: f81f83a8     	stur	x8, [x29, #-0x8]
     b68: 14000001     	b	0xb6c <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x22c>
     b6c: f85f83a0     	ldur	x0, [x29, #-0x8]
     b70: a9497bfd     	ldp	x29, x30, [sp, #0x90]
     b74: 910283ff     	add	sp, sp, #0xa0
     b78: d65f03c0     	ret
     b7c: f94013e0     	ldr	x0, [sp, #0x20]
     b80: 94000000     	bl	0xb80 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x240>
     b84: 94000000     	bl	0xb84 <__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_+0x244>

0000000000000b88 <__ZNSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEEC1B8ne180100ERNS_13basic_ostreamIcS2_EE>:
     b88: d100c3ff     	sub	sp, sp, #0x30
     b8c: a9027bfd     	stp	x29, x30, [sp, #0x20]
     b90: 910083fd     	add	x29, sp, #0x20
     b94: f81f83a0     	stur	x0, [x29, #-0x8]
     b98: f9000be1     	str	x1, [sp, #0x10]
     b9c: f85f83a0     	ldur	x0, [x29, #-0x8]
     ba0: f90007e0     	str	x0, [sp, #0x8]
     ba4: f9400be1     	ldr	x1, [sp, #0x10]
     ba8: 94000000     	bl	0xba8 <__ZNSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEEC1B8ne180100ERNS_13basic_ostreamIcS2_EE+0x20>
     bac: f94007e0     	ldr	x0, [sp, #0x8]
     bb0: a9427bfd     	ldp	x29, x30, [sp, #0x20]
     bb4: 9100c3ff     	add	sp, sp, #0x30
     bb8: d65f03c0     	ret

0000000000000bbc <__ZNKSt3__18ios_base5flagsB8ne180100Ev>:
     bbc: d10043ff     	sub	sp, sp, #0x10
     bc0: f90007e0     	str	x0, [sp, #0x8]
     bc4: f94007e8     	ldr	x8, [sp, #0x8]
     bc8: b9400900     	ldr	w0, [x8, #0x8]
     bcc: 910043ff     	add	sp, sp, #0x10
     bd0: d65f03c0     	ret

0000000000000bd4 <__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE4fillB8ne180100Ev>:
     bd4: d10083ff     	sub	sp, sp, #0x20
     bd8: a9017bfd     	stp	x29, x30, [sp, #0x10]
     bdc: 910043fd     	add	x29, sp, #0x10
     be0: f90007e0     	str	x0, [sp, #0x8]
     be4: f94007e8     	ldr	x8, [sp, #0x8]
     be8: f90003e8     	str	x8, [sp]
     bec: 94000000     	bl	0xbec <__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE4fillB8ne180100Ev+0x18>
     bf0: f94003e8     	ldr	x8, [sp]
     bf4: b9409101     	ldr	w1, [x8, #0x90]
     bf8: 94000000     	bl	0xbf8 <__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE4fillB8ne180100Ev+0x24>
     bfc: 36000120     	tbz	w0, #0x0, 0xc20 <__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE4fillB8ne180100Ev+0x4c>
     c00: 14000001     	b	0xc04 <__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE4fillB8ne180100Ev+0x30>
     c04: f94003e0     	ldr	x0, [sp]
     c08: 52800401     	mov	w1, #0x20               ; =32
     c0c: 94000000     	bl	0xc0c <__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE4fillB8ne180100Ev+0x38>
     c10: f94003e9     	ldr	x9, [sp]
     c14: 13001c08     	sxtb	w8, w0
     c18: b9009128     	str	w8, [x9, #0x90]
     c1c: 14000001     	b	0xc20 <__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE4fillB8ne180100Ev+0x4c>
     c20: f94003e8     	ldr	x8, [sp]
     c24: b9409108     	ldr	w8, [x8, #0x90]
     c28: 13001d00     	sxtb	w0, w8
     c2c: a9417bfd     	ldp	x29, x30, [sp, #0x10]
     c30: 910083ff     	add	sp, sp, #0x20
     c34: d65f03c0     	ret

0000000000000c38 <__ZNKSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEE6failedB8ne180100Ev>:
     c38: d10043ff     	sub	sp, sp, #0x10
     c3c: f90007e0     	str	x0, [sp, #0x8]
     c40: f94007e8     	ldr	x8, [sp, #0x8]
     c44: f9400108     	ldr	x8, [x8]
     c48: f1000108     	subs	x8, x8, #0x0
     c4c: 1a9f17e8     	cset	w8, eq
     c50: 12000100     	and	w0, w8, #0x1
     c54: 910043ff     	add	sp, sp, #0x10
     c58: d65f03c0     	ret

0000000000000c5c <__ZNSt3__19basic_iosIcNS_11char_traitsIcEEE8setstateB8ne180100Ej>:
     c5c: d10083ff     	sub	sp, sp, #0x20
     c60: a9017bfd     	stp	x29, x30, [sp, #0x10]
     c64: 910043fd     	add	x29, sp, #0x10
     c68: f90007e0     	str	x0, [sp, #0x8]
     c6c: b90007e1     	str	w1, [sp, #0x4]
     c70: f94007e0     	ldr	x0, [sp, #0x8]
     c74: b94007e1     	ldr	w1, [sp, #0x4]
     c78: 94000000     	bl	0xc78 <__ZNSt3__19basic_iosIcNS_11char_traitsIcEEE8setstateB8ne180100Ej+0x1c>
     c7c: a9417bfd     	ldp	x29, x30, [sp, #0x10]
     c80: 910083ff     	add	sp, sp, #0x20
     c84: d65f03c0     	ret

0000000000000c88 <__ZNKSt3__18ios_base5widthB8ne180100Ev>:
     c88: d10043ff     	sub	sp, sp, #0x10
     c8c: f90007e0     	str	x0, [sp, #0x8]
     c90: f94007e8     	ldr	x8, [sp, #0x8]
     c94: f9400d00     	ldr	x0, [x8, #0x18]
     c98: 910043ff     	add	sp, sp, #0x10
     c9c: d65f03c0     	ret

0000000000000ca0 <__ZNSt3__115basic_streambufIcNS_11char_traitsIcEEE5sputnB8ne180100EPKcl>:
     ca0: d100c3ff     	sub	sp, sp, #0x30
     ca4: a9027bfd     	stp	x29, x30, [sp, #0x20]
     ca8: 910083fd     	add	x29, sp, #0x20
     cac: f81f83a0     	stur	x0, [x29, #-0x8]
     cb0: f9000be1     	str	x1, [sp, #0x10]
     cb4: f90007e2     	str	x2, [sp, #0x8]
     cb8: f85f83a0     	ldur	x0, [x29, #-0x8]
     cbc: f9400be1     	ldr	x1, [sp, #0x10]
     cc0: f94007e2     	ldr	x2, [sp, #0x8]
     cc4: f9400008     	ldr	x8, [x0]
     cc8: f9403108     	ldr	x8, [x8, #0x60]
     ccc: d63f0100     	blr	x8
     cd0: a9427bfd     	ldp	x29, x30, [sp, #0x20]
     cd4: 9100c3ff     	add	sp, sp, #0x30
     cd8: d65f03c0     	ret

0000000000000cdc <__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1B8ne180100Emc>:
     cdc: d100c3ff     	sub	sp, sp, #0x30
     ce0: a9027bfd     	stp	x29, x30, [sp, #0x20]
     ce4: 910083fd     	add	x29, sp, #0x20
     ce8: f81f83a0     	stur	x0, [x29, #-0x8]
     cec: f9000be1     	str	x1, [sp, #0x10]
     cf0: 39003fe2     	strb	w2, [sp, #0xf]
     cf4: f85f83a0     	ldur	x0, [x29, #-0x8]
     cf8: f90003e0     	str	x0, [sp]
     cfc: f9400be1     	ldr	x1, [sp, #0x10]
     d00: 39c03fe2     	ldrsb	w2, [sp, #0xf]
     d04: 94000000     	bl	0xd04 <__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1B8ne180100Emc+0x28>
     d08: f94003e0     	ldr	x0, [sp]
     d0c: a9427bfd     	ldp	x29, x30, [sp, #0x20]
     d10: 9100c3ff     	add	sp, sp, #0x30
     d14: d65f03c0     	ret

0000000000000d18 <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4dataB8ne180100Ev>:
     d18: d10083ff     	sub	sp, sp, #0x20
     d1c: a9017bfd     	stp	x29, x30, [sp, #0x10]
     d20: 910043fd     	add	x29, sp, #0x10
     d24: f90007e0     	str	x0, [sp, #0x8]
     d28: f94007e0     	ldr	x0, [sp, #0x8]
     d2c: 94000000     	bl	0xd2c <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4dataB8ne180100Ev+0x14>
     d30: 94000000     	bl	0xd30 <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4dataB8ne180100Ev+0x18>
     d34: a9417bfd     	ldp	x29, x30, [sp, #0x10]
     d38: 910083ff     	add	sp, sp, #0x20
     d3c: d65f03c0     	ret

0000000000000d40 <__ZNSt3__18ios_base5widthB8ne180100El>:
     d40: d10083ff     	sub	sp, sp, #0x20
     d44: f9000fe0     	str	x0, [sp, #0x18]
     d48: f9000be1     	str	x1, [sp, #0x10]
     d4c: f9400fe9     	ldr	x9, [sp, #0x18]
     d50: f9400d28     	ldr	x8, [x9, #0x18]
     d54: f90007e8     	str	x8, [sp, #0x8]
     d58: f9400be8     	ldr	x8, [sp, #0x10]
     d5c: f9000d28     	str	x8, [x9, #0x18]
     d60: f94007e0     	ldr	x0, [sp, #0x8]
     d64: 910083ff     	add	sp, sp, #0x20
     d68: d65f03c0     	ret

0000000000000d6c <__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180100Emc>:
     d6c: d100c3ff     	sub	sp, sp, #0x30
     d70: a9027bfd     	stp	x29, x30, [sp, #0x20]
     d74: 910083fd     	add	x29, sp, #0x20
     d78: f81f83a0     	stur	x0, [x29, #-0x8]
     d7c: f9000be1     	str	x1, [sp, #0x10]
     d80: 39003fe2     	strb	w2, [sp, #0xf]
     d84: f85f83a0     	ldur	x0, [x29, #-0x8]
     d88: f90003e0     	str	x0, [sp]
     d8c: 91003be1     	add	x1, sp, #0xe
     d90: 910037e2     	add	x2, sp, #0xd
     d94: 94000000     	bl	0xd94 <__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180100Emc+0x28>
     d98: f94003e0     	ldr	x0, [sp]
     d9c: f9400be1     	ldr	x1, [sp, #0x10]
     da0: 39c03fe2     	ldrsb	w2, [sp, #0xf]
     da4: 94000000     	bl	0xda4 <__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180100Emc+0x38>
     da8: f94003e0     	ldr	x0, [sp]
     dac: a9427bfd     	ldp	x29, x30, [sp, #0x20]
     db0: 9100c3ff     	add	sp, sp, #0x30
     db4: d65f03c0     	ret

0000000000000db8 <__ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC1B8ne180100INS_18__default_init_tagESA_EEOT_OT0_>:
     db8: d100c3ff     	sub	sp, sp, #0x30
     dbc: a9027bfd     	stp	x29, x30, [sp, #0x20]
     dc0: 910083fd     	add	x29, sp, #0x20
     dc4: f81f83a0     	stur	x0, [x29, #-0x8]
     dc8: f9000be1     	str	x1, [sp, #0x10]
     dcc: f90007e2     	str	x2, [sp, #0x8]
     dd0: f85f83a0     	ldur	x0, [x29, #-0x8]
     dd4: f90003e0     	str	x0, [sp]
     dd8: f9400be1     	ldr	x1, [sp, #0x10]
     ddc: f94007e2     	ldr	x2, [sp, #0x8]
     de0: 94000000     	bl	0xde0 <__ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC1B8ne180100INS_18__default_init_tagESA_EEOT_OT0_+0x28>
     de4: f94003e0     	ldr	x0, [sp]
     de8: a9427bfd     	ldp	x29, x30, [sp, #0x20]
     dec: 9100c3ff     	add	sp, sp, #0x30
     df0: d65f03c0     	ret

0000000000000df4 <__ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2B8ne180100INS_18__default_init_tagESA_EEOT_OT0_>:
     df4: d10103ff     	sub	sp, sp, #0x40
     df8: a9037bfd     	stp	x29, x30, [sp, #0x30]
     dfc: 9100c3fd     	add	x29, sp, #0x30
     e00: f81f83a0     	stur	x0, [x29, #-0x8]
     e04: f81f03a1     	stur	x1, [x29, #-0x10]
     e08: f9000fe2     	str	x2, [sp, #0x18]
     e0c: f85f83a0     	ldur	x0, [x29, #-0x8]
     e10: f90007e0     	str	x0, [sp, #0x8]
     e14: 94000000     	bl	0xe14 <__ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2B8ne180100INS_18__default_init_tagESA_EEOT_OT0_+0x20>
     e18: f94007e0     	ldr	x0, [sp, #0x8]
     e1c: 94000000     	bl	0xe1c <__ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2B8ne180100INS_18__default_init_tagESA_EEOT_OT0_+0x28>
     e20: f94007e0     	ldr	x0, [sp, #0x8]
     e24: a9437bfd     	ldp	x29, x30, [sp, #0x30]
     e28: 910103ff     	add	sp, sp, #0x40
     e2c: d65f03c0     	ret

0000000000000e30 <__ZNSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EEC2B8ne180100ENS_18__default_init_tagE>:
     e30: d10043ff     	sub	sp, sp, #0x10
     e34: f90003e0     	str	x0, [sp]
     e38: f94003e0     	ldr	x0, [sp]
     e3c: 910043ff     	add	sp, sp, #0x10
     e40: d65f03c0     	ret

0000000000000e44 <__ZNSt3__122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EEC2B8ne180100ENS_18__default_init_tagE>:
     e44: d100c3ff     	sub	sp, sp, #0x30
     e48: a9027bfd     	stp	x29, x30, [sp, #0x20]
     e4c: 910083fd     	add	x29, sp, #0x20
     e50: f9000be0     	str	x0, [sp, #0x10]
     e54: f9400be0     	ldr	x0, [sp, #0x10]
     e58: f90007e0     	str	x0, [sp, #0x8]
     e5c: 94000000     	bl	0xe5c <__ZNSt3__122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EEC2B8ne180100ENS_18__default_init_tagE+0x18>
     e60: f94007e0     	ldr	x0, [sp, #0x8]
     e64: a9427bfd     	ldp	x29, x30, [sp, #0x20]
     e68: 9100c3ff     	add	sp, sp, #0x30
     e6c: d65f03c0     	ret

0000000000000e70 <__ZNSt3__19allocatorIcEC2B8ne180100Ev>:
     e70: d10083ff     	sub	sp, sp, #0x20
     e74: a9017bfd     	stp	x29, x30, [sp, #0x10]
     e78: 910043fd     	add	x29, sp, #0x10
     e7c: f90007e0     	str	x0, [sp, #0x8]
     e80: f94007e0     	ldr	x0, [sp, #0x8]
     e84: f90003e0     	str	x0, [sp]
     e88: 94000000     	bl	0xe88 <__ZNSt3__19allocatorIcEC2B8ne180100Ev+0x18>
     e8c: f94003e0     	ldr	x0, [sp]
     e90: a9417bfd     	ldp	x29, x30, [sp, #0x10]
     e94: 910083ff     	add	sp, sp, #0x20
     e98: d65f03c0     	ret

0000000000000e9c <__ZNSt3__116__non_trivial_ifILb1ENS_9allocatorIcEEEC2B8ne180100Ev>:
     e9c: d10043ff     	sub	sp, sp, #0x10
     ea0: f90007e0     	str	x0, [sp, #0x8]
     ea4: f94007e0     	ldr	x0, [sp, #0x8]
     ea8: 910043ff     	add	sp, sp, #0x10
     eac: d65f03c0     	ret

0000000000000eb0 <__ZNSt3__112__to_addressB8ne180100IKcEEPT_S3_>:
     eb0: d10043ff     	sub	sp, sp, #0x10
     eb4: f90007e0     	str	x0, [sp, #0x8]
     eb8: f94007e0     	ldr	x0, [sp, #0x8]
     ebc: 910043ff     	add	sp, sp, #0x10
     ec0: d65f03c0     	ret

0000000000000ec4 <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerB8ne180100Ev>:
     ec4: d100c3ff     	sub	sp, sp, #0x30
     ec8: a9027bfd     	stp	x29, x30, [sp, #0x20]
     ecc: 910083fd     	add	x29, sp, #0x20
     ed0: f81f83a0     	stur	x0, [x29, #-0x8]
     ed4: f85f83a0     	ldur	x0, [x29, #-0x8]
     ed8: f9000be0     	str	x0, [sp, #0x10]
     edc: 94000000     	bl	0xedc <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerB8ne180100Ev+0x18>
     ee0: 360000c0     	tbz	w0, #0x0, 0xef8 <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerB8ne180100Ev+0x34>
     ee4: 14000001     	b	0xee8 <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerB8ne180100Ev+0x24>
     ee8: f9400be0     	ldr	x0, [sp, #0x10]
     eec: 94000000     	bl	0xeec <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerB8ne180100Ev+0x28>
     ef0: f90007e0     	str	x0, [sp, #0x8]
     ef4: 14000005     	b	0xf08 <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerB8ne180100Ev+0x44>
     ef8: f9400be0     	ldr	x0, [sp, #0x10]
     efc: 94000000     	bl	0xefc <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerB8ne180100Ev+0x38>
     f00: f90007e0     	str	x0, [sp, #0x8]
     f04: 14000001     	b	0xf08 <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerB8ne180100Ev+0x44>
     f08: f94007e0     	ldr	x0, [sp, #0x8]
     f0c: a9427bfd     	ldp	x29, x30, [sp, #0x20]
     f10: 9100c3ff     	add	sp, sp, #0x30
     f14: d65f03c0     	ret

0000000000000f18 <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longB8ne180100Ev>:
     f18: d100c3ff     	sub	sp, sp, #0x30
     f1c: a9027bfd     	stp	x29, x30, [sp, #0x20]
     f20: 910083fd     	add	x29, sp, #0x20
     f24: f9000be0     	str	x0, [sp, #0x10]
     f28: f9400be8     	ldr	x8, [sp, #0x10]
     f2c: f90007e8     	str	x8, [sp, #0x8]
     f30: 94000000     	bl	0xf30 <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longB8ne180100Ev+0x18>
     f34: 360001e0     	tbz	w0, #0x0, 0xf70 <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longB8ne180100Ev+0x58>
     f38: 14000001     	b	0xf3c <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longB8ne180100Ev+0x24>
     f3c: 52800008     	mov	w8, #0x0                ; =0
     f40: 36000188     	tbz	w8, #0x0, 0xf70 <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longB8ne180100Ev+0x58>
     f44: 14000001     	b	0xf48 <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longB8ne180100Ev+0x30>
     f48: f94007e0     	ldr	x0, [sp, #0x8]
     f4c: 94000000     	bl	0xf4c <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longB8ne180100Ev+0x34>
     f50: f9400808     	ldr	x8, [x0, #0x10]
     f54: d37ffd08     	lsr	x8, x8, #63
     f58: f1000108     	subs	x8, x8, #0x0
     f5c: 1a9f07e8     	cset	w8, ne
     f60: 12000108     	and	w8, w8, #0x1
     f64: 12000108     	and	w8, w8, #0x1
     f68: 381ff3a8     	sturb	w8, [x29, #-0x1]
     f6c: 1400000b     	b	0xf98 <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longB8ne180100Ev+0x80>
     f70: f94007e0     	ldr	x0, [sp, #0x8]
     f74: 94000000     	bl	0xf74 <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longB8ne180100Ev+0x5c>
     f78: 39405c08     	ldrb	w8, [x0, #0x17]
     f7c: 53077d08     	lsr	w8, w8, #7
     f80: 72001d08     	ands	w8, w8, #0xff
     f84: 1a9f07e8     	cset	w8, ne
     f88: 12000108     	and	w8, w8, #0x1
     f8c: 12000108     	and	w8, w8, #0x1
     f90: 381ff3a8     	sturb	w8, [x29, #-0x1]
     f94: 14000001     	b	0xf98 <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longB8ne180100Ev+0x80>
     f98: 385ff3a8     	ldurb	w8, [x29, #-0x1]
     f9c: 12000100     	and	w0, w8, #0x1
     fa0: a9427bfd     	ldp	x29, x30, [sp, #0x20]
     fa4: 9100c3ff     	add	sp, sp, #0x30
     fa8: d65f03c0     	ret

0000000000000fac <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerB8ne180100Ev>:
     fac: d10083ff     	sub	sp, sp, #0x20
     fb0: a9017bfd     	stp	x29, x30, [sp, #0x10]
     fb4: 910043fd     	add	x29, sp, #0x10
     fb8: f90007e0     	str	x0, [sp, #0x8]
     fbc: f94007e0     	ldr	x0, [sp, #0x8]
     fc0: 94000000     	bl	0xfc0 <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerB8ne180100Ev+0x14>
     fc4: f9400000     	ldr	x0, [x0]
     fc8: a9417bfd     	ldp	x29, x30, [sp, #0x10]
     fcc: 910083ff     	add	sp, sp, #0x20
     fd0: d65f03c0     	ret

0000000000000fd4 <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerB8ne180100Ev>:
     fd4: d10083ff     	sub	sp, sp, #0x20
     fd8: a9017bfd     	stp	x29, x30, [sp, #0x10]
     fdc: 910043fd     	add	x29, sp, #0x10
     fe0: f90007e0     	str	x0, [sp, #0x8]
     fe4: f94007e0     	ldr	x0, [sp, #0x8]
     fe8: 94000000     	bl	0xfe8 <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerB8ne180100Ev+0x14>
     fec: 94000000     	bl	0xfec <__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerB8ne180100Ev+0x18>
     ff0: a9417bfd     	ldp	x29, x30, [sp, #0x10]
     ff4: 910083ff     	add	sp, sp, #0x20
     ff8: d65f03c0     	ret

0000000000000ffc <__ZNSt3__130__libcpp_is_constant_evaluatedB8ne180100Ev>:
     ffc: 52800008     	mov	w8, #0x0                ; =0
    1000: 12000100     	and	w0, w8, #0x1
    1004: d65f03c0     	ret

0000000000001008 <__ZNKSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstB8ne180100Ev>:
    1008: d10083ff     	sub	sp, sp, #0x20
    100c: a9017bfd     	stp	x29, x30, [sp, #0x10]
    1010: 910043fd     	add	x29, sp, #0x10
    1014: f90007e0     	str	x0, [sp, #0x8]
    1018: f94007e0     	ldr	x0, [sp, #0x8]
    101c: 94000000     	bl	0x101c <__ZNKSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstB8ne180100Ev+0x14>
    1020: a9417bfd     	ldp	x29, x30, [sp, #0x10]
    1024: 910083ff     	add	sp, sp, #0x20
    1028: d65f03c0     	ret

000000000000102c <__ZNKSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getB8ne180100Ev>:
    102c: d10043ff     	sub	sp, sp, #0x10
    1030: f90007e0     	str	x0, [sp, #0x8]
    1034: f94007e0     	ldr	x0, [sp, #0x8]
    1038: 910043ff     	add	sp, sp, #0x10
    103c: d65f03c0     	ret

0000000000001040 <__ZNSt3__114pointer_traitsIPKcE10pointer_toB8ne180100ERS1_>:
    1040: d10043ff     	sub	sp, sp, #0x10
    1044: f90007e0     	str	x0, [sp, #0x8]
    1048: f94007e0     	ldr	x0, [sp, #0x8]
    104c: 910043ff     	add	sp, sp, #0x10
    1050: d65f03c0     	ret

0000000000001054 <__ZNSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEEC2B8ne180100ERNS_13basic_ostreamIcS2_EE>:
    1054: d10103ff     	sub	sp, sp, #0x40
    1058: a9037bfd     	stp	x29, x30, [sp, #0x30]
    105c: 9100c3fd     	add	x29, sp, #0x30
    1060: f81f83a0     	stur	x0, [x29, #-0x8]
    1064: f81f03a1     	stur	x1, [x29, #-0x10]
    1068: f85f83a8     	ldur	x8, [x29, #-0x8]
    106c: f90003e8     	str	x8, [sp]
    1070: f85f03a8     	ldur	x8, [x29, #-0x10]
    1074: f9400109     	ldr	x9, [x8]
    1078: f85e8129     	ldur	x9, [x9, #-0x18]
    107c: 8b090100     	add	x0, x8, x9
    1080: 94000000     	bl	0x1080 <__ZNSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEEC2B8ne180100ERNS_13basic_ostreamIcS2_EE+0x2c>
    1084: f90007e0     	str	x0, [sp, #0x8]
    1088: 14000001     	b	0x108c <__ZNSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEEC2B8ne180100ERNS_13basic_ostreamIcS2_EE+0x38>
    108c: f94003e0     	ldr	x0, [sp]
    1090: f94007e8     	ldr	x8, [sp, #0x8]
    1094: f9000008     	str	x8, [x0]
    1098: a9437bfd     	ldp	x29, x30, [sp, #0x30]
    109c: 910103ff     	add	sp, sp, #0x40
    10a0: d65f03c0     	ret
    10a4: f9000fe0     	str	x0, [sp, #0x18]
    10a8: aa0103e8     	mov	x8, x1
    10ac: b90017e8     	str	w8, [sp, #0x14]
    10b0: 14000001     	b	0x10b4 <__ZNSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEEC2B8ne180100ERNS_13basic_ostreamIcS2_EE+0x60>
    10b4: f9400fe0     	ldr	x0, [sp, #0x18]
    10b8: 94000000     	bl	0x10b8 <__ZNSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEEC2B8ne180100ERNS_13basic_ostreamIcS2_EE+0x64>

00000000000010bc <__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5rdbufB8ne180100Ev>:
    10bc: d10083ff     	sub	sp, sp, #0x20
    10c0: a9017bfd     	stp	x29, x30, [sp, #0x10]
    10c4: 910043fd     	add	x29, sp, #0x10
    10c8: f90007e0     	str	x0, [sp, #0x8]
    10cc: f94007e0     	ldr	x0, [sp, #0x8]
    10d0: 94000000     	bl	0x10d0 <__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5rdbufB8ne180100Ev+0x14>
    10d4: a9417bfd     	ldp	x29, x30, [sp, #0x10]
    10d8: 910083ff     	add	sp, sp, #0x20
    10dc: d65f03c0     	ret

00000000000010e0 <__ZNKSt3__18ios_base5rdbufB8ne180100Ev>:
    10e0: d10043ff     	sub	sp, sp, #0x10
    10e4: f90007e0     	str	x0, [sp, #0x8]
    10e8: f94007e8     	ldr	x8, [sp, #0x8]
    10ec: f9401500     	ldr	x0, [x8, #0x28]
    10f0: 910043ff     	add	sp, sp, #0x10
    10f4: d65f03c0     	ret

00000000000010f8 <__ZNSt3__111char_traitsIcE11eq_int_typeB8ne180100Eii>:
    10f8: d10043ff     	sub	sp, sp, #0x10
    10fc: b9000fe0     	str	w0, [sp, #0xc]
    1100: b9000be1     	str	w1, [sp, #0x8]
    1104: b9400fe8     	ldr	w8, [sp, #0xc]
    1108: b9400be9     	ldr	w9, [sp, #0x8]
    110c: 6b090108     	subs	w8, w8, w9
    1110: 1a9f17e8     	cset	w8, eq
    1114: 12000100     	and	w0, w8, #0x1
    1118: 910043ff     	add	sp, sp, #0x10
    111c: d65f03c0     	ret

0000000000001120 <__ZNSt3__111char_traitsIcE3eofB8ne180100Ev>:
    1120: 12800000     	mov	w0, #-0x1               ; =-1
    1124: d65f03c0     	ret

0000000000001128 <__ZNSt3__18ios_base8setstateB8ne180100Ej>:
    1128: d10083ff     	sub	sp, sp, #0x20
    112c: a9017bfd     	stp	x29, x30, [sp, #0x10]
    1130: 910043fd     	add	x29, sp, #0x10
    1134: f90007e0     	str	x0, [sp, #0x8]
    1138: b90007e1     	str	w1, [sp, #0x4]
    113c: f94007e0     	ldr	x0, [sp, #0x8]
    1140: b9402008     	ldr	w8, [x0, #0x20]
    1144: b94007e9     	ldr	w9, [sp, #0x4]
    1148: 2a090101     	orr	w1, w8, w9
    114c: 94000000     	bl	0x114c <__ZNSt3__18ios_base8setstateB8ne180100Ej+0x24>
    1150: a9417bfd     	ldp	x29, x30, [sp, #0x10]
    1154: 910083ff     	add	sp, sp, #0x20
    1158: d65f03c0     	ret

000000000000115c <__ZNSt3__118__constexpr_strlenB8ne180100EPKc>:
    115c: d10083ff     	sub	sp, sp, #0x20
    1160: a9017bfd     	stp	x29, x30, [sp, #0x10]
    1164: 910043fd     	add	x29, sp, #0x10
    1168: f90007e0     	str	x0, [sp, #0x8]
    116c: f94007e0     	ldr	x0, [sp, #0x8]
    1170: 94000000     	bl	0x1170 <__ZNSt3__118__constexpr_strlenB8ne180100EPKc+0x14>
    1174: a9417bfd     	ldp	x29, x30, [sp, #0x10]
    1178: 910083ff     	add	sp, sp, #0x20
    117c: d65f03c0     	ret
```
印出該目的檔的表頭
```
objdump -h main.o

main.o:	file format mach-o arm64

Sections:
Idx Name             Size     VMA              Type
  0 __text           00001180 0000000000000000 TEXT
  1 __gcc_except_tab 000000ac 0000000000001180 DATA
  2 __cstring        00000015 000000000000122c DATA
  3 __compact_unwind 000005a0 0000000000001248 DATA
```