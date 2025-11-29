@class NSString;
@protocol IESLiveMultiUserScenarioMonitor;

@interface IESLiveKTVFullLinkMonitor : NSObject <IESLiveKTVFullLinkMonitor>

@property (retain, nonatomic) id<IESLiveMultiUserScenarioMonitor> fullLinkMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)monitorKTVBussiness:(id)a0 extra:(id)a1;
- (void)handleResponse:(id)a0 error:(id)a1 startTime:(double)a2 event:(id)a3 completion:(id /* block */)a4;
- (void)monitorServerAPI:(id)a0 startTime:(double)a1 response:(id)a2 error:(id)a3 extra:(id)a4;
- (void)monitorKTVMessage:(id)a0 extra:(id)a1;
- (void)trackWithStepName:(id)a0 extra:(id)a1;
- (void)traceWithEventType:(id)a0 stepName:(id)a1 extra:(id)a2;
- (void)monitorPartyKTVServerAPI:(id)a0 startTime:(double)a1 response:(id)a2 error:(id)a3 extra:(id)a4;
- (void)monitorPartyKTVBussiness:(id)a0 extra:(id)a1;
- (void)monitorPartyKTVBussinessLogic:(id)a0 extra:(id)a1;
- (void)traceWithPartyKTVEvent:(unsigned long long)a0 stepName:(id)a1 extra:(id)a2;
- (id)partyKTVTraceNameWithEvent:(unsigned long long)a0;
- (void).cxx_destruct;

@end
