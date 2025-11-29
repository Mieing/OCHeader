@class NSObject;
@protocol OS_dispatch_source;

@interface AWEPostPageListBatchUpdatesCombiner : NSObject

@property BOOL isCombining;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) double timeThreshold;

- (void)cancelTimerIfNeeded;
- (void)resumeTimerWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)combineWithBatchUpdates:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
