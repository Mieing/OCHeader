@class AWEIMMessageBaseViewController, NSString, AWEIMStrangerFollowView, RxDeferred, AWEUserModel;

@interface AWEIMMessageFollowViewInteractor : AWEIMComponentBase <AWEUserMessage, AWEIMMessageBaseVCLayoutAction, AWEIMMessageListUserInfoAction, AWEIMMessageListBackgroundAction, AWEIMMessageStrangerAction, AWEIMConIncentiveChatDataUpdateAction, IESIMMessageListLifeCycleAction, AWEIMMessageFollowViewInteractorInterface>

@property (retain, nonatomic) AWEIMStrangerFollowView *followView;
@property (readonly, nonatomic) AWEIMMessageBaseViewController *vcParent;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL isHideWhenMultiSelect;
@property (nonatomic) BOOL didTrackShowFollowButtonBar;
@property (nonatomic) BOOL peerUserIsMyUnFollowFamiliar;
@property (nonatomic) long long localFollowStatus;
@property (nonatomic) long long localFollowerStatus;
@property (nonatomic) BOOL invokeShowByOptimize;
@property (retain, nonatomic) AWEUserModel *fullDetailUser;
@property (retain, nonatomic) RxDeferred *fetchFullUserPromise;
@property (retain, nonatomic) RxDeferred *firstPageReloadPromise;
@property (nonatomic) BOOL isFollowViewShowOptimize;
@property (nonatomic) BOOL isMangoScene;
@property (retain, nonatomic) AWEUserModel *user;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL showInFloatMode;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishCloseFriendsWithUser:(id)a0 status:(long long)a1;
- (void)hostVC_viewDidDisappear;
- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)viewDidChangeBackgroundImage:(BOOL)a0;
- (void)didFetchFullDetailUser:(id)a0;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (void)messageListBackgroundImageDidUpdated:(id)a0;
- (void)didChangeRelationOldStatus:(unsigned long long)a0 newStatus:(unsigned long long)a1;
- (void)completeColdupIncentiveChatDataUpdate;
- (void)incentiveActivityExit;
- (BOOL)isFollowTipsViewShowing;
- (double)getMessageListVCTop;
- (void)updateFollowViewFrame;
- (void)dismissFollowView:(BOOL)a0;
- (void)didFinishReloadFirstPageTableViewFilled:(BOOL)a0;
- (void)msgList_firstMsgRendering;
- (double)vcParentViewWidth;
- (void)strangerTransferToFriendInCurrentController;
- (void)p_showWithUser:(id)a0;
- (void)p_recordFilledState:(BOOL)a0;
- (void)p_tryShowFollowViewImmediately;
- (void)p_recordFollowViewShowingWhenVCDisappear;
- (void)refreshIncentiveChatUIIfNeeded;
- (void)p_refreshFollowUIIfNeeded;
- (void)p_handleDataWithDetailUser:(id)a0 fullDetailUser:(id)a1;
- (BOOL)p_shouldCorrectFollowViewWithUser:(id)a0;
- (void)p_topFollowBtnClicked:(id)a0;
- (void)p_topCloseBtnClicked:(id)a0;
- (BOOL)p_shouldShowFollowTips:(id)a0;
- (void)p_addFollowView:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)show;

@end
