@class MMVoidI64Callback, NSString, MMVoidCallback, WCPayCheckNameView, MMVoidStringCallback, WCPayBizF2FConfirmViewController, MMTipsViewController;

@interface KindaTransferPayService : NSObject <WCPayBizF2FConfirmViewControllerDelegate, MMKTransferPayService>

@property (retain, nonatomic) NSString *m_checkUserNameStr;
@property (retain, nonatomic) WCPayCheckNameView *m_checkNameView;
@property (retain, nonatomic) MMTipsViewController *checkNameTipsView;
@property (retain, nonatomic) MMVoidCallback *m_checkSurNameCancelCallBack;
@property (retain, nonatomic) MMVoidStringCallback *m_checkSurNameSuccessCallBack;
@property (retain, nonatomic) MMVoidCallback *m_checkAmountCancelCallBack;
@property (retain, nonatomic) MMVoidI64Callback *m_checkAmountSuccessCallBack;
@property (retain, nonatomic) WCPayBizF2FConfirmViewController *m_amountConfirmViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopTransferCheckSurname;
- (void)stopTransferCheckAmount;
- (id)init;
- (void)startTransferCheckAmountImpl:(id)a0 cancel:(id)a1 confirm:(id)a2;
- (void)onWCPayBizF2FConfirmViewControllerBack;
- (void)onWCPayBizF2FConfirmViewControllerConfirm:(unsigned long long)a0 sign:(id)a1;
- (void)delloc;
- (void)startTransferCheckSurnameImpl:(id)a0 cancel:(id)a1 confirm:(id)a2;
- (void)checkNameDidChange:(id)a0;
- (void)cutString:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardDidHide:(id)a0;
- (void).cxx_destruct;

@end
