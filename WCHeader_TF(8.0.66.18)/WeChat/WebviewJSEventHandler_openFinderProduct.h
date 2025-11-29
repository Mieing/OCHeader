@class WAAppIdToUsernameTransfer;

@interface WebviewJSEventHandler_openFinderProduct : WebviewJSEventHandlerBase {
    WAAppIdToUsernameTransfer *_appIDTransfer;
}

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (id)jsapiName;
- (void)endErrorWithMessage:(id)a0;
- (void)endWithOK;
- (void)openFinderProductWithAppID:(id)a0 pagePath:(id)a1 referrerAppID:(id)a2 currentURL:(id)a3 debugMode:(unsigned long long)a4 adUxInfo:(id)a5 productParam:(id)a6;
- (void)openFinderProductWithUserName:(id)a0 pagePath:(id)a1 referrerAppID:(id)a2 currentURL:(id)a3 debugMode:(unsigned long long)a4 adUxInfo:(id)a5 productParam:(id)a6;
- (void).cxx_destruct;

@end
