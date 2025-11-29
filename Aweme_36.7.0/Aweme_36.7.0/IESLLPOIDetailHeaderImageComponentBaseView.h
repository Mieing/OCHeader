@class UIView;

@interface IESLLPOIDetailHeaderImageComponentBaseView : LLDitoComponentView

@property (retain, nonatomic) UIView *backgroundColorView;
@property (readonly, nonatomic) BOOL canPreview;

- (void)pageDidScroll:(struct CGPoint { double x0; double x1; })a0;
- (void)bindActionAndState;
- (void)updateComponentViewAlpha:(double)a0;
- (void)updateBackgroundViewTop:(double)a0;
- (void)updateBgTopForPullCollapseChange:(double)a0;
- (void)updateBgTopForPullCollapseEnd:(double)a0;
- (double)screenHeight;
- (void).cxx_destruct;
- (double)screenWidth;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
