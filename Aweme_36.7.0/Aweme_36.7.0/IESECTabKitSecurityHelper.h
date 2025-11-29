@interface IESECTabKitSecurityHelper : NSObject

+ (BOOL)securityCheckForApiUrl:(id)a0;
+ (BOOL)securityCheckForAnchorUrl:(id)a0;
+ (BOOL)securityCheckForUrl:(id)a0 ruleType:(unsigned long long)a1;
+ (id)p_securityConfigsV2;
+ (BOOL)p_matchHost:(id)a0 value:(id)a1;
+ (void)reportSecurityCheckResult:(id)a0 ruleType:(unsigned long long)a1 verifyMode:(long long)a2 version:(id)a3;
+ (id)parseURLComponents:(id)a0;
+ (BOOL)enableSecuritySchemeCheck;

@end
