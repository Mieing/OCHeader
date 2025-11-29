@class IESECUIImageView, UIVisualEffectView, IESECURLModel;

@interface IESECGoodsDetailHeaderBGView : UIView

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (copy, nonatomic) IESECURLModel *urlModel;
@property (retain, nonatomic) IESECUIImageView *imageView;

- (void)initializeBGView;
- (void)initializeBGViewWithBlurRadius:(double)a0 saturationDeltaFactor:(double)a1;
- (void)prepareForReuseWithURLModel:(id)a0;
- (void)setImageWithURLModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)init;
- (void)layoutSubviews;
- (void)setup;

@end
