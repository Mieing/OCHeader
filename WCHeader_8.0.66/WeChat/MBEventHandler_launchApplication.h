@class NSString, WCSKAdNetworkItem;

@interface MBEventHandler_launchApplication : MBEventHandlerBaseAsync {
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
    unsigned int _showType;
    NSString *_sourceInfo;
    NSString *_bizInfo;
    WCSKAdNetworkItem *_skAdItem;
}

- (id)apiName;
- (void)resetCacheParam;
- (void)invoke:(id)a0;
- (id)launchAppleStoreErrorWithCode:(long long)a0 description:(id)a1;
- (BOOL)launchAppleStoreWithSchemeUrl:(id)a0 action:(unsigned int)a1 context:(id)a2 getError:(id *)a3;
- (BOOL)invokeInMainThread;
- (void).cxx_destruct;

@end
