@class NSString;

@interface AppCatchCrashMgr : MMUserService <MMServiceProtocol> {
    BOOL _hasCrashAppId;
    unsigned int _callMonitorCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)beginMonitor;
- (void)endMonitor;
- (BOOL)canCallCanOpenUrlMethod;
- (void)setForceCallCanOpenUrl;
- (void)saveCallMonitorCount;
- (void)loadCallMonitorCount;

@end
