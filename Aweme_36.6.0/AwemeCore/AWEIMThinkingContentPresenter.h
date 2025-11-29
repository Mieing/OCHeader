@class AWEIMUIImageViewPresenter, AWEIMSelectableLabelPresenter, AWEIMUILabelPresenter, AWEIMTapUIViewPresenter, AWEIMUIViewPresenter;

@interface AWEIMThinkingContentPresenter : AWEIMUIViewPresenter

@property (retain, nonatomic) AWEIMTapUIViewPresenter *titleContainer;
@property (retain, nonatomic) AWEIMUILabelPresenter *titleLabel;
@property (retain, nonatomic) AWEIMUIImageViewPresenter *titleIcon;
@property (retain, nonatomic) AWEIMUIViewPresenter *line;
@property (retain, nonatomic) AWEIMSelectableLabelPresenter *contentLabel;
@property (retain, nonatomic) AWEIMUIViewPresenter *box;

- (void)updateView:(id)a0 withContext:(id)a1;
- (void)didReceiveProps:(id)a0;
- (void)p_updateProps;
- (id)p_lineColor;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
