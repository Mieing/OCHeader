@class NSString, CJPayNavigationController, CJPayFaceRecogConfigModel;

@interface CJPayPublicTransferPayController : NSObject <CJPayBaseLoadingProtocol>

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) CJPayNavigationController *navigationController;
@property (retain, nonatomic) CJPayFaceRecogConfigModel *faceRecogConfigModel;
@property (copy, nonatomic) id /* block */ customLoadingBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)event:(id)a0 params:(id)a1;
- (void)p_push:(id)a0 animated:(BOOL)a1;
- (void)p_startLoadingWithTitle:(id)a0;
- (void)p_callbackWithResult:(long long)a0;
- (void)p_trackPushParams:(id)a0;
- (void)p_bindCardWithTransferModel:(id)a0 params:(id)a1;
- (void)p_openAccountWithTransferModel:(id)a0 params:(id)a1;
- (void)p_transferPayWithTransferModel:(id)a0;
- (void)p_queryFaceDataAndTransferPayWithTransferModel:(id)a0;
- (void)p_openBigPayLynxPageWithSchema:(id)a0 transferModel:(id)a1;
- (void)p_verifyFaceDataWithResultModel:(id)a0 transferModel:(id)a1;
- (void)startPublicPaymentWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;

@end
