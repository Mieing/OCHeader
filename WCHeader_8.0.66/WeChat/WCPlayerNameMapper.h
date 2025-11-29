@interface WCPlayerNameMapper : NSObject

+ (id)getPlayerStateName:(unsigned long long)a0;
+ (id)getVideoCodecName:(unsigned int)a0;
+ (id)getVideoProfileName:(int)a0;
+ (id)getTransportProtocolName:(int)a0;
+ (id)getDecoderTypeName:(long long)a0;
+ (id)getCodecIDTypeName:(int)a0;
+ (id)getProcessStateName:(unsigned long long)a0;
+ (id)getStringWithPlayerMode:(unsigned long long)a0;

@end
