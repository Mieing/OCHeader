@class NSString, CJPayBizWebViewController;

@interface CJH5PayDeskManager : NSObject <CJPayH5DeskModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) CJPayBizWebViewController *h5CashDeskVC;

+ (void)registerComponents;
+ (id)defaultService;

- (void)openH5CashDeskWithOrderInfo:(id)a0 merchantId:(id)a1 appId:(id)a2 cashDeskStyle:(long long)a3 completion:(id /* block */)a4;
- (void)preloadPayChannelInfoWithAppId:(id)a0 merchantId:(id)a1 userId:(id)a2 exts:(id)a3;
- (void)p_reportMonitorWithParams:(id)a0 URL:(id)a1 merchantId:(id)a2 appId:(id)a3 type:(id)a4;
- (id)_prepareCallParam:(long long)a0 orderInfoDic:(id)a1;
- (id)buildWebBizVC:(long long)a0 finalUrl:(id)a1 completion:(id /* block */)a2;
- (void)openH5CashDeskWithURL:(id)a0 orderInfoDic:(id)a1 merchantId:(id)a2 appId:(id)a3 cashDeskStyle:(long long)a4 completion:(id /* block */)a5;
- (BOOL)isSupportPayCallBackURL:(id)a0;
- (void)registerPayRefer:(id)a0;
- (void)closeH5PayDesk;
- (void)i_openH5PayDesk:(id)a0 withDelegate:(id)a1;
- (void)i_openH5PayDesk:(id)a0 deskStyle:(long long)a1 withDelegate:(id)a2;
- (void)i_openH5PayManagerWithAppId:(id)a0 merchantId:(id)a1;
- (void)i_openH5TradeRecordWithAppId:(id)a0 merchantId:(id)a1;
- (void)i_openH5BalanceWithdrawDeskWithParams:(id)a0 delegate:(id)a1;
- (void)i_openH5BDPayDesk:(id)a0 withDelegate:(id)a1;
- (void)i_openH5SetPasswordDeskWithParams:(id)a0 withDelegate:(id)a1;
- (void)p_processCallback:(long long)a0 resultParam:(id)a1 apiDelegate:(id)a2;
- (void)p_openBDH5PayDeskWithParams:(id)a0 openDeskBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (id)p_buildWebBizVCWithFinalUrl:(id)a0 completion:(id /* block */)a1;
- (void)openH5SetPasswordDeskWithParams:(id)a0 callBack:(id /* block */)a1;
- (id)p_dealChannelOrderInfo:(id)a0;
- (id)p_getUrl:(id)a0;
- (void)i_openH5BankCardListWithMerchantId:(id)a0 appId:(id)a1 userId:(id)a2;
- (void)preloadPayChannelInfoWithAppId:(id)a0 merchantId:(id)a1 userId:(id)a2;
- (void).cxx_destruct;

@end
