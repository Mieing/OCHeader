@class NSString;

@interface CJPayVerifyItemForgetPwdRecogFace : CJPayVerifyItemRecogFace

@property (nonatomic) BOOL isOpenVerifyType;
@property (copy, nonatomic) NSString *verifyTypeStr;

- (void)requestVerifyWithCreateOrderResponse:(id)a0 event:(id)a1;
- (BOOL)shouldHandleVerifyResponse:(id)a0;
- (void)p_setupBlock;
- (void)failRecogFace;
- (id)p_getFaceRecogScene;
- (void)alertNeedFaceRecogWith:(id)a0 getTicketResponse:(id)a1;
- (id)p_findTopHalfViewController;
- (id)confirmRequestParasmWithResponse:(id)a0 getTicketResponse:(id)a1 sdkData:(id)a2;
- (void)p_dismissPopUpViewControllerWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)receiveEvent:(id)a0;
- (id)init;

@end
