@class CAGradientLayer, AWEEcomAISearchResultBackgroundImageModel, UIImageView, AWEEcomAISearchResultBackgroundModel;

@interface AWEEcomAISearchResultBackgroundView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWEEcomAISearchResultBackgroundModel *backgroundModel;
@property (retain, nonatomic) AWEEcomAISearchResultBackgroundImageModel *imageModel;

- (void)updateImageWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithModel:(id)a0;

@end
