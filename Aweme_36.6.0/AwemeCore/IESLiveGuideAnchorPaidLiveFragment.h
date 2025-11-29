@class IESLiveGuideAnchorPaidLiveModel, IESLiveGuideAnchorAddTicketGuard, NSDictionary, NSString, IESLiveGuideToolBarItem, NSMutableArray;

@interface IESLiveGuideAnchorPaidLiveFragment : IESLiveGuideComponent <IESLiveGuideAnchorPaidLiveRouter, IESLiveGuideActions, IESLiveGuideToolBarAction, IESLiveGuideOpenLiveAdditionalEvent>

@property (retain, nonatomic) IESLiveGuideToolBarItem *paidLiveToolBarItem;
@property (nonatomic) BOOL isAuthenticationFinished;
@property (nonatomic) BOOL isOnPaidLiveStatus;
@property (nonatomic) BOOL isOnSellTicketStatus;
@property (retain, nonatomic) IESLiveGuideAnchorPaidLiveModel *paidLiveModel;
@property (retain, nonatomic) NSMutableArray *subscriberList;
@property (retain, nonatomic) IESLiveGuideAnchorAddTicketGuard *addTicketGuard;
@property (retain, nonatomic) NSDictionary *paidLiveSchemas;
@property (nonatomic, getter=isHasCreateTicket) BOOL hasCreateTicket;
@property (nonatomic) BOOL hasTicketList;
@property (copy, nonatomic) NSString *paidLiveGoPage;
@property (nonatomic) BOOL isInviteFriendsCarryTicket;
@property (nonatomic) BOOL hadReceiveOpenLiveModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (id)soldCount;
- (id)maxPreviewDuration;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)toolbarItemReloadFinished;
- (void)appendStartLiveTrackParams:(id)a0 room:(id)a1 completion:(id /* block */)a2;
- (BOOL)isHavePaidLiveRight;
- (BOOL)hasPaidLiveTicketList;
- (id)guideAnchorPaidLiveModel;
- (void)showPaidLiveAdminPageWithExtraParams:(id)a0;
- (void)showPaidLiveHalfPageWithType:(unsigned long long)a0;
- (void)showPaidLiveTicketCreatePageWithExtraParams:(id)a0;
- (void)toBringTicketViewModel:(id)a0;
- (void)pushCallBackToUpdateModel:(id)a0;
- (BOOL)isHaveCreatePaidLiveOpenRight;
- (void)cancelPaidLiveState;
- (BOOL)enableSupportPaidLive;
- (id)trackClickParams:(id)a0;
- (void)openLiveModelDidUpdate:(id)a0;
- (void)subscribePayLiveStatusMessage;
- (void)liveTypeChangeAction:(unsigned long long)a0;
- (BOOL)skipTicketList;
- (void)subscribePayLiveTicketMessage;
- (void)subscribePayLiveTicketCreateMessage;
- (void)subscribePayLiveTicketUpsertMessage;
- (BOOL)enableShowPaidLiveAdminPageDirect;
- (BOOL)isInviteFriendsBringTicket;
- (int)userPaidLiveRight;
- (id)userPaidLiveRights;
- (BOOL)hasReplayRight;
- (void)trackPaidLiveRoomToastShow;
- (void)trackPaidLiveTicketToastShowWithIsCreator:(BOOL)a0;
- (BOOL)hasShowAgreementPage;
- (BOOL)didRightsArrayContainsRight:(int)a0;
- (void)showPaidLiveSimplifyPageWithExtraParams:(id)a0;
- (void)showPaidLiveTicketPage;
- (void)showPaidLiveNoPermission;
- (void)trackPaidLiveIconClick:(id)a0;
- (id)transformOfUserPaidLiveRights;
- (void).cxx_destruct;

@end
