@interface MMFinderSocketPacket : NSObject

+ (id)packetWithBufferLength:(unsigned long long)a0 msgType:(unsigned long long)a1 state:(unsigned long long)a2;
+ (id)packetWithBuffer:(id)a0;
+ (id)packetWithBuffer:(id)a0 head:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned long long x4; unsigned char x5; unsigned char x6; } *)a1;

@end
