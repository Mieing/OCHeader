@class AWEIMUILabelPresenter, AWEIMUIViewPresenter;

@interface AWEIMQuoteReplyDetailStylePresenter : AWEIMUIViewPresenter

@property (retain, nonatomic) AWEIMUILabelPresenter *label;
@property (retain, nonatomic) AWEIMUILabelPresenter *invisibleStatusLabel;
@property (retain, nonatomic) AWEIMUIViewPresenter *line;
@property (retain, nonatomic) AWEIMUIViewPresenter *verticalBox;
@property (retain, nonatomic) AWEIMUIViewPresenter *box;
@property (retain, nonatomic) AWEIMUIViewPresenter *bubble;

- (void)didReceiveProps:(id)a0;
- (id)p_lineColor;
- (id)p_bubbleBackgroundColor:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
