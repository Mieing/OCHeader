@class WAAppIdToUsernameTransfer;

@interface WebviewJSEventHandler_launchMiniProgram : WebviewJSEventHandlerBase {
    WAAppIdToUsernameTransfer *_appIDTransfer;
}

@property (nonatomic) BOOL silentOpen;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (id)jsapiName;
- (void)endErrorWithMessage:(id)a0;
- (void)endWithOK;
- (void)launchMiniProgramWithAppID:(id)a0 pagePath:(id)a1 referrerAppID:(id)a2 currentURL:(id)a3 debugMode:(unsigned long long)a4 adUxInfo:(id)a5 commonUxInfo:(id)a6 launchParam:(id)a7;
- (void)launchMiniProgramWithUserName:(id)a0 pagePath:(id)a1 referrerAppID:(id)a2 currentURL:(id)a3 debugMode:(unsigned long long)a4 adUxInfo:(id)a5 commonUxInfo:(id)a6 launchParam:(id)a7;
- (void).cxx_destruct;

@end
