@class NSString;

@interface IESIMSendMessageResponse_Mention_Plugin : AWEIMComponentBase <IESIMSendMessageTrackerAspectProtocol, IESIMDidSendMessageAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)didSendMessageWithContext:(id)a0;
- (void)didReSendMessageWithContext:(id)a0;
- (void)didReceiveSendMessageResponseWithContext:(id)a0;
- (id)sendMessageAndResponseTrackerAspectParams:(id)a0;
- (id)__atMessageTypeForTrackingSendMessagesFromMentionMask:(long long)a0;
- (void)p_trackSendAtMessageIfNeedWithEvent:(id)a0 messageType:(long long)a1 messageContent:(id)a2 con:(id)a3 extraParams:(id)a4;
- (id)p_trackStringForIsFromHostWithRole:(long long)a0;

@end
