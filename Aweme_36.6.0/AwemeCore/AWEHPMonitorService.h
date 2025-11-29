@class NSString;

@interface AWEHPMonitorService : HTSService <AWEHPMonitorService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hpTabVisibleMonitorEnable;
- (id)hpTabVisibleMonitorModule;
- (id)hpPerfMetricsMonitorManager;
- (void)rootWindowExecute;
- (BOOL)hpManagerIsReady;
- (BOOL)slideMonitorEnable;

@end
