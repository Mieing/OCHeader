@class NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface LSIMThrottle : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) double interval;
@property (copy, nonatomic) id /* block */ taskBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDate *lastRunTaskDate;
@property (retain, nonatomic) NSDate *nextRunTaskDate;

+ (id)throttleWithType:(unsigned long long)a0 interval:(double)a1 queue:(id)a2 taskBlock:(id /* block */)a3;

- (id)initWithType:(unsigned long long)a0 interval:(double)a1 queue:(id)a2 taskBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (void)invalidate;
- (void)execute;
- (void)call;

@end
