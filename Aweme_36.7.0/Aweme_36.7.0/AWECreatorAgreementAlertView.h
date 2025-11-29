@class UITextView, NSString, UIImageView, AWEUIButton, UILabel, UIView;

@interface AWECreatorAgreementAlertView : UIView <UITextViewDelegate>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) AWEUIButton *cancelButton;
@property (retain, nonatomic) AWEUIButton *confirmButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *tipsLabel;
@property (retain, nonatomic) UIImageView *imageHeader;
@property (copy, nonatomic) id /* block */ onConfirm;
@property (copy, nonatomic) id /* block */ onCancel;
@property (copy, nonatomic) id /* block */ onLink;
@property (copy, nonatomic) NSString *tipsText;
@property (copy, nonatomic) NSString *linkText;
@property (copy, nonatomic) NSString *linkURL;
@property (nonatomic) double tipsHeight;
@property (copy, nonatomic) NSString *promoteLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)creatorAgreementUrl;
- (void)_refreshContent;
- (void)_configDisplayContent;
- (void)showOnView:(id)a0 confirmBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2 linkBlock:(id /* block */)a3;
- (void)updateTitle:(id)a0 msg:(id)a1 content:(id)a2 linkText:(id)a3 linkURL:(id)a4;
- (void)dismissWhenConfirmSuccess;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)_commonInit;
- (id)init;
- (void)_dismiss;
- (void)_cancelAction;
- (void)_confirmAction;
- (id)termsURL;

@end
