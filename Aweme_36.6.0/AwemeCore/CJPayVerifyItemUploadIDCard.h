@class CJPayHalfPageBaseViewController;

@interface CJPayVerifyItemUploadIDCard : CJPayVerifyItem

@property (weak, nonatomic) CJPayHalfPageBaseViewController *currentLoadingVC;

- (void)handleVerifyResponse:(id)a0;
- (void)startUploadIDCardWithConfirmResponse:(id)a0;
- (void)requestVerifyWithCreateOrderResponse:(id)a0 event:(id)a1;
- (BOOL)shouldHandleVerifyResponse:(id)a0;
- (id)checkTypeName;
- (void)p_alertNeedUploadIDCardWithConfirmResponse:(id)a0;
- (void)handleWebCloseCallBackWithData:(id)a0;
- (void).cxx_destruct;

@end
