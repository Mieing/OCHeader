@class IESLiveNewFetchDressTask;
@protocol IESLiveNewFetchDressTaskThrottleDelegate;

@interface IESLiveNewFetchDressTaskThrottle : NSObject

@property (retain, nonatomic) IESLiveNewFetchDressTask *task;
@property (nonatomic) double duration;
@property (weak, nonatomic) id<IESLiveNewFetchDressTaskThrottleDelegate> delegate;

- (void)appendTask:(id)a0;
- (void)thorttle;
- (void)handleTask;
- (void).cxx_destruct;
- (id)init;

@end
