@class NSDictionary;

@interface BDXMonitorManager : NSObject

@property (copy) NSDictionary *globalMonitorMap;

+ (id)shareInstance;

- (id)fetchMonitorWithSessionId:(id)a0;
- (void)destoryMonitorWithSessionId:(id)a0;
- (BOOL)bindMonitor:(id)a0 sessionId:(id)a1;
- (void)collectCardStartWithSessionId:(id)a0 timeStamp:(double)a1;
- (id)getDurationForMonitor:(id)a0 startTimeField:(id)a1 endTimeField:(id)a2;
- (void).cxx_destruct;

@end
