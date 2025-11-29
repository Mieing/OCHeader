@class CJPayMemVerifyManager;

@interface CJPayMemVerifyItem : NSObject

@property (weak, nonatomic) CJPayMemVerifyManager *verifyManager;

- (void)verifyWithParams:(id)a0 fromVC:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
