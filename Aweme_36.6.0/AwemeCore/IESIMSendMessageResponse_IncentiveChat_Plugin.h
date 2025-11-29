@class NSString;

@interface IESIMSendMessageResponse_IncentiveChat_Plugin : AWEIMComponentBase <IESIMSendMessageTrackerAspectProtocol, IESIMDidSendMessageAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emojiRegex;

- (void)componentDidMounted:(id)a0;
- (void)didReceiveSendMessageResponseWithContext:(id)a0;
- (id)sendMessageAndResponseTrackerAspectParams:(id)a0;
- (void)trackSendMessageContentIfNeededWithMessage:(id)a0 con:(id)a1 response:(id)a2 extraParams:(id)a3;
- (void)trackTypingSpeedIfNeededWithMessage:(id)a0 con:(id)a1 response:(id)a2 extraParams:(id)a3;
- (id)getMatchedResultWithSearchText:(id)a0 pattern:(id)a1;

@end
