@class NSString, AWECoCreatorModel, UIImageView, UIControl, UIButton, LOTAnimationView, UILabel, AWELandscapePageContext;
@protocol AWELandscapeUserViewDelegate;

@interface AWELandscapeUserView : UIView <AWEUserMessage>

@property (retain, nonatomic) AWECoCreatorModel *userModel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UIButton *userActionButton;
@property (retain, nonatomic) UIControl *followPromptView;
@property (retain, nonatomic) UIButton *followButton;
@property (retain, nonatomic) UILabel *followLabel;
@property (retain, nonatomic) UIImageView *followImageView;
@property (retain, nonatomic) LOTAnimationView *followAnimationView;
@property (nonatomic) BOOL doFollowing;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (retain, nonatomic) UIButton *followContainerButton;
@property (retain, nonatomic) UILabel *followTitleLabel;
@property (retain, nonatomic) UIImageView *followSuccessImageView;
@property (weak, nonatomic) id<AWELandscapeUserViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)playFollowAnimation;
- (id)initWithPageContext:(id)a0;
- (void)hideFollowButton;
- (BOOL)canFollow;
- (void)handleClickFollow;
- (void)playFollowButtonAnimation;
- (void)handleClickUser;
- (void)updateWithUserModel:(id)a0;
- (void)updateUserViewLayout;
- (void).cxx_destruct;
- (void)setupUI;

@end
