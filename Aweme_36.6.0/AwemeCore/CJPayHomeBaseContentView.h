@class CJPayCreateOrderResponse, CJPayStyleButton, NSString, CJPayCounterLabel, UILabel, UIView;
@protocol CJPayHomeContentViewDelegate, CJPayMethodTableViewDelegate;

@interface CJPayHomeBaseContentView : UIView <CJPayBaseLoadingProtocol>

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) CJPayCounterLabel *payAmountLabel;
@property (retain, nonatomic) UILabel *unitLabel;
@property (retain, nonatomic) UILabel *payAmountDiscountLabel;
@property (retain, nonatomic) UILabel *tradeNameLabel;
@property (retain, nonatomic) CJPayStyleButton *confirmPayBtn;
@property (retain, nonatomic) CJPayCreateOrderResponse *response;
@property (weak, nonatomic) id<CJPayMethodTableViewDelegate> tableViewDelegate;
@property (weak, nonatomic) id<CJPayHomeContentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_onConfirmPayAction;
- (void)refreshDataWithModels:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 createOrderResponse:(id)a1;
- (void)updateAmount:(long long)a0 from:(long long)a1;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (void)setupUI;

@end
