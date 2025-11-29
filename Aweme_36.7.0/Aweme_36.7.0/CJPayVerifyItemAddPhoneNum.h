@interface CJPayVerifyItemAddPhoneNum : CJPayVerifyItem

- (void)handleVerifyResponse:(id)a0;
- (void)requestVerifyWithCreateOrderResponse:(id)a0 event:(id)a1;
- (BOOL)shouldHandleVerifyResponse:(id)a0;
- (id)checkTypeName;
- (void)p_alertNeedAddPhoneNumWithConfirmResponse:(id)a0;
- (void)startAddPhoneNumWithConfirmResponse:(id)a0;
- (void)startLynxAddPhoneNumWithConfirmResponse:(id)a0;
- (void)startH5AddPhoneNumWithConfirmResponse:(id)a0;
- (void)p_callbackWithData:(id)a0;

@end
