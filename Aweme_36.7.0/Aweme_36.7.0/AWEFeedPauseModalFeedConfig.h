@class NSArray;

@interface AWEFeedPauseModalFeedConfig : AWEFeedPauseModalBaseConfig

@property (copy, nonatomic) NSArray *frequencyStrategyArray;

- (id)componentStrategyPriorityMapping;
- (id)introStyleArray;
- (id)bottomBarStyleArray;
- (id)bottomTabStyleArray;
- (id)styleComponentConfig;
- (void).cxx_destruct;

@end
