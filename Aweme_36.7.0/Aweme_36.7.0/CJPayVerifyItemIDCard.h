@class CJPayFullPageBaseViewController;
@protocol CJPayVerifyIDVCProtocol;

@interface CJPayVerifyItemIDCard : CJPayVerifyItem

@property (retain, nonatomic) CJPayFullPageBaseViewController<CJPayVerifyIDVCProtocol> *currentVerifyVC;

- (void)handleVerifyResponse:(id)a0;
- (void)requestVerifyWithCreateOrderResponse:(id)a0 event:(id)a1;
- (BOOL)shouldHandleVerifyResponse:(id)a0;
- (id)checkTypeName;
- (void)_requestVerifyVC;
- (id)createVerifyVC;
- (void)p_verifyIDCardWith:(id)a0;
- (void).cxx_destruct;

@end
