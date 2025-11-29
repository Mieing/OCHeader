@protocol IESLiveMultiUserScenarioMonitor;

@interface IESLivePaidLinkMicFullLinkMonitor : NSObject

@property (retain, nonatomic) id<IESLiveMultiUserScenarioMonitor> fullLinkMonitor;
@property (nonatomic) BOOL isAnchor;
@property (copy, nonatomic) id /* block */ extraParamsCallback;

- (id)monitorExtraParams;
- (void)monitorWithEventName:(id)a0 eventType:(unsigned long long)a1 extra:(id)a2;
- (id)appendCommonExtra:(id)a0;
- (void)monitorWithAPIPath:(id)a0 requestTimestamp:(double)a1 error:(id)a2 response:(id)a3 extra:(id)a4;
- (id)requiredKeyWithEventType:(unsigned long long)a0;
- (id)serviceNameWithEventType:(unsigned long long)a0;
- (void)monitorIMMessageReceiveWithServiceName:(id)a0 message:(id)a1 description:(id)a2 extra:(id)a3;
- (void).cxx_destruct;

@end
