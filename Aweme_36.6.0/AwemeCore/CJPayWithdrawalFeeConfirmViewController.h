@class CJPayWithdrawalFeeConfirmMainView, CJPayStyleButton, CJPayButton, CJPayFeeQueryResponse;
@protocol CJPayTrackerProtocol;

@interface CJPayWithdrawalFeeConfirmViewController : CJPayPopUpBaseViewController

@property (retain, nonatomic) CJPayButton *closeButton;
@property (retain, nonatomic) CJPayStyleButton *confirmButton;
@property (retain, nonatomic) CJPayWithdrawalFeeConfirmMainView *mainView;
@property (retain, nonatomic) CJPayFeeQueryResponse *response;
@property (nonatomic) long long balanceAmount;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (weak, nonatomic) id<CJPayTrackerProtocol> trackDelegate;

- (void)p_close;
- (void)p_trackWithEvent:(id)a0 param:(id)a1;
- (void)p_confirm;
- (id)initWithFeeQueryResponse:(id)a0 balanceAmount:(long long)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
