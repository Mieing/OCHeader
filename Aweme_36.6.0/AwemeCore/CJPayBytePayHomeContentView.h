@class CJPayBytePayMethodView, CJPayMarketingMsgView, UILabel, MASConstraint;

@interface CJPayBytePayHomeContentView : CJPayHomeBaseContentView

@property (retain, nonatomic) CJPayBytePayMethodView *payMethodTableView;
@property (retain, nonatomic) CJPayMarketingMsgView *marketingMsgView;
@property (retain, nonatomic) UILabel *orderDetailLabel;
@property (nonatomic) BOOL showAmountWithVoucher;
@property (retain, nonatomic) MASConstraint *amountViewTopConstraint;
@property (retain, nonatomic) MASConstraint *orderDetailLabelTopConstraint;

- (void)setTableViewDelegate:(id)a0;
- (void)p_updateHomeContentViewWithAmountVoucher:(BOOL)a0;
- (void)refreshPriceViewWithAmount:(id)a0 voucher:(id)a1;
- (void)refreshDataWithModels:(id)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (void)setupUI;

@end
