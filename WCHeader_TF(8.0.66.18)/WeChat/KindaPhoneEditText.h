@class WCPayPhoneTextItem, NSString, TPIDKeyboardView, MMKEditTextOnTextChangedCallback;

@interface KindaPhoneEditText : KindaEditText <WCBaseInfoItemDelegate, MMKPhoneEditText> {
    TPIDKeyboardView *keyboardView;
    MMKEditTextOnTextChangedCallback *m_callback;
}

@property (retain, nonatomic) WCPayPhoneTextItem *m_textFieldPhoneItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
