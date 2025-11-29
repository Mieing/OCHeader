@class NSString, TTTAttributedLabel, UIToolbar, UILabel, UIView, UIButton;

@interface AWEBindPhoneAlertView : UIView <TTTAttributedLabelDelegate>

@property (retain, nonatomic) UIToolbar *blurBackground;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) TTTAttributedLabel *tipsLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (copy, nonatomic) id /* block */ onConfirm;
@property (copy, nonatomic) id /* block */ onCancel;
@property (copy, nonatomic) id /* block */ presentHandler;
@property (retain, nonatomic) UIView *horizontalSeparator;
@property (retain, nonatomic) UIView *verticalSeparator;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)gotoBindPhoneWithType:(unsigned long long)a0 presentHandler:(id /* block */)a1;
+ (void)gotoBindPhoneWithType:(unsigned long long)a0 presentHandler:(id /* block */)a1 didCancelBindBlock:(id /* block */)a2 didFinishBindBlock:(id /* block */)a3;
+ (id)instanceWithType:(unsigned long long)a0 cancelTitle:(id)a1 confirmTitle:(id)a2 subtitle:(id)a3 confirmBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5 presentHandler:(id /* block */)a6;
+ (id)bindPhoneViewControllerWithEnterFrom:(id)a0 didCancelBindBlock:(id /* block */)a1 didFinishBindBlock:(id /* block */)a2;
+ (id)instanceWithType:(unsigned long long)a0 confirmBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2 presentHandler:(id /* block */)a3;

- (void)attributedLabel:(id)a0 didSelectLinkWithURL:(id)a1;
- (void)showAlertWithAnimation:(id /* block */)a0;
- (BOOL)isTipsLabelStyle;
- (double)messageLabelHeight;
- (id)_tipsURL;
- (void).cxx_destruct;
- (void)_commonInit;
- (id)initWithType:(unsigned long long)a0;
- (void)_dismiss;
- (void)layoutSubviews;
- (void)_cancelAction;
- (void)_confirmAction;
- (double)viewHeight;

@end
