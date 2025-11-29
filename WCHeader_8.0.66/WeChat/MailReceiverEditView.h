@class UIButton, NSString, UILabel, NSMutableArray, HackUITextField;
@protocol MailReceiverEditViewDelegate;

@interface MailReceiverEditView : MMUIView <MailContactButtonDelegate, UITextFieldDelegate> {
    NSMutableArray *m_arrReceiverButtons;
    HackUITextField *m_textField;
    UIButton *m_addContactButton;
    UILabel *m_textLabel;
}

@property (nonatomic) long long m_uiReceiverEditViewTag;
@property (weak, nonatomic) id<MailReceiverEditViewDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isMailAddrFormatOK:(id)a0;
- (void)properInit;
- (id)initWithReceiverTag:(long long)a0;
- (id)initWithReceiverTag:(long long)a0 MaxWidth:(double)a1;
- (void)fixSize;
- (id)getDisplayName;
- (void)initTextField;
- (void)initView:(double)a0;
- (void)layoutSubviews;
- (struct CGPoint { double x0; double x1; })getNewBtnPointForNewBtn:(id)a0;
- (void)updateTextFieldPosition;
- (void)updateBtnArray;
- (BOOL)addMailContact:(id)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)resizeButtons;
- (void)setAddButtonHide:(BOOL)a0;
- (BOOL)isFirstResponder;
- (id)getMailContacts;
- (void)removeAllContacts;
- (void)setText:(id)a0;
- (id)text;
- (void)onAddReceiver:(id)a0;
- (void)onMailContactDoubleClicked:(id)a0;
- (void)beginEdit:(id)a0;
- (void)finishEdit:(id)a0;
- (void)deleteMailContactButton;
- (void)onTextFieldChanged:(id)a0;
- (BOOL)finishEditing:(id)a0;
- (BOOL)finishEditing;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)onMailContactClicked:(id)a0 sender:(id)a1;
- (long long)count;
- (void).cxx_destruct;

@end
