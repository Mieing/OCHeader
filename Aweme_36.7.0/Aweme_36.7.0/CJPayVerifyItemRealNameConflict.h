@interface CJPayVerifyItemRealNameConflict : CJPayVerifyItem

- (void)handleVerifyResponse:(id)a0;
- (BOOL)shouldHandleVerifyResponse:(id)a0;
- (id)checkTypeName;
- (void)p_alertRealNameConflictWithUrl:(id)a0;
- (void)p_showPasswordVerifyKeyboard;
- (void)gotoWebViewWithUrl:(id)a0;

@end
