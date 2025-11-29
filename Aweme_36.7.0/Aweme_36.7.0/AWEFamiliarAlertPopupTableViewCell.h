@class UIStackView, AWEMultiAvatarView, UIView, DUXTextTag, AWEIMActiveUserIndicativeView, UIImageView, NSString, AWEUserRecommendButton, AWEUserModel, AWEUserButtonStateMachine, AWEUserRecommendLabel, NSObject;
@protocol AWEUserRecommendCellModelProtocol, AWEUserRecommendTableViewModelProtocol, AWEIMActiveUserInfoService;

@interface AWEFamiliarAlertPopupTableViewCell : UITableViewCell <BDStateMachineDelegate>

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *highlightBackgroundView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *nameContainerView;
@property (retain, nonatomic) AWEUserRecommendLabel *nameLabel;
@property (retain, nonatomic) DUXTextTag *relationTag;
@property (retain, nonatomic) AWEUserRecommendLabel *recommendLabel;
@property (retain, nonatomic) AWEMultiAvatarView *relativeUserAvatarsView;
@property (nonatomic) long long btnState;
@property (retain, nonatomic) AWEIMActiveUserIndicativeView *onlineDotView;
@property (copy, nonatomic) NSString *uniqueFlag;
@property (retain, nonatomic) id<AWEIMActiveUserInfoService> activeInfo;
@property (retain, nonatomic) AWEUserRecommendButton *followButton;
@property (retain, nonatomic) id<AWEUserRecommendCellModelProtocol> model;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWEUserButtonStateMachine *buttonStateMachine;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) NSObject<AWEUserRecommendTableViewModelProtocol> *viewModel;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;
+ (double)suggestedHeight;

- (void)configWithModel:(id)a0;
- (void)stateMachine:(id)a0 transition:(id)a1 didLeaveFromState:(id)a2 didEnterState:(id)a3 event:(id)a4;
- (void)configureUI;
- (void)p_updataActionButtonContent;
- (void)p_clickFollowButton;
- (void)updateNormalColorModel:(id)a0;
- (id)p_approveStateForUser:(id)a0;
- (id)p_transitionToApproveStateForUser:(id)a0;
- (id)p_stateMachineForContacts;
- (void)p_updateActiveStatus;
- (void)updateRecReason:(id)a0;
- (BOOL)canShowActiveStatus;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshDisplayName;
- (void)configureLayout;

@end
