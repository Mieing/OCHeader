@interface MMFICUtilities : NSObject

+ (unsigned long long)FICByteAlign:(unsigned long long)a0 alignment:(unsigned long long)a1;
+ (unsigned long long)FICByteAlignForCoreAnimation:(unsigned long long)a0;
+ (id)FICStringWithUUIDBytes:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; })a0;
+ (struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; })FICUUIDBytesWithString:(id)a0;
+ (struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; })FICUUIDBytesFromMD5HashOfString:(id)a0;
+ (int)PageSize;
+ (id)DirectoryPath;
+ (id)dispatchQueue;

@end
