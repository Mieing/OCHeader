@class NSDictionary, CJPaySkipPwdConfirmHalfPageViewController;
@protocol CJPayBaseLoadingProtocol;

@interface CJPayVerifyItemSkipPwd : CJPayVerifyItem

@property (nonatomic) BOOL hideSelected;
@property (copy, nonatomic) NSDictionary *voucherSwell;
@property (weak, nonatomic) CJPaySkipPwdConfirmHalfPageViewController<CJPayBaseLoadingProtocol> *skipPwdHalfPageVC;

- (void)closeButtonClick;
- (void)confirmButtonClick;
- (id)checkType;
- (BOOL)p_lynxRetain:(id)a0;
- (void)requestVerifyWithCreateOrderResponse:(id)a0 event:(id)a1;
- (BOOL)shouldHandleVerifyResponse:(id)a0;
- (id)checkTypeName;
- (id)p_confirmModel:(id)a0;
- (BOOL)shouldShowRetainVC;
- (void)p_voucherSwell:(id)a0;
- (void)retainOtherVerifyWithWay:(id)a0;
- (void)p_startConfirmRequestWithExtraParams:(id)a0;
- (id)getFromSourceStr;
- (void)p_showlHalfPage:(id)a0;
- (void)onConfirmActionFromPage;
- (void)retainCloseButtonClick;
- (id)getOtherVerifyTypeTrack:(id)a0;
- (unsigned long long)getOtherVerifyType:(id)a0;
- (void)closeSkipPwdVC;
- (void).cxx_destruct;

@end
