@class NSString, WCSKAdNetworkItem;

@interface WebViewJSEventHandler_launchApplication : WebviewJSEventHandlerBase <PBMessageObserverDelegate> {
    NSString *_appID;
    NSString *_launchAppID;
    NSString *_messageExt;
    NSString *_parameter;
    NSString *_scheme;
    NSString *_extraData;
    BOOL _bIsShowLaunchFailToast;
    NSString *_installSchemeUrl;
    unsigned int _installAction;
    NSString *_sourceInfo;
    NSString *_bizInfo;
    WCSKAdNetworkItem *_skAdItem;
}

- (void)dealloc;
- (void)resetCacheParam;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onCheckResponse:(id)a0;
- (void)sendReqLaunchAppWithShowType:(unsigned long long)a0 jumpAppStoreFlag:(int)a1;
- (void)gameReportLaunchWithIsCancel:(BOOL)a0 launchSuccess:(BOOL)a1;
- (id)launchAppleStoreErrorWithCode:(long long)a0 description:(id)a1;
- (BOOL)hasPermissionToLaunchWebStore;
- (BOOL)launchAppleStoreWithSchemeUrl:(id)a0 action:(unsigned int)a1 jumpAppStoreFlag:(int)a2 getError:(id *)a3;
- (void).cxx_destruct;

@end
