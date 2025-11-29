@class CJPayRetainInfoModel, CJPayStyleButton, CJPayButton, CJPayRetainVoucherListView, UILabel;

@interface CJPayPayCancelRetainViewController : CJPayPopUpBaseViewController

@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CJPayStyleButton *topButton;
@property (retain, nonatomic) CJPayButton *closeButton;
@property (retain, nonatomic) CJPayButton *bottomButton;
@property (retain, nonatomic) CJPayRetainVoucherListView *retainVoucherView;
@property (retain, nonatomic) CJPayRetainInfoModel *retainInfoModel;
@property (nonatomic) BOOL isDescTextAlignmentLeft;

- (void)p_closeButtonTapped;
- (id)initWithRetainInfoModel:(id)a0;
- (id)p_stringSeparatedWithDollar:(id)a0;
- (void)p_bottomButtonTapped;
- (void)p_topButtonTapped;
- (void)p_setupUIForOtherVerify;
- (void)p_initTitleLabelStyle:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
