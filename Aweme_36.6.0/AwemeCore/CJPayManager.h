@class CJPayHalfPageBaseViewController, NSString, CJPayNavigationController, CJPayNameModel, CJPayAggregateCallClientStyleViewController;
@protocol CJPayManagerDelegate, CJPayAPIDelegate;

@interface CJPayManager : NSObject <CJBizWebDelegate, CJPayCashierModule, CJPayManagerAdapterDelegate>

@property (copy, nonatomic) NSString *host;
@property (retain, nonatomic) CJPayNameModel *nameModel;
@property (retain, nonatomic) id<CJPayAPIDelegate> apiDelegate;
@property (retain, nonatomic) CJPayAggregateCallClientStyleViewController *styleVC;
@property (weak, nonatomic) id<CJPayManagerDelegate> cj_delegate;
@property (retain, nonatomic) CJPayHalfPageBaseViewController *deskVC;
@property (weak, nonatomic) CJPayNavigationController *byteNavVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)defaultService;

- (void)closePage;
- (void)needLogin:(id /* block */)a0;
- (BOOL)wakeByUniversalPayDesk:(id)a0 withDelegate:(id)a1;
- (BOOL)isSupportPayCallBackURL:(id)a0;
- (void)i_setupTitlesModel:(id)a0;
- (void)i_openPayDeskWithConfig:(id)a0 params:(id)a1 delegate:(id)a2;
- (void)i_openDYPayBizDeskWithDeskModel:(id)a0 delegate:(id)a1;
- (void)downgradeDeskVCWithParams:(id)a0 completion:(id /* block */)a1;
- (BOOL)p_isDefaultShowLoading;
- (void)p_presentVCFrom:(id)a0 navVC:(id)a1;
- (void)callPayDesk:(BOOL)a0;
- (void)p_configCashRegisterVC:(id)a0 bizUrl:(id)a1 response:(id)a2;
- (void)p_handleErrorResponse:(id)a0;
- (void)_openDeskWithConfig:(id)a0 bizParams:(id)a1 bizUrl:(id)a2 delegate:(id)a3;
- (void)_openDeskWith:(id)a0 bizUrl:(id)a1 delegate:(id)a2;
- (void)openPayDeskWithConfig:(id)a0 bizParams:(id)a1 delegate:(id)a2;
- (id)p_deskVCWithBizParams:(id)a0 bizUrl:(id)a1 response:(id)a2;
- (void)handleCJPayManagerResult:(id)a0 orderStatus:(unsigned long long)a1;
- (void)closePayDeskWithCompletion:(id /* block */)a0;
- (void)handleCJPayManagerResult:(id)a0 orderStatus:(unsigned long long)a1 extraDict:(id)a2;
- (void)setupTitlesModel:(id)a0;
- (void)closePayDesk;
- (void)openPayDeskWithUrl:(id)a0 delegate:(id)a1;
- (void)openPayDeskWith:(id)a0 delegate:(id)a1;
- (void)openWebView:(id)a0 params:(id)a1 closeCallBack:(id /* block */)a2;
- (void)registerOffline:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
