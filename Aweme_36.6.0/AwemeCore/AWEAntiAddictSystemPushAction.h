@class AWEAntiAddictStrategyThresholdUnitModel;

@interface AWEAntiAddictSystemPushAction : AWEAntiAddictPushAction

@property long long satisfiedStrategyIndex;
@property (retain) AWEAntiAddictStrategyThresholdUnitModel *satisfiedStrategy;

+ (id)moduleName;

- (id)updatedDataOnBegin;
- (void).cxx_destruct;
- (void)begin;

@end
