@class NSString, CJPayBDCreateOrderResponse, CJPayOrderConfirmResponse;

@interface CJPayVerifyItemQuckBindCardRecogFaceRetry : CJPayVerifyItemRecogFaceRetry

@property (copy, nonatomic) id /* block */ faceRecogCompletion;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *orderResponse;
@property (retain, nonatomic) CJPayOrderConfirmResponse *confirmResponse;
@property (copy, nonatomic) NSString *memberBizOrderNo;
@property (copy, nonatomic) id /* block */ loadingBlock;

- (void)event:(id)a0 params:(id)a1;
- (void)showLoading:(BOOL)a0;
- (id)checkTypeName;
- (id)getCreateOrderResponse;
- (void)startFaceRecogRetryWithResponse:(id)a0 completion:(id /* block */)a1;
- (void)submitFaceDataWithResponse:(id)a0 getTicketResponse:(id)a1 sdkData:(id)a2;
- (id)getSourceStr;
- (void)failRetryRecogFace;
- (void).cxx_destruct;

@end
