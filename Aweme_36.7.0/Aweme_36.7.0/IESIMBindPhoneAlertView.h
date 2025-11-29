@class UIToolbar, UILabel, UIView, UIButton;
@protocol IESIMBindPhoneAlertContextProtocol;

@interface IESIMBindPhoneAlertView : UIView

@property (retain, nonatomic) UIToolbar *blurBackground;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitle;
@property (retain, nonatomic) UIView *horizontalSeparator;
@property (retain, nonatomic) UIView *verticalSeparator;
@property (retain, nonatomic) id<IESIMBindPhoneAlertContextProtocol> context;
@property (copy, nonatomic) id /* block */ onCancel;
@property (copy, nonatomic) id /* block */ onConfirm;

- (void)p_configUI;
- (void)p_dismiss;
- (double)subtitleHeight;
- (void)p_confirmAction;
- (void)p_cancelAction;
- (void)showAlertWithAnimation:(id /* block */)a0;
- (id)initWithContext:(id)a0 onCancel:(id /* block */)a1 onConfirm:(id /* block */)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)viewHeight;

@end
