@class NSString;

@interface AWESCABTestServiceImp : NSObject <BDSCABTestService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (void)registerEnableOnlySupportXsgClientABTest;
+ (void)registerEnableScreenCastClarityLimitABTest;
+ (void)registerLocalNetworkAlertStyle;
+ (void)registerScreenCastConnectError;
+ (void)registerUseNewFeedback;
+ (void)registerRequestRedirectURL;
+ (void)registerCastProxyConfig;

- (id)abValueForKey:(id)a0;
- (id)clientABvalueForKey:(id)a0 exposure:(BOOL)a1;

@end
