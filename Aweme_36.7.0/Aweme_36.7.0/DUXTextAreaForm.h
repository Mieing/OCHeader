@class NSString, UIImageView, DUXTextArea, UILabel, DUXFormUIConfigModel, UIImage;

@interface DUXTextAreaForm : UIView

@property (retain, nonatomic) DUXTextArea *textArea;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *maxLengthLabel;
@property (retain, nonatomic) UILabel *extraLabel;
@property (retain, nonatomic) DUXFormUIConfigModel *uiConfig;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long maxLengthType;
@property (nonatomic) long long maxLength;
@property (nonatomic) unsigned long long enlargeType;
@property (copy, nonatomic) id /* block */ didClickImageAction;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enlargeType:(unsigned long long)a1;
- (void)updateFontsIfNeeded;
- (void)setTextAreaConstraints;
- (id)initWithTitle:(id)a0 maxLengthType:(long long)a1 maxLength:(long long)a2 enlargeType:(unsigned long long)a3;
- (void)updateIconViewIfNeeded;
- (void)checkMaxLength;
- (void)didClickImage;
- (id)initWithTitle:(id)a0 maxLengthType:(long long)a1 maxLength:(long long)a2;
- (void)showAuxiliaryReminder:(id)a0;
- (void)showExtraText:(id)a0 color:(id)a1;
- (void)dismissHit;
- (void).cxx_destruct;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)endEditing:(BOOL)a0;
- (void)showError:(id)a0;

@end
