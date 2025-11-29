@class NSOperationQueue;

@interface TencentLBSPedometer : NSObject

@property (retain, nonatomic) id pedometer;
@property (retain, nonatomic) NSOperationQueue *queue;
@property double version;
@property BOOL isStart;

+ (BOOL)isStepCountingAvailable;

- (id)init;
- (void)startPedometerUpdatesFromDate:(id)a0 withPedometerHandler:(id /* block */)a1;
- (void)stopPedometerUpdates;
- (void).cxx_destruct;

@end
