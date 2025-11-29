@class NSString, UITextField, UILabel;
@protocol MailReceiverEditViewDelegate;

@interface MailSubjectEditView : MMUIView <UITextFieldDelegate> {
    UITextField *m_textField;
    UILabel *m_textLabel;
}

@property (weak, nonatomic) id<MailReceiverEditViewDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initView;
- (void)layoutSubviews;
- (id)init;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)isFirstResponder;
- (void)setText:(id)a0;
- (id)text;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)onTextFieldChanged:(id)a0;
- (void).cxx_destruct;

@end
