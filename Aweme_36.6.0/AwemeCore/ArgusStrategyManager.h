@class NSDictionary, ArgusStrategyImplStorgae;

@interface ArgusStrategyManager : NSObject

@property (nonatomic) BOOL hasSetup;
@property (retain, nonatomic) NSDictionary *registerStrategyImplClzMap;
@property (retain, nonatomic) ArgusStrategyImplStorgae *strategyImplStorage;

+ (id)parseStrategyConfigs:(id)a0;
+ (void)registerStrategyImpl:(Class)a0;
+ (id)obtainStrategyImplClz:(long long)a0;
+ (id)sharedInstance;

- (void)ensureSetup;
- (void)setupStrategyImplStorage;
- (void).cxx_destruct;
- (id)init;

@end
