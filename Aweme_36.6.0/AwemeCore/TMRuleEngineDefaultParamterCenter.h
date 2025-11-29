@interface TMRuleEngineDefaultParamterCenter : NSObject

+ (id)ruleEngineConfig;
+ (void)_registerAutoReadPasteboard;
+ (BOOL)enableListenParameter;
+ (void)_registerPrivacyAgree;
+ (void)_registerBasicMode;
+ (void)_registerTeenMode;
+ (void)_registerSilentMode;
+ (void)_registerSilentModeDuration;
+ (void)registerDefaultParams;
+ (void)__registerCurrentPasteboardChangeCount;
+ (id)sharedInstance;

@end
