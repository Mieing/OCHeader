@class NSDictionary, NSMutableArray, WAAppIdToUsernameTransfer;

@interface LiteAppJsApiLaunchMiniProgram : LiteAppJsApi {
    WAAppIdToUsernameTransfer *_appIDTransfer;
}

@property (retain, nonatomic) NSMutableArray *widgetParameters;
@property (retain, nonatomic) NSDictionary *extraParamInfo;

- (id)init;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)launchMiniProgramWithAppID:(id)a0 pagePath:(id)a1 referrerAppID:(id)a2 currentURL:(id)a3 debugMode:(unsigned long long)a4 adUxInfo:(id)a5 launchParam:(id)a6 isRedirect:(BOOL)a7;
- (void)launchMiniProgramWithUserName:(id)a0 pagePath:(id)a1 referrerAppID:(id)a2 currentURL:(id)a3 debugMode:(unsigned long long)a4 adUxInfo:(id)a5 launchParam:(id)a6 isRedirect:(BOOL)a7;
- (id /* block */)getShareAction;
- (void).cxx_destruct;

@end
