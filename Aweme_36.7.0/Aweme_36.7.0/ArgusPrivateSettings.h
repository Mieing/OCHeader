@interface ArgusPrivateSettings : NSObject

+ (BOOL)forceCloseAll;
+ (BOOL)forceCloseWebDelegate;
+ (BOOL)forceCloseLynxDelegate;
+ (BOOL)forceCloseGlobalDelegate;
+ (BOOL)enableEnsureStrategyConfig;
+ (id)reportAspectMaxCount;
+ (id)secureInnerFristDomainList;
+ (id)secureInnerSecondDomainList;
+ (BOOL)enableForestIntercept;
+ (BOOL)enableBDXRLIntercept;
+ (id)skipVerifyWebSchemeList;
+ (BOOL)enableNetwokrJSBInjectHeader;
+ (id)networkJSBInjectHeaderSecureConfig;
+ (BOOL)enableEnsureFeConfig;

@end
