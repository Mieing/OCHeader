@class UIFont, NSString, UIView, NSAttributedString, UIButton, AWEUserNameLabel, MASConstraint, AWEAccessibilityLabel, UIColor;

@interface AWEAliasEditLabel : UIView

@property (retain, nonatomic) AWEAccessibilityLabel *nameLabel;
@property (retain, nonatomic) AWEUserNameLabel *iconNameLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MASConstraint *alignConstraint;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) long long textAlignment;
@property (nonatomic) BOOL isEditable;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL hideEditTextButton;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (retain, nonatomic) UIView *editContainerView;
@property (retain, nonatomic) UIButton *editButton;
@property (retain, nonatomic) UIButton *editTextButton;
@property (nonatomic) BOOL isConstColor;
@property (retain, nonatomic) UIColor *customColor;
@property (copy, nonatomic) id /* block */ didBecomeVoiceOverFocused;

- (void)addVerificationIconWithName:(id)a0 shouldChangeLabel:(BOOL)a1;
- (void)addVerificationIcon:(BOOL)a0;
- (void)updateEditBtnIconWidth:(double)a0;
- (void)addVerificationIconWithImage:(id)a0 withCustomFontSize:(id)a1 shouldChangeLabel:(BOOL)a2;
- (void)setContainerSizeFit;
- (void)setEditIcon:(id)a0;
- (id)p_editButtonImageWithIsConstColor:(BOOL)a0;
- (void)tapEditButton:(id)a0;
- (id)p_editTextButtonColorWithIsConstColor:(BOOL)a0;
- (void)addVerificationIconWithName:(id)a0 withCustomFontSize:(id)a1 shouldChangeLabel:(BOOL)a2;
- (void).cxx_destruct;
- (void)setFont:(id)a0;
- (void)setText:(id)a0;
- (id)init;
- (id)text;
- (void)setTextColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
