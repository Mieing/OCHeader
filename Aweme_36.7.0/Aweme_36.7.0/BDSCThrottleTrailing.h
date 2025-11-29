@class NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface BDSCThrottleTrailing : NSObject

@property (nonatomic) double interval;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSDate *lastRunTaskDate;
@property (retain, nonatomic) NSDate *nextRunTaskDate;
@property (retain, nonatomic) id sendObject;

- (id)initWithInterval:(double)a0 onQueue:(id)a1 taskBlock:(id /* block */)a2;
- (void)callWithObjectImmediately:(id)a0;
- (void)callWithObject:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)call;

@end
