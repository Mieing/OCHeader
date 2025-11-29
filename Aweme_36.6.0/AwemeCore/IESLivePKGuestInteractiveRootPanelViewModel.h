@class IESLiveCombineSubject, NSArray, NSString, HTSLiveInteractiveAPI, NSDictionary, NSMutableArray, IESLivePKGuestWaitingListService, NSNumber, IESLiveWaitingListUser;
@protocol IESLiveRoomService, IESLivePKGuestDynamicActivityProvider;

@interface IESLivePKGuestInteractiveRootPanelViewModel : NSObject <IESLiveInteractiveLinkServiceDelegate>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) NSMutableArray *invitableList;
@property (copy, nonatomic) NSArray *anchorInviteList;
@property (copy, nonatomic) NSArray *anchorInviteAudienceList;
@property (copy, nonatomic) NSArray *anchorInviteFriendList;
@property (copy, nonatomic) NSArray *inviteInterestedList;
@property (retain, nonatomic) IESLivePKGuestWaitingListService *waitingListService;
@property (retain, nonatomic) NSMutableArray *waitingList;
@property (retain, nonatomic) IESLiveWaitingListUser *waitingUser;
@property (retain, nonatomic) HTSLiveInteractiveAPI *linkmicAPI;
@property (retain, nonatomic) IESLiveCombineSubject *anchorInviteListChangedSignal;
@property (nonatomic) BOOL isDelayLoadingWaitingList;
@property (readonly, nonatomic) long long waitingListTotalCount;
@property (readonly, nonatomic) int waitingListSortStrategy;
@property (readonly, nonatomic) NSNumber *serverTime;
@property (readonly, nonatomic) BOOL enableApplyListLoadMore;
@property (retain, nonatomic) id<IESLivePKGuestDynamicActivityProvider> activityProvider;
@property (nonatomic) BOOL isInAlternateMode;
@property (readonly, nonatomic) BOOL isInviteOnly;
@property (copy, nonatomic) NSString *emptyViewNotice;
@property (copy, nonatomic) NSArray *inviteFriendsList;
@property (readonly, copy, nonatomic) NSString *applyTitle;
@property (copy, nonatomic) NSDictionary *waitingListHeightDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)onReceivedWatingListChangeMessage:(id)a0;
- (void)onReceivedLinkWatingListChangeMessage:(id)a0;
- (void)onReceivedLinkLeaveMessage:(id)a0;
- (void)getInviteFriendsList:(id)a0 callback:(id /* block */)a1;
- (BOOL)isFirstInit;
- (void)refreshWaitingListWithCompletion:(id /* block */)a0;
- (void)loadMoreWaitingListWithCompletion:(id /* block */)a0;
- (void)refreshInteractiveListInStatus:(int)a0 withType:(unsigned long long)a1 requestSource:(id)a2;
- (void)fetchInteractiveAnchorInviteListWithType:(unsigned long long)a0;
- (void)searchInvitableListWithQuery:(id)a0;
- (void)removeInvitableList;
- (void)updateWaitingListSortType:(id /* block */)a0;
- (void)updateWaitingListOnListChange:(id)a0;
- (void)removeWaitingModelWithUid:(id)a0;
- (void)classifyInterativeList:(id)a0 status:(int)a1 withType:(unsigned long long)a2;
- (void)removeWaitingUsersWithActiveUsers:(id)a0;
- (void)updateInvitableList:(id)a0;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
