@interface IESLiveClientLLMMessageAgentMonitor : NSObject

- (id)commonTrackParams;
- (id)currentAudienceVCRoomModel;
- (void)trackAgentPipeLine:(id)a0 error:(id)a1;
- (void)trackAgentPipeLine:(id)a0 text:(id)a1 result:(id)a2 roomid:(id)a3 index:(long long)a4 totalInferenceMs:(long long)a5;
- (void)trackAgentPipeLine:(id)a0 prompt:(id)a1;
- (void)trackAgentPipeLine:(id)a0;
- (void)trackAgentPipeLine:(id)a0 text:(id)a1;
- (id)init;

@end
