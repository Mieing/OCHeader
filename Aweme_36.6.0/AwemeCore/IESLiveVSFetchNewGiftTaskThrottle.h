@class IESLiveVSFetchNewGiftTask;
@protocol IESLiveVSFetchNewGiftTaskThrottleDelegate;

@interface IESLiveVSFetchNewGiftTaskThrottle : NSObject

@property (retain, nonatomic) IESLiveVSFetchNewGiftTask *task;
@property (nonatomic) double duration;
@property (weak, nonatomic) id<IESLiveVSFetchNewGiftTaskThrottleDelegate> delegate;

- (void)appendTask:(id)a0;
- (void)thorttle;
- (void)handleTask;
- (void).cxx_destruct;
- (id)init;

@end
