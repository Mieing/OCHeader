@class NSString;

@interface IESIMSendMessageResponse_Common_Plugin : AWEIMComponentBase <IESIMSendMessageTrackerAspectProtocol, IESIMDidSendMessageAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)didReceiveSendMessageResponseWithContext:(id)a0;
- (id)sendMessageAndResponseTrackerAspectParams:(id)a0;
- (void)p_setupEnterFrom:(id)a0 inParams:(id)a1;
- (void)p_setupEnterMethod:(id)a0 inParams:(id)a1;
- (void)p_setupEnterChatFunction:(id)a0 inParams:(id)a1;
- (void)p_setupMessageType:(id)a0 inParams:(id)a1;
- (void)p_setupQuoteReply:(id)a0 inParams:(id)a1;
- (void)p_setupPrevPage:(id)a0 inParams:(id)a1;
- (void)p_setupPassThrough:(id)a0 inParams:(id)a1;

@end
