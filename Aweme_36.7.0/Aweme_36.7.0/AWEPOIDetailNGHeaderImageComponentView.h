@class AWEPOIDetailNGHeaderImageComponentViewModel, UIImageView, AWEGradientView, UIView;

@interface AWEPOIDetailNGHeaderImageComponentView : AWEPOIDetailHeaderImageComponentBaseView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWEGradientView *topMaskView;
@property (retain, nonatomic) AWEGradientView *topMaskViewInNormalStyle;
@property (retain, nonatomic) AWEGradientView *bottomMaskView;
@property (weak, nonatomic) AWEPOIDetailNGHeaderImageComponentViewModel *headerImageVM;

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
