@class UILabel, UIView, AWEDetailShimmerView, UIImageView, UIButton, AWEDetailUnifyHeaderActivityView, AWEDetailUserProfileModel, IESServiceProvider;

@interface AWEDetailVerifiedUserCell : UICollectionViewCell

@property (retain, nonatomic) IESServiceProvider *provider;
@property (retain, nonatomic) AWEDetailUserProfileModel *model;
@property (retain, nonatomic) UIButton *followButton;
@property (nonatomic) BOOL isFollowed;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *verifiedTitleLabel;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UIView *rightSkeletonView;
@property (retain, nonatomic) AWEDetailShimmerView *shimmerView;
@property (retain, nonatomic) UIImageView *verifiedMarkImageView;
@property (retain, nonatomic) AWEDetailUnifyHeaderActivityView *unifyActivityView;
@property (retain, nonatomic) UIImageView *authorNameArrorView;

- (void)p_addSubviews;
- (void)p_bindModelObserve;
- (void)configWithModel:(id)a0 serviceProvider:(id)a1;
- (void)clickActivityEntranceButton:(id)a0;
- (void)configArrowImageViewLayout;
- (void)configFollowButtonLayout;
- (void)clickedVerifiedUserCell:(id)a0;
- (void)updateFollowStatus:(long long)a0;
- (void)configVerifiedMarkImageView;
- (void)followButtonDidClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)updateData;

@end
