@interface MMLiveMagicRewardResourceCheckCallbackObj : NSObject

@property (copy, nonatomic) id /* block */ timeOverLimitBlock;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) double maxWaitTime;

- (void)invokeTimeOverLimitAutoCheckIfNeed;
- (void)timerOverLimit;
- (void).cxx_destruct;

@end
