@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface TIMXSendMessagePerformanceUtility : NSObject

@property (retain, nonatomic) NSMutableDictionary *sendProcessDurationMonitorMap;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *durationMonitorMapLock;

- (void)addDurationMonitor:(id)a0 toMessage:(id)a1;
- (id)latestMonitorOfMessge:(id)a0;
- (id)clearMonitorOfMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
