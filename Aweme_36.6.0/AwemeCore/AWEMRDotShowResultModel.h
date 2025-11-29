@class AWEBizTabBarItemConfigBadgeModel, AWEMRDotCountStrategyResult;

@interface AWEMRDotShowResultModel : NSObject

@property (nonatomic) long long showResult;
@property (nonatomic) long long showCount;
@property (retain, nonatomic) AWEMRDotCountStrategyResult *strategyResult;
@property (retain, nonatomic) AWEBizTabBarItemConfigBadgeModel *badgeModel;

- (void).cxx_destruct;
- (id)description;

@end
