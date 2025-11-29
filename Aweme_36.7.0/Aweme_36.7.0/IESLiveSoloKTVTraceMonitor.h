@protocol IESLiveFullLinkMonitor;

@interface IESLiveSoloKTVTraceMonitor : NSObject

@property (retain, nonatomic) id<IESLiveFullLinkMonitor> innerMonitor;

- (void)monitorServerAPI:(id)a0 requestTimestamp:(double)a1 error:(id)a2 response:(id)a3 extra:(id)a4;
- (void)monitorWithEventType:(unsigned long long)a0 serviceName:(id)a1 extra:(id)a2;
- (void)monitorBussiness:(id)a0 extra:(id)a1;
- (void).cxx_destruct;

@end
