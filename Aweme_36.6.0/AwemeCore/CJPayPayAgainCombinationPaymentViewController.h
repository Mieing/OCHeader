@class NSString, NSArray, CJPayBytePayMethodView, CJPayPayAgainViewModel, CJPayCreateOrderResponse, CJPayCombinationPaymentAmountView, NSDictionary;
@protocol CJPayPayAgainCombineChoosePayMethodDelegate;

@interface CJPayPayAgainCombinationPaymentViewController : CJPayHalfPageBaseViewController <CJPayMethodTableViewDelegate, CJPayBaseLoadingProtocol>

@property (retain, nonatomic) CJPayCombinationPaymentAmountView *combinationPaymentAmountView;
@property (retain, nonatomic) CJPayBytePayMethodView *payMethodView;
@property (retain, nonatomic) CJPayCreateOrderResponse *response;
@property (retain, nonatomic) CJPayPayAgainViewModel *viewModel;
@property (copy, nonatomic) NSArray *subPayTypeInfoList;
@property (nonatomic) long long balanceAmount;
@property (nonatomic) long long incomeAmount;
@property (nonatomic) long long bankCardAmount;
@property (nonatomic) long long combinePayIndex;
@property (nonatomic) long long loadingType;
@property (copy, nonatomic) NSDictionary *commonTrackerParams;
@property (nonatomic) unsigned long long type;
@property (weak, nonatomic) id<CJPayPayAgainCombineChoosePayMethodDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSelectAtIndex:(int)a0;
- (void)p_trackWithEventName:(id)a0 params:(id)a1;
- (void)p_updateWithResponse:(id)a0;
- (id)p_buildPayMethodModels;
- (id)p_getShouldShowConfigs;
- (void)didSelectAtIndex:(int)a0 methodCell:(id)a1;
- (void)p_bindCardSuccess:(id)a0;
- (void)p_setupAmount;
- (void)p_setupConfig;
- (id)p_primaryCombineModelWithList:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)startLoading;
- (void)viewWillAppear:(BOOL)a0;
- (void)stopLoading;
- (void)viewDidLoad;
- (void)dealloc;
- (void)back;

@end
