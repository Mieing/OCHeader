@class NSString;
@protocol IESLiveGiftModuleRecipientRouter;

@interface IESLiveGiftRecipientTrackController : IESLiveCubeController <IESLiveGiftRecipientTrackSubInterface>

@property (retain, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controllerActived;
- (void)trackChangeFromRecipient:(id)a0 fromAllMic:(BOOL)a1 toRecipient:(id)a2 toAllMic:(BOOL)a3 linkRecipientCount:(unsigned long long)a4 trackSendScene:(id)a5 clickUserType:(long long)a6 defaultGuestInfoLogExtra:(id)a7;
- (void)trackGiftRecipientEntranceShowWithExtra:(id)a0;
- (void)trackAnchorListShowWithParams:(id)a0;
- (void)trackReceiveButtonClickWithParams:(id)a0;
- (void)trackTapRecipientEntrance:(id)a0 sendScene:(id)a1 currentSelectRecipientID:(id)a2 currentSelectedRecipientsType:(id)a3 entranceType:(id)a4;
- (void)trackSpecialRecommendWithRecipientID:(id)a0 logExtra:(id)a1;
- (void)trackDefaultRecipientInfoWithResult:(id)a0 chooseReason:(unsigned long long)a1 defaultRecipientInfoLogExtra:(id)a2;
- (void).cxx_destruct;

@end
