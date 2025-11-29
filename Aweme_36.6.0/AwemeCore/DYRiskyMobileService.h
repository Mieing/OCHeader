@class NSString;

@interface DYRiskyMobileService : HTSService <DYRiskyMobileProtocol>

@property (nonatomic) BOOL isHandlingRiskyMobile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupTTNetResponseFilter;
- (void)startAuthFlow;
- (void)p_setupTTNetResponseFilterOnce;
- (void)p_handleRiskyMobileIfNeeded;
- (void)p_handleRiskyMobileWithCompletion:(id /* block */)a0;
- (void)p_changeToValidMobileWithCompletion:(id /* block */)a0;
- (void)p_commitRealNameAuthorizationWithCompletion:(id /* block */)a0;
- (void)p_giveUpHandleRiskyMobileWithCompletion:(id /* block */)a0;

@end
