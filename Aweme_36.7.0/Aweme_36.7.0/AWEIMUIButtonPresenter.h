@interface AWEIMUIButtonPresenter : AWEIMUIViewPresenter

@property (nonatomic) BOOL isMeasurementRequired;

- (id)createViewWithContext:(id)a0;
- (void)updateView:(id)a0 withContext:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFit:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isTextNode;
- (void)p_tapAction:(id)a0;
- (id)initWithContext:(id)a0;

@end
