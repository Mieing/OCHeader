@interface AWEIMMessageBottomQuickReplyPresenter : AWEIMUIViewPresenter

- (id)createViewWithContext:(id)a0;
- (void)updateView:(id)a0 withContext:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFit:(struct CGSize { double x0; double x1; })a0;
- (double)getRecommendListWidth;
- (BOOL)isMeasurementRequired;
- (BOOL)isTextNode;
- (id)initWithContext:(id)a0;

@end
