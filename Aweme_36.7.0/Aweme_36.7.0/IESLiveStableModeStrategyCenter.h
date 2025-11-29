@class NSArray, NSMutableDictionary;

@interface IESLiveStableModeStrategyCenter : NSObject

@property (nonatomic) long long currentDecisionLevel;
@property (retain, nonatomic) NSMutableDictionary *anchorStrategies;
@property (retain, nonatomic) NSArray *strategyBlackList;

- (id)initWithDIContext:(id)a0;
- (void)registerStrategy:(id)a0;
- (void)distributeDecisionLevel:(long long)a0 triggerKey:(id)a1;
- (BOOL)isStrategyValid:(id)a0;
- (void)distributeStrategyHandlerForLevel:(long long)a0 strategies:(id)a1 triggerKey:(id)a2;
- (void)distributeResumeHandler:(id)a0 triggerKey:(id)a1;
- (void).cxx_destruct;

@end
