@class NSDictionary, NSString;

@interface TMPrivacyManager : TMModule <TMMonitorService>

@property (retain, nonatomic) NSDictionary *modules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)monitorConfig;
- (void)setContextBlock:(id /* block */)a0 forApiType:(id)a1;
- (void)__startMonitor;
- (id)_allModuleClasses;
- (void)__setupConfig;
- (void)__configPastardCacheEnv;
- (void)setPermissionAspectorEnable;
- (id)__monitorModuleConfig;
- (id)_configFromDict:(id)a0 withClass:(Class)a1;
- (void)closeMonitorHookIfNeed;
- (void)__startMonitorWithAPIControl;
- (void)openTimonHookIfNeed;
- (void)__setupMonitorSubscriberWithAPIControl;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (void)start;

@end
