@interface IESECShopHybridSecurityHelper : NSObject

+ (id)objectForKeyPath:(id)a0 dict:(id)a1;
+ (id)securityConfigForTabType:(unsigned long long)a0;
+ (void)reportSecurityCheckLocalErr:(id)a0 securityConfig:(id)a1 verifyMode:(long long)a2 errorCode:(long long)a3 errorDesc:(id)a4 schema:(id)a5;
+ (BOOL)containISVComponentForTab:(id)a0;
+ (BOOL)securityCheckForJSBName:(id)a0 params:(id)a1 schema:(id)a2 securityConfig:(id)a3 JSBMonitor:(id /* block */)a4;
+ (void)reportSecurityCheckResult:(id)a0 securityConfig:(id)a1 verifyMode:(long long)a2 failedCode:(long long)a3 limitParamKey:(id)a4 limitParamValue:(id)a5 schema:(id)a6;
+ (BOOL)matchRegex:(id)a0 paramsValue:(id)a1;
+ (id)securitySwitch;
+ (id)securityConfig;
+ (id)configVersionForTab:(id)a0;
+ (void)enableSecurityCheckForTab:(id)a0 puzzleContext:(id)a1 JSBMonitor:(id /* block */)a2;
+ (id)trackingQueue;

@end
