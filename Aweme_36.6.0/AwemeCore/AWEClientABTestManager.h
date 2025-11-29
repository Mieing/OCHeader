@class NSString, NSMutableDictionary;

@interface AWEClientABTestManager : NSObject <AWEAppAwemeSettingMessage, AWEClientABTestManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *propertyKeyDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerClientABTest:(id)a0;
+ (id)sharedManager;

- (void)awemeSettingDidChange;
- (id)clientABTestWithPropertyName:(id)a0;
- (void)clientInitialize;
- (id)clientABTestWithPropertyName:(id)a0 exposure:(BOOL)a1;
- (void)registerDelayDidClientAB;
- (void)registerClientABTestExperWithModel:(id)a0;
- (id)groupsForKey:(id)a0 groupIDs:(id)a1 flowRates:(id)a2 experValues:(id)a3;
- (id)clientLayerWithGroups:(id)a0 key:(id)a1 filters:(id)a2;
- (id)clientExperimentWithKey:(id)a0 layer:(id)a1 defaultValue:(id)a2 valueType:(unsigned long long)a3;
- (void)registerClientABTestExperWithExperKey:(id)a0 groupIDs:(id)a1 flowRates:(id)a2 experValues:(id)a3 defaultValue:(id)a4 filters:(id)a5 valueType:(unsigned long long)a6;
- (void)saveClientABTestKey:(id)a0 propertyName:(id)a1;
- (void)registerClientABTestExperWithModel:(id)a0 installTimeFilter:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
