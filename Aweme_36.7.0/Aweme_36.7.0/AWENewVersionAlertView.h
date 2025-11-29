@class UITextView, AWENewVersionCheckInfo, UIImageView, AWEUIButton, UILabel, UIView, AWEButton;

@interface AWENewVersionAlertView : UIView

@property (retain, nonatomic) UIView *customMaskView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UITextView *descTextView;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) AWEUIButton *confirmButton;
@property (retain, nonatomic) AWEButton *closeButton;
@property (retain, nonatomic) AWENewVersionCheckInfo *info;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) id /* block */ cancelAction;

- (id)initWithInfo:(id)a0 confirmAction:(id /* block */)a1 cancelAction:(id /* block */)a2;
- (void)setupAutoLayout;
- (void)setupForceCancel;
- (id)descTextAttributedString:(id)a0;
- (void)appendTestFlightHintForString:(id)a0 withAttributes:(id)a1;
- (void)confirmButtonDidPressed:(id)a0;
- (void)closeButtonDidPressed:(id)a0;
- (void)showAnimation;
- (void).cxx_destruct;
- (void)hide;
- (void)show;
- (void)setupSubviews;
- (void)confirm;
- (void)hideWithCompletion:(id /* block */)a0;

@end
