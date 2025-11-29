@class NSDictionary, NSMutableDictionary, NSString;

@interface AWEABTestManager : NSObject <InstallAndDeviceIDMessage> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _rwlock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _abtestDataLock;
}

@property (retain, nonatomic) NSMutableDictionary *consistentABTestDic;
@property (retain, nonatomic) NSMutableDictionary *consistentABKeyVidsDic;
@property (nonatomic) BOOL performanceReversalEnabled;
@property (copy, nonatomic) NSDictionary *performanceReversalDic;
@property (nonatomic) BOOL handledNetFirstBackNotification;
@property (retain, nonatomic) NSDictionary *abTestData;
@property (nonatomic) BOOL lastUpdateByIncrement;
@property (copy, nonatomic) id /* block */ abTestNetworkImpl;
@property (nonatomic) BOOL shouldPrintLog;
@property (readonly, nonatomic) NSDictionary *stableValues;
@property (nonatomic) BOOL localABSettingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)performanceOptimizeEnable;
+ (BOOL)performanceOptimizeEnable;
+ (id)sharedManager;

- (id)ABTestCaseWithPropertyName:(id)a0;
- (void)didUpdateInstallIDFrom:(id)a0 to:(id)a1;
- (void)didUpdateDeviceIDFrom:(id)a0 to:(id)a1;
- (void)networkingReachabilityDidChangeNotification;
- (void)_handleNetFirstBackAction;
- (id)debugOverride_mockABTestCaseWithInfoModel:(id)a0;
- (void)setConsistentABTestValue:(id)a0 vids:(id)a1 forKey:(id)a2;
- (id)onlineDataWithABTestInfoModel:(id)a0;
- (id)performanceReversalValueWithKey:(id)a0 origABValue:(id)a1;
- (void)updatePerformanceReversalDataAndTag:(id)a0;
- (BOOL)useAweSettingsAsDataSource;
- (id)loadPerformanceABData;
- (void)debugOverride_updatePerformanceReversalDataAndTag:(id)a0;
- (void)fetchConfigurationWithError:(id /* block */)a0;
- (void)debugOverride_logLibraKey:(id)a0 abValue:(id)a1 onlineValue:(id)a2 onlineValueSource:(long long)a3 stable:(BOOL)a4;
- (id)getValueOfConsistentABTestWithKey:(id)a0;
- (id)getVidsOfConsistentABKey:(id)a0;
- (void)removeABTestDataWithKeys:(id)a0;
- (void)_clearConsistentABTestValueForKey:(id)a0;
- (void)_clearAllConsistentABTestValues;
- (id)_retriveABTestData;
- (void)handleABTestData:(id)a0;
- (void)overrideABTestData:(id)a0 needCleanCache:(BOOL)a1;
- (void)_saveABTestData:(id)a0;
- (void)fetchConfigurationWithRetry:(BOOL)a0 completion:(id /* block */)a1;
- (void)incrementalUpdateData:(id)a0 unchangedKeyList:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)fetchConfiguration:(id /* block */)a0;

@end
