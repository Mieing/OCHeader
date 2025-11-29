@class CJPayGetTicketResponse, UIViewController, CJPayFaceRecogConfigModel;

@interface CJPayVerifyItemStandardRecogFace : CJPayVerifyItem

@property (retain, nonatomic) CJPayFaceRecogConfigModel *faceRecogConfigModel;
@property (retain, nonatomic) CJPayGetTicketResponse *getTicketResponse;
@property (weak, nonatomic) UIViewController *referVC;

- (void)event:(id)a0 params:(id)a1;
- (void)showLoading:(BOOL)a0;
- (void)handleVerifyResponse:(id)a0;
- (void)requestVerifyWithCreateOrderResponse:(id)a0 event:(id)a1;
- (BOOL)shouldHandleVerifyResponse:(id)a0;
- (id)checkTypeName;
- (id)p_topVC;
- (void)failRecogFace;
- (void)tryFaceRecogWithResponse:(id)a0;
- (id)getCreateOrderResponse;
- (id)getSourceStr;
- (void)pushWithVC:(id)a0;
- (void)submitFaceDataWithResponse:(id)a0 resultModel:(id)a1;
- (id)confirmRequestParasmWithResponse:(id)a0 resultModel:(id)a1;
- (void).cxx_destruct;

@end
