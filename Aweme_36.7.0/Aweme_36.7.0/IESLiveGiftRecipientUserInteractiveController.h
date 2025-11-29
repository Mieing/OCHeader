@class NSString;
@protocol IESLiveGiftModuleRecipientRouter, IESLiveRevenueInteractModule, IESLiveInteractionModule;

@interface IESLiveGiftRecipientUserInteractiveController : IESLiveCubeController <IESLiveRevenueInteractAction, IESLiveSocialInteractAction, IESLiveGiftRecipientUserInteractiveSubInterface>

@property (retain, nonatomic) id<IESLiveInteractionModule> socialInteractionModule;
@property (retain, nonatomic) id<IESLiveRevenueInteractModule> revenueInteractionModule;
@property (retain, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (nonatomic) BOOL enableAddRoomOwnerOnAllScene;
@property (nonatomic) BOOL enableSendPropToGroupMember;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startRevenueInteractWithScene:(unsigned long long)a0;
- (void)endRevenueInteractWithScene:(unsigned long long)a0;
- (void)interactionModeEndedWithLayout:(id)a0;
- (void)linkedUsersFanTicketDidChange:(id)a0 scene:(unsigned long long)a1;
- (id)giftRecipientWithID:(id)a0;
- (id)recipientListJSBDataWithGuestListData:(BOOL)a0;
- (void)requireRecipientListJSBDataWithCompletion:(id /* block */)a0;
- (void)controllerActived;
- (id)recipientLinkList;
- (BOOL)fetchOtherUserGiftListEnabled;
- (id)recipientTypeWith:(id)a0 allMic:(BOOL)a1;
- (unsigned long long)identifierValueOfRecipient:(id)a0 useCache:(BOOL)a1;
- (BOOL)fetchGiftListNotUseDefaultAnchorButWithRecipients:(id)a0 isAllMic:(BOOL)a1;
- (BOOL)recipientsIsHost:(id)a0;
- (id)trackSendScene;
- (id)recipientIDWith:(id)a0 allMic:(BOOL)a1;
- (BOOL)recipientEntranceOrientationCondition;
- (BOOL)couldSendWithConfig:(id)a0;
- (BOOL)isSendingToSelf;
- (BOOL)enableAllMic;
- (BOOL)openGuestGiftSetting;
- (BOOL)defaultSelectRecipientOptimizeEnable;
- (BOOL)couldSendToOthersWithConfig:(id)a0;
- (BOOL)isSendingToSelfWithRecipients:(id)a0 allMic:(BOOL)a1;
- (BOOL)recipientChangedFrom:(id)a0 to:(id)a1;
- (unsigned long long)sendGiftScene:(id)a0;
- (unsigned long long)sendPropSceneWithRecipient:(id)a0;
- (id)recipientTypeForMonitorWith:(id)a0 allMic:(BOOL)a1;
- (id)giftPanelGuestEntranceExtraInfo;
- (id)groupLiveRecipients;
- (id)buildJSBRecipientListParamWithJsonSerialize:(BOOL)a0;
- (void).cxx_destruct;

@end
