@class NSString;

@interface WALoadPerformanceMgr : MMUserService <MMServiceProtocol> {
    unsigned long long _lanchStartTimeStamp;
    unsigned long long _navigateToStartTimeStamp;
    unsigned long long _redirectToStartTimeStamp;
    unsigned long long _switchTabTimeStamp;
    unsigned long long _lastWebviewID;
    long long _lastActionType;
    NSString *_currentAppID;
    unsigned int _currentVersion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)logPerformanceWithType:(long long)a0 costTime:(unsigned long long)a1 withAppID:(id)a2 fromPreloadTask:(BOOL)a3;
- (void)logPerformancePreloadCostTime:(unsigned long long)a0 withAppID:(id)a1 isPreload:(BOOL)a2;
- (void)logFromJSWithAppID:(id)a0 message:(id)a1;
- (void)logLaunchAppWithAppID:(id)a0 version:(unsigned int)a1;
- (unsigned int)logAppRouteActionType:(long long)a0 webviewID:(unsigned long long)a1 appType:(unsigned int)a2;
- (void)reportLoadPerformanceInfo:(unsigned int)a0 reportType:(unsigned long long)a1 appType:(unsigned int)a2;
- (void).cxx_destruct;

@end
