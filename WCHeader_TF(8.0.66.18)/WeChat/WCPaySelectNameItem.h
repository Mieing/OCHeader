@class TenpaySecureCtrl, NSString, UILabel, WCPayTransferToBankCardCandidateView;

@interface WCPaySelectNameItem : WCBaseTextFieldItem <WCPayLogicMgrExt, UITextFieldDelegate, TenpaySecureCtrlDelegate> {
    UILabel *m_nameLabel;
    BOOL m_isUnselectable;
    NSString *m_value;
    TenpaySecureCtrl *m_secureTextField;
    WCPayTransferToBankCardCandidateView *m_candidateView;
    unsigned int m_nameLenLimit;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCandidateView:(id)a0;
- (id)initWithTitle:(id)a0 tip:(id)a1 key:(id)a2;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateView;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)setLengthLimit:(unsigned int)a0;
- (void)setReceiverName:(id)a0;
- (id)getTextValue;
- (id)getEncryptedValue;
- (void)OnGetTenpaySecureCtrlSalt:(id)a0 Date:(id)a1 Error:(id)a2;
- (BOOL)onError:(id)a0;
- (void)resignFirstResponder;
- (void).cxx_destruct;

@end
