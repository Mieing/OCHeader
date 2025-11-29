@class NSString, AFDButton, UIImageView, LOTAnimationView, UIView, AWEUserButtonStateMachine, AWEUserModel;
@protocol AWEShakeShareAwemeUserCollectionViewCellDelegate;

@interface AWEShakeShareAwemeUserCollectionViewCell : UICollectionViewCell <BDStateMachineDelegate>

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *followPromptView;
@property (retain, nonatomic) LOTAnimationView *followAnimationView;
@property (retain, nonatomic) AFDButton *mateButton;
@property (retain, nonatomic) UIView *mateView;
@property (retain, nonatomic) AWEUserButtonStateMachine *buttonStateMachine;
@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) long long lastFollowStatus;
@property (copy, nonatomic) NSString *enterMethod;
@property (weak, nonatomic) id<AWEShakeShareAwemeUserCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stateMachine:(id)a0 transition:(id)a1 didLeaveFromState:(id)a2 didEnterState:(id)a3 event:(id)a4;
- (void)initView;
- (void)configWithUser:(id)a0;
- (void)followButtonTapped;
- (id)p_relationContext;
- (id)p_relationSheetContext;
- (void)p_fakeFollowCommit;
- (void)p_fakeFollowRollBack;
- (long long)p_getFakeFollowStatus;
- (void)p_fakeFollow:(long long)a0;
- (id)p_hiddenState;
- (id)p_unfollowState;
- (id)p_transitionToHidden;
- (id)p_transitionToUnfollow;
- (id)p_addMateState;
- (id)p_approveMateState;
- (id)p_appliedMateState;
- (id)p_transitionToAddMate;
- (id)p_transitionToApproveMate;
- (id)p_transitionToAppliedMate;
- (void)updateRelativeDistanceToCurrentCell:(double)a0;
- (id)currentStateID;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyLayoutAttributes:(id)a0;
- (void)setupLayout;

@end
