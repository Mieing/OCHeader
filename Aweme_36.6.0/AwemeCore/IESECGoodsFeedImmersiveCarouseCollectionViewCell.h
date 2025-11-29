@class UIImageView, IESECGradientView, IESECURLModel;

@interface IESECGoodsFeedImmersiveCarouseCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) UIImageView *topBlurredView;
@property (retain, nonatomic) UIImageView *bottomBlurredView;
@property (retain, nonatomic) IESECGradientView *bottomMaskGradientView;
@property (retain, nonatomic) IESECURLModel *URLModel;
@property (nonatomic) long long belongToCardIndex;
@property (nonatomic) double operationAreaHeight;

- (void)updateLayoutWithIsFullMode:(BOOL)a0 animationTime:(double)a1;
- (void)updateLayoutWithPreviewPercent:(double)a0;
- (void)bindURLModel:(id)a0;
- (void)remakeImageViewWithFullMode:(BOOL)a0 aspectRatio:(double)a1;
- (void)remakeImageViewWithPercent:(double)a0 aspectRatio:(double)a1;
- (double)fullModeImageCenterY;
- (void)configWithCardIndex:(long long)a0 URLModel:(id)a1 inFullModel:(BOOL)a2 operationAreaHeight:(double)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (double)imageAspectRatio;

@end
