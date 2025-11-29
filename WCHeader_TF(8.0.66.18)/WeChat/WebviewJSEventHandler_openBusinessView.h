@class WAContactGetter;

@interface WebviewJSEventHandler_openBusinessView : WebviewJSEventHandlerBase <PBMessageObserverDelegate>

@property (retain, nonatomic) WAContactGetter *contactGetter;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)endWithError:(id)a0 errCode:(long long)a1;
- (void)endWithSuccessExtraData:(id)a0;
- (void)endWithResult:(id)a0 errCode:(long long)a1 extraData:(id)a2;
- (void)requestAuthorizationForLaunch:(id)a0 queryStr:(id)a1 referrerAppId:(id)a2 context:(id)a3;
- (void)handleAuthorizationForLaunchResponse:(id)a0;
- (void)doOpenWeAppWithRequest:(id)a0 response:(id)a1 contact:(id)a2 context:(id)a3;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end
