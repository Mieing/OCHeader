@class IESLiveGiftRecipientController, NSString, IESLiveGiftRecipientTrackController, RACReplaySubject, IESLiveGiftRecipientUserInteractiveController, HTSEventContext, IESLiveComponentContext;
@protocol IESLiveRoomService;

@interface IESLiveGiftRecipientFragment : IESLiveCubeFragment <IESLiveGiftModuleRecipientRouter, IESLiveRefactGiftPanelEventAction>

@property (retain, nonatomic) IESLiveGiftRecipientController *recipientController;
@property (retain, nonatomic) IESLiveGiftRecipientTrackController *trackController;
@property (retain, nonatomic) IESLiveGiftRecipientUserInteractiveController *userInteractiveController;
@property (retain, nonatomic) RACReplaySubject *currentSelectedReciverPublisher;
@property (nonatomic) BOOL enableFixSelectedRecipientsUpdate;
@property (nonatomic) BOOL enableSupportThrow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<IESLiveRoomService> currentRoom;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentMount;
- (void)gpe_giftRecipientDidSelectedRecipients:(id)a0;
- (id)recipientEntranceService;
- (id)recipientTrackService;
- (id)audienceService;
- (id)observeSelectedReciver;
- (id)giftRecipientWithID:(id)a0;
- (id)recipientListJSBDataWithGuestListData:(BOOL)a0;
- (void)requireRecipientListJSBDataWithCompletion:(id /* block */)a0;
- (void)setRecipients:(id)a0 allMic:(BOOL)a1 useDefaultWhenEmpty:(BOOL)a2;
- (void)manualChangeFromRecipient:(id)a0 fromAllMic:(BOOL)a1 toRecipient:(id)a2 toAllMic:(BOOL)a3;
- (void)manualChangeToRecipient:(id)a0 toAllMic:(BOOL)a1;
- (void)refreshSpecifiedUserOnGuildGameMode:(id)a0;
- (BOOL)isGuildGameMode;
- (id)recipientFromAudienceGiftReceiverListWithID:(id)a0;
- (void)addAudienceGiftReceiverWithRoomID:(id)a0 anchorID:(id)a1 audienceID:(id)a2 completion:(id /* block */)a3;
- (void)updateAnchorSideAudienceGiftAuthInfoWithRoomID:(id)a0 anchorID:(id)a1 authSwitch:(id)a2 completion:(id /* block */)a3;
- (void)setSpecialRecommendRecipientWithID:(id)a0 logExtra:(id)a1 completion:(id /* block */)a2;
- (void)removeSpecialRecommendRecipient;
- (BOOL)openAudienceReceiveGiftSettingWithAllMicExclusive:(BOOL)a0;
- (BOOL)isGroupLiveRoom;
- (BOOL)isAllMic;
- (id)userInteractiveService;
- (id)recipientTypeWith:(id)a0 allMic:(BOOL)a1;
- (unsigned long long)identifierValueOfRecipient:(id)a0 useCache:(BOOL)a1;
- (id)recipientService;
- (id)groupLiveMemberRecipientList;
- (id)anchorSideAudienceGiftAuthInfo;
- (void)setAnchorSideAudienceGiftAuthInfo:(id)a0;
- (id)groupLiveThrowUserConfig;
- (void)cubeComponentCreate;
- (void)sendSelectedReciver;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (id)selectedRecipients;

@end
