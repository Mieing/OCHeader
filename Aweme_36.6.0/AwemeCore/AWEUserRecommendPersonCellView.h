@class AWEMultiAvatarView, UIView, UIAccessibilityCustomAction, AWEUserRecommendPersonCellModel, AWEUserModel, AWEBinding, UIButton, AWEUserButtonStateMachine, NSString;
@protocol AWEUserRecommendTableViewModelProtocol;

@interface AWEUserRecommendPersonCellView : AWEUserRecommendBaseCellView <AWEUserRecommendCellViewProtocol>

@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) UIView *yellowDot;
@property (retain, nonatomic) UIButton *editAliasButton;
@property (retain, nonatomic) AWEMultiAvatarView *relativeUserAvatarsView;
@property (retain, nonatomic) AWEUserRecommendPersonCellModel *model;
@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) long long privacyFilterResult;
@property (retain, nonatomic) AWEBinding *enableEditAliasBinding;
@property (retain, nonatomic) AWEBinding *followStatusBinding;
@property (retain, nonatomic) AWEBinding *aliasBinding;
@property (retain, nonatomic) AWEBinding *yellowDotBinding;
@property (retain, nonatomic) AWEBinding *followerStatusBinding;
@property (retain, nonatomic) UIAccessibilityCustomAction *accessibilityFollowAction;
@property (retain, nonatomic) AWEUserButtonStateMachine *primaryButtonStateMachine;
@property (retain, nonatomic) id<AWEUserRecommendTableViewModelProtocol> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (void)onSelected;
- (void)p_clickDislikeButton:(id)a0;
- (void)p_clickNameLabel:(id)a0;
- (void)refreshEditAliasButtonAnimated:(BOOL)a0;
- (void)p_refreshRelativeUserAvatars;
- (void)p_clickEditAliasButton:(id)a0;
- (void)p_accessibilityFollow;
- (id)p_multiAvatarOption;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layout:(id)a1;
- (id)secondaryButtonTitle;
- (void)willDisplay;
- (void)updateAccessibilityElements;

@end
