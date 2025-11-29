@class AWEIMMessageBaseViewController, NSString, AWEIMIncentiveChatChatRelation, AWEIMIncentiveChatInteractorView;

@interface AWEIMConIncentiveAcceptBannerComponent : AWEIMComponentBase <AWEUserMessage, AWEIMMessageListDataAction, AWEIMMessageTableViewAction, AWEIMMessageListBackgroundAction, AWEIMIncentiveChatServiceMessage, AWEIMConIncentiveChatDataUpdateAction, AWEIMConversationDidFetchPeerFullDetailUserAction, AWEIMFloatingViewDispatchProtocol>

@property (retain, nonatomic) AWEIMIncentiveChatInteractorView *interactorView;
@property (retain, nonatomic) AWEIMMessageBaseViewController *vcParent;
@property (retain, nonatomic) AWEIMIncentiveChatChatRelation *incentiveRelation;
@property (nonatomic) BOOL delayIncentiveAccept;
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
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)messageListBackgroundImageDidUpdated:(id)a0;
- (void)approveInviteCompleteWithService:(id)a0;
- (void)didChangeRelationOldStatus:(unsigned long long)a0 newStatus:(unsigned long long)a1;
- (void)incentiveActivityExit;
- (void)didFetchPeerFullDetailUser:(id)a0;
- (BOOL)__shouldShowBannerView;
- (void)__dispatchShowBanner;
- (void)__dismissInteractorView;
- (double)__vcParentViewWidth;
- (void)__dismissInteractorViewWithEnableAnim:(BOOL)a0;
- (void)__showInteractorView;
- (void).cxx_destruct;
- (id)conversation;
- (void)dealloc;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (BOOL)isDisplaying;

@end
