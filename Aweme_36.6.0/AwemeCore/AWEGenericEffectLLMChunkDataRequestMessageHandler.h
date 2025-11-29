@interface AWEGenericEffectLLMChunkDataRequestMessageHandler : AWEGenericEffectMessageBaseHandler

- (id)bizIdentifier;
- (BOOL)canHandle:(id)a0 arg3Info:(id)a1;
- (void)handleMessage:(id)a0 arg3Info:(id)a1 isGlobal:(id)a2;
- (void)p_startChunkRequestWithBody:(id)a0 taskId:(long long)a1 isGlobal:(id)a2;
- (void)p_trackRequestStateWithSuccess:(BOOL)a0 RequestStartTimeStamp:(double)a1 firstPayloadTimeStamp:(double)a2 error:(id)a3;

@end
