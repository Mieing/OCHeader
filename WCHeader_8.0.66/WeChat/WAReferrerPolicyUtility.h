@interface WAReferrerPolicyUtility : NSObject

+ (unsigned long long)typeWithString:(id)a0;
+ (unsigned long long)typeWithString:(id)a0 defaultType:(unsigned long long)a1;
+ (id)refererStringWithReferrerPolicyType:(unsigned long long)a0 appID:(id)a1 appVersion:(unsigned long long)a2;
+ (id)referrerPolicyDict;

@end
