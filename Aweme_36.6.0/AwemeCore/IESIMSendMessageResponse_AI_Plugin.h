@class NSString;

@interface IESIMSendMessageResponse_AI_Plugin : AWEIMComponentBase <IESIMSendMessageTrackerAspectProtocol, IESIMDidSendMessageAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (id)sendMessageAndResponseTrackerAspectParams:(id)a0;
- (id)p_aiExtraParamsWithMessageType:(long long)a0 messageContent:(id)a1 con:(id)a2;

@end
