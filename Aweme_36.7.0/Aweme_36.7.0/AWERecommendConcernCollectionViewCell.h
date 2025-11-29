@class AWEConcernRecommendFriendCardView, CAGradientLayer, UIView, AWEAnimatedButton;

@interface AWERecommendConcernCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWEAnimatedButton *changeRecommendButton;
@property (retain, nonatomic) AWEConcernRecommendFriendCardView *recommendACardView;
@property (retain, nonatomic) UIView *separateLineView;
@property (retain, nonatomic) AWEConcernRecommendFriendCardView *recommendBCardView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (copy, nonatomic) id /* block */ refreshUsersBlock;

+ (id)identifier;

- (void)refreshWithModels:(id)a0 animated:(BOOL)a1;
- (void)playRefreshAnimationWithRefreshModels:(id)a0;
- (void)refreshModelsWithoutAnimation:(id)a0;
- (void)playDisappearAnimationWithRecommendView:(id)a0 completion:(id /* block */)a1;
- (void)playAppearAnimationWithRecommendView:(id)a0;
- (void)changeRecommend:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
