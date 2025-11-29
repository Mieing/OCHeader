@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BDECPigeonBoundedThrottle : NSObject

@property (readonly) double interval;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy) id /* block */ block;
@property long long expectAsyncTime;
@property BOOL isInvalid;
@property BOOL hasRunning;
@property BOOL hasPending;
@property double lastRunEndTime;
@property (copy) NSString *tag;

- (BOOL)addTask;
- (BOOL)p_addTask;
- (void)p_scheduleTaskDelayed;
- (void)p_scheduleTaskImmediately;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithInterval:(double)a0 queue:(id)a1 block:(id /* block */)a2;

@end
