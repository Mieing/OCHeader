@class UIImageView, UIImage, AWEGradientView, UIView;

@interface AWEListenFeedBgImageCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImage *defaultBgImage;
@property (retain, nonatomic) UIView *bgColorMaskView;
@property (retain, nonatomic) UIView *bgBlackView;
@property (retain, nonatomic) AWEGradientView *bgGradientView;
@property (nonatomic) BOOL shouldUseMask;

- (void)updateWithModel:(id)a0 playModel:(id)a1 placeholderImage:(id)a2 context:(id)a3;
- (void)updateBackgroundImageViewWithModel:(id)a0 playModel:(id)a1 placeholderImage:(id)a2;
- (void)p_updateBgImage:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
