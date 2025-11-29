@class AWEIMFansCellViewModel, AWENotificationModelNew, UIButton, NSString, AWEUserModel, AWEUserButtonStateMachine;

@interface AWEIMFansFollowViewModel : AWEIMFansBaseViewModel <BDStateMachineDelegate>

@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWENotificationModelNew *model;
@property (weak, nonatomic) AWEIMFansCellViewModel *cellViewModel;
@property (retain, nonatomic) AWEUserButtonStateMachine *stateMachine;
@property (weak, nonatomic) UIButton *button;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isActiveFollowRequestNotice:(id)a0;

- (id)approveState;
- (id)relationContext;
- (id)setupStates;
- (id)accessibilityAction;
- (void)bindButton:(id)a0;
- (id)initWithUserModel:(id)a0 cellViewModel:(id)a1;
- (void)updateUserIDForDisplay:(id)a0;
- (void)setupStateMachine;
- (void)trackClickButton;
- (id)unfollowState;
- (id)followedState;
- (id)vcdAuthState;
- (id)lightInteractionStates;
- (void)approveAction;
- (BOOL)enableAfterFollowStrategy:(id)a0;
- (id)relationContext:(id)a0;
- (void)succeedInFollowRequestApprove:(id)a0;
- (void)failedInFollowRequestApprove:(id)a0;
- (void)refreshTitleWithState:(id)a0 user:(id)a1;
- (void)followUserAction;
- (void)accessibilityAnnounceUser:(id)a0;
- (void)finishFollowWithResponse:(id)a0 model:(id)a1;
- (void)followedStateAction;
- (void)unfollowUserAction;
- (id)approveStateTransition;
- (id)liteInteractionTransition;
- (id)sendMsgStateTransition;
- (id)vcdStatusStateTransition;
- (id)emptyStateTransition;
- (BOOL)enableVcdAuthStatus:(id)a0;
- (void)bindAvatarView:(id)a0 containerView:(id)a1;
- (void).cxx_destruct;
- (void)unbind;
- (id)setupTransitions;
- (id)emptyState;

@end
