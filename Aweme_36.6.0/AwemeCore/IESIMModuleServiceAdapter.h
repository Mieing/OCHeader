@class NSString;

@interface IESIMModuleServiceAdapter : HTSService <IESIMModuleServiceAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)couldExcludeEnterpriseNoticeFromServiceNotice;
- (BOOL)shouldExcludeEnterpriseNoticeFromServiceNotice;
- (void)startIM;
- (id)fetchStartIMInfo;
- (BOOL)disableSendTopMedicalCardMessage;
- (BOOL)isEnableDuoShanDownload;
- (BOOL)shouldShowToastForUnSupportMessage:(long long)a0 awemeType:(long long)a1;
- (id)unSupportMessageTips;
- (id)unSupportMessageContentForMessageType:(long long)a0 awemeType:(long long)a1 contentDict:(id)a2;
- (BOOL)enableB2CSmartAssistant;
- (BOOL)disableRedpacketIfNeeded;
- (BOOL)disableSendGoods;
- (BOOL)disableSendOrders;
- (BOOL)diableCoupons;
- (BOOL)disableLiveConsult;
- (BOOL)enterpriseNoticeShouldStickOnTop;
- (id)enterpriseModeTrackingStatusVersion;
- (void)postVideoWithShareList:(id)a0 text:(id)a1 createGroup:(BOOL)a2 extra:(id)a3 completion:(id /* block */)a4;
- (void)postImageWithShareList:(id)a0 image:(id)a1 text:(id)a2 createGroup:(BOOL)a3 extra:(id)a4;
- (void)groupInviteCardEnterGroupWithConversationID:(id)a0 enterMethod:(id)a1 enterpriseTrackParams:(id)a2;
- (void)groupInviteCardEnterGroupWithConversationID:(id)a0 enterMethod:(id)a1 enterpriseTrackParams:(id)a2 joinSourceType:(id)a3;
- (void)groupInviteCardEnterGroupWithConversationID:(id)a0 enterMethod:(id)a1 enterpriseTrackParams:(id)a2 joinSourceType:(id)a3 completion:(id /* block */)a4;
- (void)handleGroupPassward:(id)a0 extraParams:(id)a1;
- (id)titleForHotsoonUserHideInIMContact;
- (BOOL)checkCurrentGroupIsBannedWithConversationID:(id)a0 alert:(BOOL)a1 leaveCompletion:(id /* block */)a2;
- (long long)leftSideBarGroupType;
- (void)postSendShareMessageNotification:(id)a0 awemeModel:(id)a1;
- (void)postSendShareMessageNotification:(id)a0 awemeModel:(id)a1 tips:(id)a2 trackDict:(id)a3 extraDict:(id)a4;
- (BOOL)shouldShowFanGroupCommodiyEntry;
- (BOOL)shouldShowFanGroupCouponEntry;
- (id)cdnPathPart;
- (BOOL)enableJisuStrangerTimeOpt;
- (void)asyncGetUnread1to1ChatsOrderedByUpdatedAtWithLimit:(long long)a0 completion:(id /* block */)a1;
- (id)sharedOfficialDataManager;
- (id)customServiceOfficialDataManager;
- (id)imFolwerManager;
- (void)imMessageTabViewControllerDidLoad:(id)a0;
- (BOOL)awemeIMTrackerAsyncEnable;
- (id)noticeCreateErrorView;
- (void)checkIMWidgetsIsSelectingUserID:(id)a0 inKind:(id)a1 withCompletion:(id /* block */)a2;

@end
