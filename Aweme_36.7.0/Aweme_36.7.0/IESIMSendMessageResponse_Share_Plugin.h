@class NSString;

@interface IESIMSendMessageResponse_Share_Plugin : AWEIMComponentBase <IESIMSendMessageTrackerAspectProtocol, IESIMDidSendMessageAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)didSendMessageWithContext:(id)a0;
- (void)didReceiveSendMessageResponseWithContext:(id)a0;
- (id)sendMessageAndResponseTrackerAspectParams:(id)a0;
- (id)getShareImageAnchorTrackParams:(id)a0;
- (void)trackSharePanelPerformanceWithContext:(id)a0;

@end
