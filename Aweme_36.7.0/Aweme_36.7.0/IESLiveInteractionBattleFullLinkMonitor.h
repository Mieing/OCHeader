@protocol IESLiveMultiUserScenarioMonitor;

@interface IESLiveInteractionBattleFullLinkMonitor : NSObject

@property (retain, nonatomic) id<IESLiveMultiUserScenarioMonitor> fullLinkMonitor;

- (id)appendCommonExtra:(id)a0;
- (void)monitorWithName:(id)a0 extra:(id)a1 eventType:(unsigned long long)a2 eventModule:(unsigned long long)a3;
- (void)monitorIMWithName:(id)a0 message:(id)a1 extra:(id)a2 eventModule:(unsigned long long)a3;
- (void)monitorWithAPIPath:(id)a0 requestTimestamp:(double)a1 error:(id)a2 response:(id)a3 extra:(id)a4 eventModule:(unsigned long long)a5;
- (void)monitorWithName:(id)a0 extra:(id)a1 eventType:(unsigned long long)a2 eventModule:(unsigned long long)a3 metric:(id)a4;
- (id)requiredKeyWithEventType:(unsigned long long)a0;
- (id)serviceNameWithEventType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
