@class NSDictionary, NSString, AWEIAPStoreManager;

@interface AWEDouPlusSupportService : HTSService <AWEIAPStoreManagerDelegate, AWEDouPlusSupportService>

@property (retain, nonatomic) AWEIAPStoreManager *iapStoreManager;
@property (retain, nonatomic) NSDictionary *bizParams;
@property (retain, nonatomic) NSDictionary *logParams;
@property (nonatomic) long long sceneType;
@property (retain, nonatomic) NSString *valueString;
@property (nonatomic) double startPayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)monitorDouPlusTorchWithType:(long long)a0 isSuccess:(BOOL)a1 params:(id)a2;
+ (void)monitorDouPlusLiveShowWithURLString:(id)a0 webViewError:(id)a1;
+ (BOOL)openSpecialPayDeskWithOriginUrl:(id)a0;
+ (void)queryDouPlusOrderWithParams:(id)a0 remainCount:(long long)a1 completion:(id /* block */)a2;
+ (void)queryDouPlusTorchOrderWithParams:(id)a0 remainCount:(long long)a1 completion:(id /* block */)a2;
+ (void)handleDouOrderResult:(BOOL)a0;
+ (void)handleDouOrderResult:(BOOL)a0 hostingParam:(id)a1;
+ (void)handleDouOrderResultWithParams:(id)a0;
+ (void)tryPreLoadDouPlusIAPProducts;
+ (void)monitorDouPlusLiveWithSuccess:(BOOL)a0 isRecharge:(BOOL)a1 params:(id)a2;
+ (long long)sceneTypeWithType:(id)a0;
+ (void)closeTopDouPlusWebVCsAnimated:(BOOL)a0 completion:(id /* block */)a1;
+ (id)getDouPlusWebViewController:(id)a0 targetClass:(Class)a1;
+ (BOOL)canOpenSpecialPayDeskWithOriginUrl:(id)a0;
+ (void)triggerPreloadIAPProductsWithIDList:(id)a0;
+ (BOOL)adapter_isShowCashdesk:(id)a0;

- (void)startupSupportService;
- (void)startIAPWithParams:(id)a0 logParams:(id)a1 sceneType:(long long)a2 dpbNum:(id)a3;
- (void)monitorWithPaySuccess:(BOOL)a0 errorStatus:(long long)a1 errorMessage:(id)a2;
- (void)didFinishProduct:(id)a0 resultType:(long long)a1 error:(id)a2;
- (id)moneyStringInBizParams;
- (id)commomReportParams;
- (void)didFinishInLiveProduct:(id)a0 resultType:(long long)a1 error:(id)a2;
- (void)didFinishInFeedProduct:(id)a0 resultType:(long long)a1 error:(id)a2;
- (void)postInfoAndMonitorWithProduct:(id)a0 resultType:(long long)a1 error:(id)a2;
- (void).cxx_destruct;

@end
