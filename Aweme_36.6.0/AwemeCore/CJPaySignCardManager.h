@class UIViewController, CJPaySignCardModel, CJPayHalfVerifySMSViewController;

@interface CJPaySignCardManager : NSObject

@property (retain, nonatomic) CJPaySignCardModel *model;
@property (retain, nonatomic) CJPayHalfVerifySMSViewController *verifySMSVC;
@property (retain, nonatomic) UIViewController *signCardPage;
@property (copy, nonatomic) id /* block */ completeBlock;

- (void)event:(id)a0 params:(id)a1;
- (void)p_stopLoading;
- (void)p_startLoading;
- (void)p_trackWithEventName:(id)a0 params:(id)a1;
- (void)signCardWithModel:(id)a0 withCompletion:(id /* block */)a1;
- (void)routeToVC:(id)a0 animated:(BOOL)a1;
- (void)routeToVCSingleTop:(id)a0 animated:(BOOL)a1;
- (void)exitVCWithCallbackId:(id)a0;
- (void)p_pushVC:(id)a0;
- (void)p_push:(id)a0 animated:(BOOL)a1;
- (void)p_signCardWithLynxSchema:(id)a0 withCompletion:(id /* block */)a1;
- (void)p_handleCardSignResponse:(id)a0;
- (void)p_callBackWithResultCode:(unsigned long long)a0 params:(id)a1;
- (void)p_requestVerifyWithBDPayCardSignResponse:(id)a0 isBaseVerify:(BOOL)a1;
- (id)p_createUpdateViewControllerWithResponse:(id)a0;
- (void)p_handleCardSignLynxCallBackResponse:(id)a0;
- (void)p_defaultExitVCWithCallbackId:(id)a0;
- (void)p_popViewController:(id /* block */)a0 animated:(BOOL)a1;
- (void)p_closeCardUpdateVCWithVC:(id)a0 completion:(id /* block */)a1;
- (id)p_buildCreateResponse;
- (void).cxx_destruct;

@end
