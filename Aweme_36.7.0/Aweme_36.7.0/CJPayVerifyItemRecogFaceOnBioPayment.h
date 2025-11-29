@class CJPayBioPaymentBaseRequestModel, CJPayBDCreateOrderResponse, CJPayOrderConfirmResponse;

@interface CJPayVerifyItemRecogFaceOnBioPayment : CJPayVerifyItemRecogFace

@property (retain, nonatomic) CJPayBDCreateOrderResponse *orderResponse;
@property (retain, nonatomic) CJPayOrderConfirmResponse *confirmResponse;
@property (retain, nonatomic) CJPayBioPaymentBaseRequestModel *requestModel;
@property (copy, nonatomic) id /* block */ faceRecogCompletion;
@property (nonatomic) long long failBefore;

- (void)tryFaceRecogWithResponse:(id)a0 requestModel:(id)a1;
- (BOOL)shouldShowRetainVC;
- (id)p_topVC;
- (void)failRecogFace;
- (void)submitFaceDataWithResponse:(id)a0 getTicketResponse:(id)a1 sdkData:(id)a2;
- (id)p_findTopHalfViewController;
- (id)createFaceRecognitionModelOfFullPage:(id)a0 withGetTicketResponse:(id)a1;
- (void)p_alertNeedFaceRecogWith:(id)a0 getTicketResponse:(id)a1;
- (void)p_alertNeedRetryFaceRecog;
- (void)p_showRetryFaceRecogAlertWithConfirmResponse:(id)a0 getTicketResponse:(id)a1;
- (void).cxx_destruct;

@end
