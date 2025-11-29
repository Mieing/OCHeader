@class NSMutableDictionary, UIView;

@interface AWEUGPushGuideDynamicView : AWEUGPushGuideBaseView

@property (retain, nonatomic) NSMutableDictionary *allViews;
@property (retain, nonatomic) NSMutableDictionary *allModel;
@property (retain, nonatomic) UIView *panel;
@property (nonatomic) BOOL peneration;
@property (nonatomic) BOOL dismissAfterAction;
@property (nonatomic) BOOL isDismissing;

- (void)configWithModel:(id)a0;
- (void)click:(id)a0;
- (void)configViews;
- (id)initWithGuideViewModel:(id)a0;
- (void)realShow;
- (void)renderHTMLString:(id)a0 label:(id)a1;
- (id)renderSelectionWithModel:(id)a0;
- (id)renderButtonWithModel:(id)a0;
- (id)renderBackgroundLayerWithModel:(id)a0;
- (void)buildConstraintWithModel:(id)a0 view:(id)a1;
- (void)selectionClick:(id)a0;
- (void)addCornerView:(id)a0 leftTop:(double)a1 rightTop:(double)a2 leftBottom:(double)a3 rightBottom:(double)a4 color:(id)a5;
- (void)addGradientLayerWithGradientColors:(id)a0 gradientStartPoint:(id)a1 gradientEndPoint:(id)a2 view:(id)a3;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)dismiss:(BOOL)a0;

@end
