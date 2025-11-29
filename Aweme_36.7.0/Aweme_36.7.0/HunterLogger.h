@class NSMutableDictionary;

@interface HunterLogger : NSObject

@property (retain, nonatomic) NSMutableDictionary *abilityGlobalStatusList;
@property (retain, nonatomic) NSMutableDictionary *abilityInfos;
@property (retain, nonatomic) NSMutableDictionary *pageConfigInfo;

+ (id)shareManager;
+ (void)hunterLogParams:(id)a0 logInfo:(id)a1 isFinish:(BOOL)a2;
+ (void)hunterPageLogRest:(id)a0 abilityKey:(unsigned long long)a1;
+ (id)setupLogger;
+ (id)getPageKeyWithParams:(id)a0;
+ (id)getAbilityKeyWithLogInfo:(id)a0;
+ (id)getAllAbilityInfos:(id)a0;

- (void).cxx_destruct;

@end
