@class CJPayHalfVerifyCVVViewController, NSDictionary;

@interface CJPayVerifyItemCVV : CJPayVerifyItem

@property (weak, nonatomic) CJPayHalfVerifyCVVViewController *cvvViewController;
@property (copy, nonatomic) NSDictionary *lastVerifyParams;

- (id)checkType;
- (void)handleVerifyResponse:(id)a0;
- (id)getLatestCacheData;
- (void)requestVerifyWithCreateOrderResponse:(id)a0 event:(id)a1;
- (BOOL)shouldHandleVerifyResponse:(id)a0;
- (id)checkTypeName;
- (void)requestVerifyWithCreateOrderResponse:(id)a0;
- (void).cxx_destruct;

@end
