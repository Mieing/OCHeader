@class UIView, NSString, IESECDisclaimerPopupUIConfiguration, IESECHighlightButton, UITextView, NSDictionary, UIImageView, IESECPopupView, UILabel;

@interface IESECDisclaimerPopupCustomView : UIView <UITextViewDelegate, IESECPopupViewProtocol>

@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } textViewEdgeInsets;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) NSDictionary *config;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UITextView *contentTextView;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UIImageView *agreeImgV;
@property (nonatomic) BOOL isAgreed;
@property (retain, nonatomic) IESECHighlightButton *confirmButton;
@property (retain, nonatomic) IESECHighlightButton *closeButton;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) IESECPopupView *popup;
@property (retain, nonatomic) IESECDisclaimerPopupUIConfiguration *UIConfiguration;
@property (copy, nonatomic) NSDictionary *agreeImgConf;
@property (nonatomic) BOOL openWithSaaS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissWhenCompleted:(id /* block */)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentTextViewEdgeInsets;
- (void)agreeViewClick;
- (id)trackEventName;
- (id)initWithExtraParams:(id)a0 actionBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (void)close;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)setup;
- (void)showInView:(id)a0;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)confirm;

@end
