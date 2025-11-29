@class NSArray, IESBridgeAuthManager, NSString;

@interface CJPayBridgeAuthManager : NSObject <IESBridgeAuthManagerDelegate, TTBridgeInterceptor, IESBridgeEngineInterceptor>

@property (retain, nonatomic) IESBridgeAuthManager *authManager;
@property (copy, nonatomic) NSArray *uploadAllJSBList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)bridgeEngine:(id)a0 willExecuteBridgeCommand:(id)a1;
- (void)bridgeEngine:(id)a0 willCallbackBridgeCommand:(id)a1;
- (void)bridgeEngine:(id)a0 willFireEventWithMessage:(id)a1;
- (BOOL)authManager:(id)a0 isAuthorizedMethod:(id)a1 forURL:(id)a2;
- (void)authManager:(id)a0 isAuthorizedMethod:(id)a1 success:(BOOL)a2 forURL:(id)a3 stage:(id)a4 list:(id)a5;
- (id)allowedDomainsForSDK;
- (void)p_loadDomainWhiteListIfNeeded;
- (BOOL)p_isSelfBridges:(id)a0;
- (void)installEngineOn:(id)a0;
- (void)installIESAuthOn:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
