@class NSRecursiveLock, NSMutableDictionary, NSDictionary, NSMutableSet;
@protocol BDUGLuckyDebugProtocol, BDUGHostSettingsProtocol;

@interface BDUGLuckyServiceManager : NSObject

@property (nonatomic) BOOL deadlockFixSwitch;
@property (copy, nonatomic) NSDictionary *abTestSettings;
@property (retain) NSMutableDictionary *protocolToClassMap;
@property (retain) NSMutableDictionary *protocolToObjectMap;
@property (retain) NSRecursiveLock *recLock;
@property (retain) NSMutableSet *protocolClassCalledSet;
@property (retain, nonatomic) id<BDUGHostSettingsProtocol> hostSettingsDataProvider;
@property (retain, nonatomic) id<BDUGLuckyDebugProtocol> debugDataProvider;

+ (id)getObjectWithProtocol:(id)a0;
+ (Class)getClassWithProtocol:(id)a0;
+ (BOOL)_bindClass:(Class)a0 toProtocol:(id)a1;
+ (id)_getObjectWithProtocol:(id)a0;
+ (Class)_getClassWithProtocol:(id)a0;
+ (BOOL)_checkSelector:(SEL)a0 withProtocol:(id)a1 assert:(BOOL)a2;
+ (BOOL)bindClass:(Class)a0 toProtocol:(id)a1;
+ (BOOL)checkSelector:(SEL)a0 withProtocol:(id)a1 assert:(BOOL)a2;
+ (BOOL)checkClassSelector:(SEL)a0 withProtocol:(id)a1 assert:(BOOL)a2;
+ (void)configABTestSettings:(id)a0;
+ (BOOL)isDegradationSchemeForProtocol:(id)a0;
+ (id)_getProtocolesForCls:(Class)a0;
+ (BOOL)_isClassEnableRebind:(Class)a0;
+ (BOOL)_bindClass:(Class)a0 toProtocol:(id)a1 supportRebind:(BOOL)a2;
+ (void)collectBDUGService;
+ (id)getServiceList;
+ (BOOL)_isDegradationSchemeForProtocol:(id)a0;
+ (void)_configABTestSettings:(id)a0;
+ (void)_registerDefaultSercice:(Class)a0;
+ (void)_registerCustomsizedService:(Class)a0;
+ (BOOL)_checkClassSelector:(SEL)a0 withProtocol:(id)a1 assert:(BOOL)a2;
+ (void)registerDefaultSercice:(Class)a0;
+ (void)registerCustomsizedService:(Class)a0;
+ (id)_bdug_service_AWEPineappleLuckyIMService270;
+ (id)_bdug_service_AWELuckySDKAdapter1800;
+ (id)_bdug_service_AWELuckySDKDialogManagerAdapter1280;
+ (id)_bdug_service_AWELuckySDKMotionService210;
+ (id)sharedInstance;

- (id)abTestSettings;
- (void)setAbTestSettings:(id)a0;
- (id)_getObjectWithProtocol:(id)a0;
- (Class)_getClassWithProtocol:(id)a0;
- (BOOL)_checkSelector:(SEL)a0 withProtocol:(id)a1 assert:(BOOL)a2;
- (id)getObjectWithKey:(id)a0 subKey:(id)a1 subSubKey:(id)a2;
- (id)getLuckyGeckoAccessKey;
- (id)getLuckyCatGeckoAccessKey;
- (id)__getLuckyGeckoAccessKeyWithAppSettingsKey:(id)a0;
- (id)getGeckoDataSubSubKey;
- (id)defaultAccessKey;
- (id)getLuckyDogGeckoAccessKey;
- (void)registerABTestService;
- (BOOL)_bindClass:(Class)a0 toProtocol:(id)a1 supportRebind:(BOOL)a2;
- (BOOL)__isDegradationSchemeForProtocol:(id)a0;
- (void)registerAllService;
- (void)_triggerSetupIfNeededWithProtocolName:(id)a0 protocol:(id)a1;
- (id)_getObjectWithClass:(Class)a0;
- (void)_registerServiceWithClass:(Class)a0;
- (void)registerSwiftService:(Class)a0;
- (id)_buildProtocolToABClassMap;
- (id)_getProtocolNamesForCls:(Class)a0;
- (id)_getABModules;
- (void)_configABTestSettings:(id)a0;
- (BOOL)_checkClassSelector:(SEL)a0 withProtocol:(id)a1 assert:(BOOL)a2;
- (id)hostSettingsDataProvider;
- (void).cxx_destruct;
- (id)init;

@end
