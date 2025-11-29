@class CSJRewardedVideoModel;

@interface CSJRewardedVideoDataContext : NSObject

@property (retain, nonatomic) CSJRewardedVideoModel *rewardedVideoModel;
@property (nonatomic) unsigned long long quitReason;
@property (nonatomic) BOOL finishRewardTimingInEndcard;

- (BOOL)isPlayFail;
- (void).cxx_destruct;

@end
