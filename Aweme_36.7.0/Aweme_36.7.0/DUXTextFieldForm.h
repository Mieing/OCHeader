@class UIView, NSString, DUXTextField, UIFont, UIImage, UIImageView, DUXFormUIConfigModel, UILabel, DUXDivider;

@interface DUXTextFieldForm : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *inputContainerView;
@property (retain, nonatomic) DUXTextField *textField;
@property (retain, nonatomic) DUXDivider *divider;
@property (retain, nonatomic) UILabel *maxLengthLabel;
@property (retain, nonatomic) UILabel *extraLabel;
@property (retain, nonatomic) DUXFormUIConfigModel *uiConfig;
@property (nonatomic) long long layoutType;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL showDivider;
@property (nonatomic) BOOL showMaxLength;
@property (nonatomic) long long maxLength;
@property (nonatomic) unsigned long long enlargeType;
@property (copy, nonatomic) id /* block */ didClickImageAction;

- (void)setupHorizontalConstraints;
- (void)updateFontsIfNeeded;
- (void)checkMaxLength;
- (void)didClickImage;
- (void)showAuxiliaryReminder:(id)a0;
- (void)dismissHit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutType:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutType:(long long)a1 enlargeType:(unsigned long long)a2;
- (id)initWithTitle:(id)a0 layoutType:(long long)a1 placeholder:(id)a2 text:(id)a3 enlargeType:(unsigned long long)a4;
- (double)textfieldHeight;
- (double)extraTextHeight;
- (void)setupTitileFont;
- (void)setIntrinsicConstraints;
- (void)setupHorizontalBoxConstraints;
- (void)setupVerticalConstraints;
- (void)updateIconViewConstraintsIfNeeded;
- (id)initWithTitle:(id)a0 layoutType:(long long)a1 placeholder:(id)a2 text:(id)a3;
- (void)showExtraText:(id)a0 color:(id)a1 lineColor:(id)a2;
- (void)setupConstraints;
- (void).cxx_destruct;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)titleHeight;
- (BOOL)endEditing:(BOOL)a0;
- (void)setup;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)showError:(id)a0;

@end
