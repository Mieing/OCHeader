@class CJPayGetTicketResponse, NSString, UIViewController;

@interface CJPayVerifyItemRecogFace : CJPayVerifyItem

@property (retain, nonatomic) CJPayGetTicketResponse *getTicketResponse;
@property (copy, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) UIViewController *referVC;
@property (copy, nonatomic) id /* block */ getTicketLoadingBlock;

+ (void)getTicketWithResponse:(id)a0 createOrderResponse:(id)a1 source:(id)a2 fromVC:(id)a3 completion:(id /* block */)a4;

- (void)event:(id)a0 params:(id)a1;
- (void)showLoading:(BOOL)a0;
- (BOOL)p_lynxRetain:(id)a0;
- (void)requestVerifyWithCreateOrderResponse:(id)a0 event:(id)a1;
- (BOOL)shouldHandleVerifyResponse:(id)a0;
- (id)checkTypeName;
- (BOOL)shouldShowRetainVC;
- (id)p_topVC;
- (void)failRecogFace;
- (void)tryFaceRecogWithResponse:(id)a0;
- (void)alertNeedFaceRecogWith:(id)a0 getTicketResponse:(id)a1;
- (id)createFaceRecognitionModelOfAlert:(id)a0 withGetTicketResponse:(id)a1;
- (id)getCreateOrderResponse;
- (void)startSignFaceRecogProtocolWith:(id)a0 getTicketResponse:(id)a1;
- (void)submitFaceDataWithResponse:(id)a0 getTicketResponse:(id)a1 sdkData:(id)a2;
- (id)getSourceStr;
- (void)startFaceRecogWith:(id)a0 getTicketResponse:(id)a1;
- (id)confirmRequestParasmWithResponse:(id)a0 getTicketResponse:(id)a1 sdkData:(id)a2;
- (id)createFaceRecognitionModelOfFullPage:(id)a0 withGetTicketResponse:(id)a1;
- (void)pushWithVC:(id)a0;
- (void)p_doFaceLivenessWith:(id)a0 getTicketResponse:(id)a1 baseParam:(id)a2;
- (void)p_doFacePlusLivenessWith:(id)a0 getTicketResponse:(id)a1;
- (void).cxx_destruct;
- (void)receiveEvent:(id)a0;

@end
