@interface PIAFunctionPluginSwitch : NSObject

+ (BOOL)isFunctionCanBeUsed:(id)a0 URL:(id)a1 scene:(id)a2;
+ (id)switchKey:(id)a0 type:(unsigned long long)a1;
+ (BOOL)isURLInAllowDomainList:(id)a0;
+ (BOOL)getFunctionSwitchValueForKey:(id)a0 URL:(id)a1 scene:(id)a2;
+ (BOOL)isURLInDenyDomainList:(id)a0;
+ (BOOL)isURLEnabled:(id)a0 function:(id)a1 scene:(id)a2;
+ (BOOL)isURLInBlockDomainPathList:(id)a0 function:(id)a1 scene:(id)a2;
+ (BOOL)disablePIA_1;
+ (void)registerFunctionDefaultSwitch:(id)a0 enabled:(BOOL)a1 allowDomain:(id)a2 blockDomainPath:(id)a3;
+ (BOOL)isURLInAllowDomainList:(id)a0 function:(id)a1 scene:(id)a2;

@end
