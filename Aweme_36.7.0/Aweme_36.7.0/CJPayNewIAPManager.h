@class CJPayIAPRetainController, NSDictionary, CJPayIAPMonitor, NSString, CJPayIAPCustomConfigModel;

@interface CJPayNewIAPManager : NSObject <CJPayNewIAPServiceProtocol>

@property (retain, nonatomic) CJPayIAPMonitor *monitor;
@property (nonatomic) BOOL enableSK2;
@property (nonatomic) BOOL enableSK1Observer;
@property (nonatomic) double transactionVerifyTimeInterval;
@property (nonatomic) BOOL needPendingReturnFail;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (retain, nonatomic) id product;
@property (retain, nonatomic) CJPayIAPRetainController *retainController;
@property (copy, nonatomic) NSString *tradeNo;
@property (copy, nonatomic) NSString *lastTradeNo;
@property (retain, nonatomic) CJPayIAPCustomConfigModel *configModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)event:(id)a0 params:(id)a1;
- (void)sk1ConfirmWithCommonParams:(id)a0 bizContentParams:(id)a1 completion:(id /* block */)a2;
- (void)paymentQueue:(id)a0 shouldAddStorePayment:(id)a1 for:(id)a2;
- (void)monitorWithStage:(unsigned long long)a0 categoryDic:(id)a1 extralDic:(id)a2;
- (id)keyChainStringValueForkey:(id)a0;
- (void)didFinishProductOrder:(id)a0 isBackground:(BOOL)a1 resultType:(long long)a2 error:(id)a3;
- (void)sk2ConfirmWithCommonParams:(id)a0 bizContentParams:(id)a1 completion:(id /* block */)a2;
- (void)createTradeOrderWithAppID:(id)a0 params:(id)a1 exts:(id)a2 completion:(id /* block */)a3;
- (void)keyChainSafeSave:(id)a0 forkey:(id)a1;
- (void)offerCodeNotificationWithModel:(id)a0;
- (BOOL)isNeedPendingReturnFail;
- (void)restoreWithUid:(id)a0 callBack:(id /* block */)a1;
- (BOOL)isEnableSK1Observer;
- (BOOL)isEnableSK2;
- (void)startupService;
- (void)startIAPWithParams:(id)a0 product:(id)a1;
- (void)requestSK1ProductsWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)prefetchProductsWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (BOOL)isSupportNewIAP;
- (void)configIAPSettings;
- (void)disableIESStoreObserver;
- (void)p_didFinishProductOrder:(id)a0 isBackground:(BOOL)a1 resultType:(long long)a2 error:(id)a3;
- (BOOL)shouldUseNewIAP;
- (id)p_merchantKey;
- (void).cxx_destruct;
- (id)init;
- (void)presentCodeRedemptionSheet;

@end
