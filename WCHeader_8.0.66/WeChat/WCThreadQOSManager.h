@class NSString, WCThreadQOSManagerConfig;

@interface WCThreadQOSManager : MMRootService <MMKernelExt, IExptServiceExt, MMServiceProtocol> {
    NSString *m_configPath;
    WCThreadQOSManagerConfig *m_config;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)prepareInMain;
- (void)initQOSStrategyRule;
- (void)initPaths;
- (void)loadMonitorConfig;
- (void)saveMonitorConfigBackground;
- (void)checkThreadQOS;
- (void)setUserType:(unsigned long long)a0;
- (void)onAuthOK;
- (void)onExptItemListChange;
- (void)setupStrategyFromXLab;
- (void)handleThermalStateDidChangeNotification:(id)a0;
- (void).cxx_destruct;

@end
