@class NSObject;
@protocol OS_dispatch_queue;

@interface BDPFPSMonitor : NSObject

@property (nonatomic) long long taskID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (nonatomic) BOOL frameSchedulerCallBackOnOtherQueue;

- (void)startWithTimes:(long long)a0 limitMaxCollectCount:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)dealloc;

@end
