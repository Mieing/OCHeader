@class CJPayDyPayProcessConfigModel, NSString, CJPayDyPayLoginManager, CJPayNavigationController, CJPayBaseViewController;
@protocol CJPayCashierEvokeHomePageProtocol;

@interface CJPayDyPayProcessController : NSObject <CJPayCashierEvokeHomePageProtocol>

@property (retain, nonatomic) CJPayDyPayProcessConfigModel *configModel;
@property (copy, nonatomic) id /* block */ processCompletionBlock;
@property (retain, nonatomic) CJPayNavigationController *navController;
@property (retain, nonatomic) CJPayDyPayLoginManager *payLoginManager;
@property (retain, nonatomic) CJPayBaseViewController *homePageVC;
@property (nonatomic) BOOL needLoading;
@property (weak, nonatomic) id<CJPayCashierEvokeHomePageProtocol> evokeHomePageVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_trackBTMCustom:(id)a0 params:(id)a1;
- (id)evokeNaviController;
- (long long)evokeCallbackCode;
- (void)startDyPayProcessWithConfigModel:(id)a0 existingResponse:(id)a1 completion:(id /* block */)a2;
- (void)startDyPayProcessWithConfigModel:(id)a0 completion:(id /* block */)a1;
- (void)p_logError:(id)a0 extParams:(id)a1;
- (void)p_checkDyPayNeedLogin;
- (void)p_checkDyPayParamsValid:(id /* block */)a0;
- (void)p_trackWithEvent:(id)a0 extraParams:(id)a1;
- (void)p_startSignProcessWithResponse:(id)a0;
- (void)p_startCreditServiceWithResponse:(id)a0;
- (void)p_startDyPayCommonPayWithResponse:(id)a0;
- (void)p_alertUpdateApp:(id)a0;
- (BOOL)p_isFreeLoginPayScene;
- (void)p_openLoginPage;
- (void)p_startDyPayProcessNeedLoading:(BOOL)a0;
- (void)p_pushVC:(id)a0 needAnimation:(BOOL)a1 completion:(id /* block */)a2;
- (void)p_backAndCompletion:(id)a0 scene:(long long)a1 errorCode:(long long)a2 errorMsg:(id)a3;
- (void)p_startSignProcess;
- (void)p_startCreditServiceProcess;
- (void)p_startDyPayCommonPayProcess;
- (void)p_handleExceptionWithError:(id)a0 response:(id)a1 retryBlock:(id /* block */)a2;
- (void)p_updateConfigModelTrackerExtParams:(id)a0;
- (void)p_startUnifyPayWithResponse:(id)a0;
- (void)p_startNewFullScreenOuterPayWithResponse:(id)a0;
- (long long)p_convertToErrorCodeWithOrderStatus:(unsigned long long)a0;
- (id)p_fullHomePageVCWithResponse:(id)a0;
- (void)p_openErrorBgVC:(id /* block */)a0;
- (BOOL)p_isUseUIModalPresentationFullScreen;
- (void)p_updateConfigModelRequestExtParams:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
