@class CJPayButton;

@interface CJPayInvestResultPayInfoWithButtonCell : CJPayInvestResultPayInfoCell

@property (retain, nonatomic) CJPayButton *actionButton;

- (void)configWith:(id)a0;
- (void)actionButtonClick;
- (void)p_makeConstraints;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)didMoveToWindow;

@end
