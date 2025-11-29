@class NSString;

@interface IESIMSendMessageResponse_Group_Plugin : AWEIMComponentBase <IESIMSendMessageTrackerAspectProtocol, IESIMDidSendMessageAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (id)sendMessageAndResponseTrackerAspectParams:(id)a0;
- (BOOL)p_isMentionGroupAIWithContext:(id)a0;

@end
