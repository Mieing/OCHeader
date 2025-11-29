@class AWEAntiAddictStrategyThresholdUnitModel;

@interface AWEAntiAddictSystemPushStrategy : AWEAntiAddictPushStrategy

@property long long satisfiedStrategyIndex;
@property (retain) AWEAntiAddictStrategyThresholdUnitModel *satisfiedStrategy;

+ (id)moduleName;

- (BOOL)satisfiedWithPreparedData:(id)a0;
- (id)getActionWithPreparedData:(id)a0;
- (void).cxx_destruct;
- (id)strategyName;

@end
