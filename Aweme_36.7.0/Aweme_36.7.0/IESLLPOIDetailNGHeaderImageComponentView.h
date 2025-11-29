@class IESLLGradientView, UIImageView, UIView, IESLLPOIDetailNGHeaderImageComponentViewModel;

@interface IESLLPOIDetailNGHeaderImageComponentView : IESLLPOIDetailHeaderImageComponentBaseView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) IESLLGradientView *topMaskView;
@property (retain, nonatomic) IESLLGradientView *topMaskViewInNormalStyle;
@property (retain, nonatomic) IESLLGradientView *bottomMaskView;
@property (weak, nonatomic) IESLLPOIDetailNGHeaderImageComponentViewModel *headerImageVM;

- (void)hideMask;
- (void)updateViewModel:(id)a0;
- (void)pageDidScroll:(struct CGPoint { double x0; double x1; })a0;
- (void)bindActionAndState;
- (void)buildSubviews;
- (void)setDefaultImageToImageView:(id)a0 size:(struct CGSize { double x0; double x1; })a1 fileName:(id)a2;
- (id)adjustImageSizeWithImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (BOOL)canPreview;
- (void)didTap:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
