@class CJPayFaceRecogConfigModel, NSString, CJPayGetTicketResponse, CJPayEvent;

@interface CJPayVerifyItemStandardForgetPwdRecogFace : CJPayVerifyItem

@property (nonatomic) BOOL isOpenVerifyType;
@property (copy, nonatomic) NSString *verifyTypeStr;
@property (retain, nonatomic) CJPayFaceRecogConfigModel *faceRecogConfigModel;
@property (retain, nonatomic) CJPayEvent *event;
@property (nonatomic) BOOL useStandardVerify;
@property (retain, nonatomic) CJPayGetTicketResponse *getTicketResponse;

- (void)requestVerifyWithCreateOrderResponse:(id)a0 event:(id)a1;
- (BOOL)shouldHandleVerifyResponse:(id)a0;
- (id)checkTypeName;
- (void)showLoading:(BOOL)a0 title:(id)a1;
- (void)failRecogFace;
- (id)p_getFaceRecogScene;
- (void)tryFaceRecogWithResponse:(id)a0;
- (id)getSourceStr;
- (void)pushWithVC:(id)a0;
- (BOOL)p_isFaceRecogDefault;
- (void)p_startDefaultFaceRecogPay;
- (void)p_unifyVerifyWithVerifyInfo:(id)a0 confirmResponse:(id)a1;
- (void)p_startBackupFaceRecogPayWithEvent:(id)a0;
- (void)submitFaceDataWithResponse:(id)a0 getTicketResponse:(id)a1 sdkData:(id)a2 verifyInfoResponse:(id)a3;
- (id)p_faceRecogTrackParams;
- (void)p_unifyVerifyLoading:(BOOL)a0;
- (void)p_switchVerifyTypeWithAction:(id)a0;
- (id)confirmRequestParamsWithResponse:(id)a0 getTicketResponse:(id)a1 sdkData:(id)a2 verifyInfoResponse:(id)a3;
- (void)p_handleStandardVerifyInfoResponse:(id)a0;
- (void)p_requestVerifyInfoWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)handleEvent:(id)a0;

@end
