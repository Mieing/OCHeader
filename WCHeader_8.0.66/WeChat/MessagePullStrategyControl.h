@class NSMutableArray, RecallTriggerStrategyItem;

@interface MessagePullStrategyControl : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *recommendStrategys;
@property (retain, nonatomic) RecallTriggerStrategyItem *recallTriggerStrategy;
@property (nonatomic) BOOL disableFinderReddot;

+ (void)initialize;

- (void)setDisableFinderReddot:(BOOL)a0;
- (BOOL)disableFinderReddot;
- (void)setRecallTriggerStrategy:(id)a0;
- (id)recallTriggerStrategy;
- (void)setRecommendStrategys:(id)a0;
- (id)recommendStrategys;

@end
