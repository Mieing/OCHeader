@class AWEIMUILabelPresenter, AWEIMUIViewPresenter;

@interface AWEIMMessageQuoteReplyPresenter : AWEIMGestureUIViewPresenter

@property (retain, nonatomic) AWEIMUILabelPresenter *label;
@property (retain, nonatomic) AWEIMUIViewPresenter *line;

- (void)didReceiveProps:(id)a0;
- (void)updateLineColor:(id)a0;
- (void)updateLableColor:(id)a0;
- (void)p_assemblePresenter:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
