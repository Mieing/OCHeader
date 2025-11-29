@class CJPayNotSufficientFundsView, NSString, CJPayLoadingButton, CJPayBDMethodTableView, BDChooseCardCommonModel, UIView;

@interface CJPayFrontCardListViewController : CJPayHalfPageBaseViewController <CJCJPayBDMethodTableViewDelegate>

@property (retain, nonatomic) CJPayNotSufficientFundsView *notSufficientFundsView;
@property (retain, nonatomic) CJPayBDMethodTableView *payMethodView;
@property (retain, nonatomic) BDChooseCardCommonModel *commonModel;
@property (nonatomic) BOOL showBottomAddCardBtn;
@property (retain, nonatomic) CJPayLoadingButton *bottomAddCardBtn;
@property (retain, nonatomic) UIView *bottomAddCardBtnBackView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showVCWithCommonModel:(id)a0;

- (void)didSelectAtIndex:(int)a0;
- (void)p_trackerWithEventName:(id)a0 params:(id)a1;
- (id)initWithCardCommonModel:(id)a0;
- (id)p_buildPayMethodModels;
- (void)p_updatePayMethodView;
- (void)p_tracker;
- (id)p_createAddBankCardBizModel;
- (void)p_bindCard:(id /* block */)a0;
- (void)p_modifySelectedModel:(id)a0;
- (void)bindCardClick;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)back;

@end
