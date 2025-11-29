@class NSString, WCSKAdNetworkItem;

@interface WAJSEventHandler_launchApplication : WAJSEventHandler_BaseEvent {
    NSString *_appID;
    NSString *_launchAppID;
    NSString *_messageExt;
    NSString *_parameter;
    NSString *_scheme;
    NSString *_extraData;
    BOOL _bIsShowLaunchFailToast;
    long long _operateDirectly;
    NSString *_installSchemeUrl;
    unsigned int _installAction;
    NSString *_sourceInfo;
    NSString *_bizInfo;
    WCSKAdNetworkItem *_skAdItem;
}

- (void)resetCacheParam;
- (void)handleJSEvent:(id)a0;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (void)onCheckResponse:(id)a0;
- (void)sendReqLaunchAppWithShowType:(unsigned long long)a0 jumpAppStoreFlag:(int)a1;
- (id)launchAppleStoreErrorWithCode:(long long)a0 description:(id)a1;
- (BOOL)hasPermissionToLaunchWebStore;
- (BOOL)launchAppleStoreWithSchemeUrl:(id)a0 action:(unsigned int)a1 jumpAppStoreFlag:(int)a2 context:(id)a3 getError:(id *)a4;
- (void).cxx_destruct;

@end
