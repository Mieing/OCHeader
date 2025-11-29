@class NSMutableDictionary, CJPayUnifyRiskControlReVerifyManager, CJPayUnifyCashDeskReVerifyManager, CJPayUnifyPayProcessModel, NSString;
@protocol CJPayUnifyPayProcessRequestProtocol;

@interface CJPayUnifyPayProcessController : NSObject <CJPayDeskRouteDelegate>

@property (retain, nonatomic) CJPayUnifyPayProcessModel *processModel;
@property (retain, nonatomic) CJPayUnifyRiskControlReVerifyManager *riskControlReVerifyManager;
@property (retain, nonatomic) CJPayUnifyCashDeskReVerifyManager *cashDeskReVerifyManager;
@property (retain, nonatomic) NSMutableDictionary *dyPayTradeConfirmParams;
@property (copy, nonatomic) id /* block */ confirmCompletionBlock;
@property (copy, nonatomic) id /* block */ processCompletionBlock;
@property (retain, nonatomic) id<CJPayUnifyPayProcessRequestProtocol> requestAdapter;
@property (nonatomic) long long cashierProcessStatus;
@property (copy, nonatomic) id /* block */ trackBlock;
@property (copy, nonatomic) id /* block */ btmTrackerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_stopLoading;
- (void)p_startLoading;
- (void)p_showGuidePageWithResponse:(id)a0;
- (void)p_tryShowResultPageWithResponse:(id)a0;
- (void)p_showFEGuidePageWithResponse:(id)a0 completion:(id /* block */)a1;
- (void)routeToVC:(id)a0 animated:(BOOL)a1;
- (void)exitVCWithCallbackId:(id)a0;
- (long long)currentEvokeCallBackCode;
- (void)p_resultPageNative:(id)a0;
- (void)p_submitConfirmRequest;
- (void)unifyPayProcessWithModel:(id)a0 confirmCompletion:(id /* block */)a1 processCompletion:(id /* block */)a2;
- (void)p_handleConfirmResult:(id)a0;
- (id)p_createResultModelWithResult:(unsigned long long)a0 withResponse:(id)a1;
- (void)p_completeUnifyProcess:(id)a0;
- (void)p_queryOrderResult:(long long)a0 withBdProcessInfoDict:(id)a1 backToForeground:(BOOL)a2;
- (void)p_handleConfirmResponse:(id)a0;
- (void)p_handleRiskControlVerifyResult:(id)a0 withResponse:(id)a1;
- (void)p_sendRequestToEnableBioPaymentWithResponse:(id)a0 processInfoDict:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
