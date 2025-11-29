@class UIImageView, UIView;

@interface AWEUserRecommendCollectionViewFindMoreCell : AWEUserRecommendCollectionViewBaseCell

@property (retain, nonatomic) UIImageView *firstAvatarView;
@property (retain, nonatomic) UIImageView *secondAvatarView;
@property (retain, nonatomic) UIView *firstAvatarBackgroundView;

- (void)awe_themeReload;
- (void)configWithModel:(id)a0;
- (void)onSelected;
- (void)p_setAvatarForUser:(id)a0 imageView:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
