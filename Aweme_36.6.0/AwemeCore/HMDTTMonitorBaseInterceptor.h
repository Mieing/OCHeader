@class NSObject;
@protocol OS_dispatch_queue, HMDTTMonitorTracker;

@interface HMDTTMonitorBaseInterceptor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<HMDTTMonitorTracker> *tracker;
@property (nonatomic) BOOL optimizeQueueSchedule;
@property (retain, nonatomic) HMDTTMonitorBaseInterceptor *next;

- (id)initWithQueue:(id)a0 tracker:(id)a1;
- (void).cxx_destruct;
- (void)handleRequest:(id)a0;

@end
