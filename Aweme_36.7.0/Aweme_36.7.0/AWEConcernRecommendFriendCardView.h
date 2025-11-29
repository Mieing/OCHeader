@class AWEUserModel, NSString, UIImageView, LOTAnimationView, UIView, UILabel, UIButton;

@interface AWEConcernRecommendFriendCardView : UIView <UIGestureRecognizerDelegate, AWEUserMessage>

@property (retain, nonatomic) UIView *authorBackgroundView;
@property (retain, nonatomic) UIImageView *authorImageView;
@property (retain, nonatomic) UIButton *followPromptButton;
@property (retain, nonatomic) LOTAnimationView *followAnimationView;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UIView *tagsContainerView;
@property (retain, nonatomic) UIButton *genderAndAgeButton;
@property (retain, nonatomic) UIButton *locationButton;
@property (retain, nonatomic) UIButton *constellationButton;
@property (retain, nonatomic) UILabel *recommendReasonLabel;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (nonatomic) BOOL isFollowAnimating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)configWithModel:(id)a0;
- (void)playFollowAnimation;
- (void)turnToPersonalHomepage;
- (long long)authorBackgroundViewWidth;
- (long long)authorImageViewWidth;
- (double)followPromptViewOffset;
- (double)followPromptViewWidth;
- (double)verticalOffsetRatio;
- (BOOL)canFollow;
- (void)followUserWithCompletion:(id /* block */)a0;
- (id)getUserAge;
- (double)recommendVerticalOffsetRatio;
- (double)authorNameLabelFontSize;
- (void)onFollowViewClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;
- (void)updateUI;

@end
