@interface GamePlayUtil : NSObject

+ (id)sha1:(id)a0;
+ (BOOL)isLocalGamePlay:(id)a0;
+ (id)generateSignWithTimeStamp:(id)a0 nonce:(id)a1 appSecret:(id)a2;
+ (unsigned long long)convertLocalGameplayTypeFromString:(id)a0;
+ (long long)abilityFlagFromJsonParams:(id)a0;
+ (BOOL)needProcessGP:(id)a0 forAssetType:(unsigned long long)a1;

@end
