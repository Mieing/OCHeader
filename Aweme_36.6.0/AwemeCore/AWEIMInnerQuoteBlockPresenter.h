@class AWEIMSelectableLabelPresenter, AWEIMUIViewPresenter;

@interface AWEIMInnerQuoteBlockPresenter : AWEIMUIViewPresenter

@property (retain, nonatomic) AWEIMUIViewPresenter *line;
@property (retain, nonatomic) AWEIMSelectableLabelPresenter *contentLabel;

- (void)updateView:(id)a0 withContext:(id)a1;
- (void)didReceiveProps:(id)a0;
- (void)p_updateProps;
- (id)p_lineColor;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
