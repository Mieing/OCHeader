@class UIView, NSString, UIImageView, UIButton, AWELandscapeAuthorElementViewModel, LOTAnimationView, UILabel, AWELandscapeCoCreatorsView;

@interface AWELandscapeAuthorElement : AWELandscapeInteractionBaseElement <AWELandscapeCoCreatorsViewDelegate, AWELandscapeAuthorElementDelegate>

@property (retain, nonatomic) UIView *userBackgroundView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UIButton *userActionButton;
@property (retain, nonatomic) UIView *followPromptView;
@property (retain, nonatomic) UILabel *xiguaLabel;
@property (retain, nonatomic) UIButton *xiguaLogoButton;
@property (retain, nonatomic) LOTAnimationView *followAnimationView;
@property (retain, nonatomic) AWELandscapeCoCreatorsView *coCreatorsView;
@property (retain, nonatomic) UIButton *followContainerButton;
@property (retain, nonatomic) UILabel *followTitleLabel;
@property (retain, nonatomic) UIImageView *followSuccessImageView;
@property (retain, nonatomic) AWELandscapeAuthorElementViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEnterLandscape;
- (void)playFollowAnimation;
- (void)updateFollowStatusWithFollowing:(BOOL)a0 needAnimate:(BOOL)a1;
- (void)updateXiguaUI;
- (void)updateCoCreatorsView;
- (void)handleClickFollow;
- (void)playFollowButtonAnimation;
- (void)exitLandscapeWithCompletion:(id /* block */)a0;
- (void)enterPostSplitScreenWithMode:(long long)a0 userModel:(id)a1;
- (void)handleClickUser;
- (void)landscapePlayerControlCoCreatorButtonClicked:(id)a0;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;
- (void)setupSubviews;

@end
