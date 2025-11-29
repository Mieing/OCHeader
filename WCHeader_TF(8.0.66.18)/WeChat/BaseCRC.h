@interface BaseCRC : NSObject

+ (unsigned short)getCRC16_Byte:(unsigned short)a0 Byte:(unsigned char)a1;
+ (unsigned short)getCRC16:(unsigned short)a0 Bytes:(char *)a1 Length:(unsigned int)a2;

@end
