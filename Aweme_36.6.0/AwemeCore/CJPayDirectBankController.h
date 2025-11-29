@class CJPayNavigationController, CJPayFaceRecogConfigModel;

@interface CJPayDirectBankController : NSObject

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) CJPayNavigationController *navigationController;
@property (retain, nonatomic) CJPayFaceRecogConfigModel *faceRecogConfigModel;
@property (copy, nonatomic) id /* block */ customLoadingBlock;

- (void)event:(id)a0 params:(id)a1;
- (void)p_buildFaceRecogConfigModelWithDirectBankModel:(id)a0;
- (void)p_directBankPayWithDirectBankModel:(id)a0;
- (void)p_push:(id)a0 animated:(BOOL)a1;
- (void)p_startLoadingWithTitle:(id)a0;
- (void)p_verifyFaceDataWithResultModel:(id)a0 directBankModel:(id)a1;
- (void)p_callbackWithResult:(long long)a0;
- (void)p_openDirectBankPayLynxPageWithSchema:(id)a0 directBankModel:(id)a1;
- (void)p_trackPushParams:(id)a0;
- (void)startPaymentWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;

@end
