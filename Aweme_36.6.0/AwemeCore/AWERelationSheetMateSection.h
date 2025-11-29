@class UIImageView, LOTAnimationView, UILabel, UIView, AWEUserModel;

@interface AWERelationSheetMateSection : AWERelationSheetBaseSection

@property (retain, nonatomic) UIView *sectionView;
@property (retain, nonatomic) UIImageView *avatarImageView1;
@property (retain, nonatomic) UIView *avatarBackgroundView1;
@property (retain, nonatomic) UIImageView *avatarImageView2;
@property (retain, nonatomic) UIView *avatarBackgroundView2;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) BOOL hasPlayedAnimation;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) AWEUserModel *user;

+ (void)p_setupSpringAnimation:(id)a0;

- (void)viewControllerDidAppear:(BOOL)a0;
- (void)sectionViewDidLoad;
- (void).cxx_destruct;

@end
