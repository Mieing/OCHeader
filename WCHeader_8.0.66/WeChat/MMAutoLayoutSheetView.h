@class MMScrollStack, UIStackView;

@interface MMAutoLayoutSheetView : MMPageSheetBaseView

@property (retain, nonatomic) UIStackView *contentView;
@property (retain, nonatomic) MMScrollStack *scrollStack;
@property (nonatomic) double fixedHeight;

- (id)init;
- (void)initPageSheet;
- (void)initStackView;
- (void)setPageDetailView;
- (void)updateContentViewHeight;
- (void)showWithAnimated:(BOOL)a0;
- (void)showInView:(id)a0 animated:(BOOL)a1;
- (void)showFromViewController:(id)a0 animated:(BOOL)a1;
- (void)didPushSelfInPage:(id)a0;
- (void)pageSheetDidRotation;
- (void)customArrangeViews;
- (void)layoutSubviews;
- (void)setContentMargin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)appendView:(id)a0 withNextSpace:(double)a1;
- (void).cxx_destruct;

@end
