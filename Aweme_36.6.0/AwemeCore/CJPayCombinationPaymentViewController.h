@class CJPayDefaultChannelShowConfig, CJPayBytePayMethodView, CJPayIntegratedCashierProcessManager, NSArray, NSString, CJPayCreateOrderResponse, NSDictionary, CJPayStyleButton, UIViewController, CJPayCombinationPaymentAmountView, NSMutableArray;
@protocol CJPayMethodTableViewDelegate;

@interface CJPayCombinationPaymentViewController : CJPayHalfPageBaseViewController <CJPayMethodTableViewDelegate, CJPayBaseLoadingProtocol>

@property (retain, nonatomic) CJPayCombinationPaymentAmountView *combinationPaymentAmountView;
@property (retain, nonatomic) CJPayBytePayMethodView *payMethodView;
@property (retain, nonatomic) CJPayStyleButton *confirmPayBtn;
@property (retain, nonatomic) CJPayIntegratedCashierProcessManager *processManager;
@property (weak, nonatomic) UIViewController *homeVC;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *defaultConfig;
@property (retain, nonatomic) CJPayCreateOrderResponse *response;
@property (copy, nonatomic) NSArray *bizModels;
@property (nonatomic) long long balanceAmount;
@property (nonatomic) long long incomeAmount;
@property (nonatomic) long long bankCardAmount;
@property (nonatomic) long long loadingType;
@property (weak, nonatomic) id<CJPayMethodTableViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ payBlock;
@property (copy, nonatomic) NSDictionary *commonTrackerParams;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long combineType;
@property (nonatomic) BOOL showNotSufficientFundsHeaderLabel;
@property (retain, nonatomic) NSMutableArray *notSufficientFundsIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSelectAtIndex:(int)a0;
- (void)p_trackWithEventName:(id)a0 params:(id)a1;
- (void)showState:(long long)a0;
- (void)p_onConfirmPayAction;
- (void)updateSelectConfig:(id)a0;
- (void)notifyNotsufficient:(id)a0;
- (void)p_updateWithResponse:(id)a0;
- (id)p_buildPayMethodModels;
- (void)p_updatePayMethodView;
- (void)p_reloadCurrentView;
- (id)getShouldShowConfigs;
- (id)initWithOrderResponse:(id)a0 defaultConfig:(id)a1 processManager:(id)a2 type:(unsigned long long)a3;
- (void)p_bindCardSuccess:(id)a0;
- (void)p_setupAmount;
- (id)p_curSelectConfig;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)startLoading;
- (void)viewWillAppear:(BOOL)a0;
- (void)stopLoading;
- (void)viewDidLoad;
- (void)dealloc;
- (void)back;

@end
