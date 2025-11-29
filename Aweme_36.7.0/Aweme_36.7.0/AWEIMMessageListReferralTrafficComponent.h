@class AWEIMMessage, NSString, AWEIMReferralTrafficTipsView;
@protocol AWEIMMessageListBottomFloatingInterface;

@interface AWEIMMessageListReferralTrafficComponent : AWEIMComponentBase <AWEIMMessageListBottomFloatingViewProtocol, AWEIMMessageListBackgroundAction, AWEIMMessageListUserInfoAction, AWEIMMessageListDataAction, AWEIMMessageListReferralTrafficInterface>

@property (retain, nonatomic) AWEIMReferralTrafficTipsView *referralTrafficTipsView;
@property (retain, nonatomic) AWEIMMessage *message;
@property (nonatomic) BOOL hasReceivedFullDetailUser;
@property (nonatomic) BOOL hasReceivedFirstMessage;
@property (weak, nonatomic) id<AWEIMMessageListBottomFloatingInterface> bottomService;
@property (nonatomic) BOOL showInFloatMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (void)messageListBackgroundImageDidUpdated:(id)a0;
- (id)viewToDisplayInBottomContainer;
- (BOOL)canShowBarWhenInputTypeChangedTo:(long long)a0;
- (void)p_closeBtnClicked:(id)a0;
- (BOOL)isReferralTrafficViewShowing;
- (void)p_didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)p_showReferralTrafficViewIfNeeded;
- (BOOL)p_shouldShowReferralTrafficTips:(id)a0;
- (void)p_markAsNoNeedToShow:(id)a0;
- (void)dismissReferralTrafficView:(BOOL)a0;
- (BOOL)p_showConditionAllResolved;
- (void)p_showReferralTrafficView;
- (void)p_makeANewReferralTrafficTipsView;
- (void)p_reportBtnClicked:(id)a0;
- (void).cxx_destruct;

@end
