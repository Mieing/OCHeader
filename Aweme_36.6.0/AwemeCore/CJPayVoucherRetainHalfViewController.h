@class CJPayVoucherRetainInfoModel, CJPayOutRetainVoucherListView, UIImageView, CJPayButton, CJPayStyleButton, UIScrollView, CJPayAccountInsuranceTipView;
@protocol CJPayTrackerProtocol;

@interface CJPayVoucherRetainHalfViewController : CJPayHalfPageBaseViewController

@property (retain, nonatomic) UIImageView *headerImgView;
@property (retain, nonatomic) CJPayOutRetainVoucherListView *voucherContentView;
@property (retain, nonatomic) CJPayButton *leftCancelButton;
@property (retain, nonatomic) CJPayStyleButton *rightConfirmButton;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) CJPayStyleButton *bottomConfirmButton;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (retain, nonatomic) CJPayVoucherRetainInfoModel *voucherRetainInfoModel;
@property (copy, nonatomic) id /* block */ continuePayBlock;
@property (copy, nonatomic) id /* block */ cancelPayBlock;
@property (weak, nonatomic) id<CJPayTrackerProtocol> trackDelegate;

- (void)p_trackEvent:(id)a0 params:(id)a1;
- (void)p_onConfirmAction;
- (double)stackViewHeight;
- (void)p_setupVoucherContentView;
- (void)p_updateVoucherView;
- (void)p_onCancelAction;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (double)containerHeight;
- (void)back;

@end
