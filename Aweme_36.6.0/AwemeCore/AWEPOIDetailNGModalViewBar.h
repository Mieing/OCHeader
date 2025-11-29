@class DitoPageContext, AWEPOIRepeatBackgroundView, AWEPOIDetailNGModalViewBarViewModel, UIView;

@interface AWEPOIDetailNGModalViewBar : DitoComponentView {
    DitoPageContext *_context;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *barView;
@property (nonatomic) struct CGSize { double width; double height; } cacheSize;
@property (nonatomic) double modalViewBarHeight;
@property (weak, nonatomic) AWEPOIDetailNGModalViewBarViewModel *barVM;
@property (retain, nonatomic) AWEPOIRepeatBackgroundView *backgroundView;

- (void)updateViewModel:(id)a0;
- (void)setupMaskLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getBackgroundColor;
- (void)updateBarViewAlpha:(double)a0;
- (void)didTap:(id)a0;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)context;
- (void)setupUI;

@end
