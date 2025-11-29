@class CJPayBDCreateOrderResponse, NSString, CJPayOrderConfirmResponse, CJPayVerifyItemQuckBindCardRecogFaceRetry;

@interface CJPayVerifyItemBindCardRecogFace : CJPayVerifyItemRecogFace

@property (retain, nonatomic) CJPayBDCreateOrderResponse *orderResponse;
@property (retain, nonatomic) CJPayOrderConfirmResponse *confirmResponse;
@property (retain, nonatomic) CJPayVerifyItemQuckBindCardRecogFaceRetry *retryVerifyItem;
@property (copy, nonatomic) NSString *memberBizOrderNo;
@property (copy, nonatomic) id /* block */ faceRecogCompletion;
@property (copy, nonatomic) NSString *bindCardSource;
@property (nonatomic) BOOL shouldShowProtocolView;
@property (copy, nonatomic) id /* block */ loadingBlock;

- (void)event:(id)a0 params:(id)a1;
- (void)showLoading:(BOOL)a0;
- (id)checkTypeName;
- (void)failRecogFace;
- (void)startFaceRecogWithParams:(id)a0 faceVerifyInfo:(id)a1 completion:(id /* block */)a2;
- (void)p_updateWithOneKeyResponse:(id)a0;
- (id)createFaceRecognitionModelOfAlert:(id)a0 withGetTicketResponse:(id)a1;
- (id)getCreateOrderResponse;
- (void)startFaceRecogWithOneKeyResponse:(id)a0 completion:(id /* block */)a1;
- (void)startSignFaceRecogProtocolWith:(id)a0 getTicketResponse:(id)a1;
- (void)submitFaceDataWithResponse:(id)a0 getTicketResponse:(id)a1 sdkData:(id)a2;
- (id)getSourceStr;
- (void).cxx_destruct;

@end
