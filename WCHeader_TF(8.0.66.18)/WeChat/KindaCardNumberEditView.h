@class NSString, WCPayTenpaySecureCtrlItem, MMKCardNumberEditViewOnTextChangedCallback, MMKCardNumberEditViewOnTextEndEditingCallback, MMDynamicColor;

@interface KindaCardNumberEditView : KindaView <UITextFieldDelegate, WCBaseInfoItemDelegate, MMKCardNumberEditView> {
    MMKCardNumberEditViewOnTextChangedCallback *m_callback;
    MMKCardNumberEditViewOnTextEndEditingCallback *m_endEditingCallback;
}

@property (retain, nonatomic) WCPayTenpaySecureCtrlItem *m_textFieldItem;
@property (nonatomic) BOOL m_bFocus;
@property (retain, nonatomic) MMDynamicColor *m_hintColor;
@property (retain, nonatomic) MMDynamicColor *m_textColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)getView;
- (id)getValue;
- (void)setFocus:(BOOL)a0;
- (BOOL)getFocus;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)setOnTextChangedCallback:(id)a0;
- (void)setOnTextEndEditingCallback:(id)a0;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)WCBaseInfoItemEndEdit:(id)a0;
- (BOOL)isBankCardNumber;
- (id)getHint;
- (void)setHint:(id)a0;
- (void)setHintColor:(id)a0;
- (id)getHintColor;
- (void)setTextColor:(id)a0;
- (id)getTextColor;
- (int)getInputTextLength;
- (void)setText:(id)a0;
- (BOOL)getSupportDynamicSize;
- (void).cxx_destruct;

@end
