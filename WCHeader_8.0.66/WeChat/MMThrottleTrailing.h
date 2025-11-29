@class NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface MMThrottleTrailing : MMThrottle

@property (nonatomic) double interval;
@property (copy, nonatomic) id /* block */ taskBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDate *lastRunTaskDate;
@property (retain, nonatomic) NSDate *nextRunTaskDate;

- (id)initWithInterval:(double)a0 onQueue:(id)a1 taskBlock:(id /* block */)a2;
- (void)call;
- (void)invalidate;
- (void).cxx_destruct;

@end
