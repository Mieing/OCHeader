@class CJPayGetTicketResponse, UIViewController;

@interface CJPayVerifyItemRecogFaceRetry : CJPayVerifyItem

@property (retain, nonatomic) CJPayGetTicketResponse *getTicketResponse;
@property (weak, nonatomic) UIViewController *referVC;

- (void)event:(id)a0 params:(id)a1;
- (void)showLoading:(BOOL)a0;
- (BOOL)p_lynxRetain:(id)a0;
- (void)requestVerifyWithCreateOrderResponse:(id)a0 event:(id)a1;
- (BOOL)shouldHandleVerifyResponse:(id)a0;
- (id)checkTypeName;
- (BOOL)shouldShowRetainVC;
- (id)p_topVC;
- (id)getCreateOrderResponse;
- (void)submitFaceDataWithResponse:(id)a0 getTicketResponse:(id)a1 sdkData:(id)a2;
- (id)getSourceStr;
- (void)alertNeedRetryFaceRecogWith:(id)a0;
- (void)failRetryRecogFace;
- (void)pushWithVC:(id)a0;
- (void)p_doFaceLivenessWith:(id)a0 getTicketResponse:(id)a1 baseParam:(id)a2;
- (void)p_doFacePlusLivenessWith:(id)a0 getTicketResponse:(id)a1;
- (void)p_showRetryFaceRecogAlertWithConfirmResponse:(id)a0 getTicketResponse:(id)a1;
- (id)wakeVerifySource;
- (void)p_startFaceRecogWithConfirmResponse:(id)a0 getTicketResponse:(id)a1;
- (void).cxx_destruct;

@end
