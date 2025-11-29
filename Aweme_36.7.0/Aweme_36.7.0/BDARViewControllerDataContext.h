@class NSMutableArray;

@interface BDARViewControllerDataContext : NSObject

@property (retain, nonatomic) NSMutableArray *rewardInfoList;

- (id)currentRewardInfo;
- (id)rewardInfoSequence;
- (void)reserveRewardInfo:(id)a0 fromScene:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
