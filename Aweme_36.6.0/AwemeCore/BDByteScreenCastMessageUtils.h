@interface BDByteScreenCastMessageUtils : NSObject

+ (long long)sdkVersionCode;
+ (id)messageWithType:(unsigned long long)a0 code:(unsigned long long)a1 commonParams:(id)a2;
+ (id)messageWithType:(unsigned long long)a0 code:(unsigned long long)a1 commonParams:(id)a2 extraParams:(id)a3;
+ (id)messageWithType:(unsigned long long)a0 code:(unsigned long long)a1 ip:(id)a2 port:(long long)a3 commonParams:(id)a4 extraParams:(id)a5;
+ (id)netMaskString;
+ (id)messageWithType:(unsigned long long)a0 code:(unsigned long long)a1;
+ (id)messageWithCommand:(id)a0;

@end
