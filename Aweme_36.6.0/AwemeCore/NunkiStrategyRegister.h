@class NSLock, NSMutableDictionary, NSString;

@interface NunkiStrategyRegister : NSObject <NunkiStrategyRegisterService>

@property (retain, nonatomic) NSMutableDictionary *registeredStrategys;
@property (retain, nonatomic) NSLock *rwLock;
@property (copy, nonatomic) NSMutableDictionary *ridResultsDict;
@property (retain, nonatomic) NSLock *ridResultsDictLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableNunki;
+ (id)sharedInstance;

- (void)registerStrategies:(id)a0;
- (id /* block */)strategyTaskWithKey:(id)a0;
- (id)dicSettingsForKey:(id)a0;
- (BOOL)boolSettingsForKey:(id)a0;
- (id)allStrategyKeys;
- (id)strategyInfoWithKey:(id)a0;
- (void)setConstructedRidResult:(id)a0 key:(id)a1;
- (id)constructedRidResultForKey:(id)a0;
- (id)arraySettingsForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
