@class UIImageView, UIButton, UIView;

@interface AWERewardedAdvertisingEventButton : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIButton *eventButton;
@property (retain, nonatomic) UIImageView *textRightIconImageView;
@property (nonatomic) long long state;
@property (copy, nonatomic) id /* block */ onClickedBlock;

+ (id)button;

- (void)makeConstraint;
- (Class)largeFontAdaptUtilClass;
- (BOOL)enableAdaptLargeFontMode;
- (BOOL)enableAdaptLargeFontModeV3;
- (void)setTextRightIconImage:(id)a0;
- (void)setEventText:(id)a0;
- (void)setEventText:(id)a0 richText:(id)a1;
- (void)setEventAttributedString:(id)a0;
- (void)didClickUnlockButton:(id)a0;
- (struct CGSize { double x0; double x1; })iconSize;
- (void).cxx_destruct;
- (void)setIconImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)titleLabelFont;
- (void)setupUI;
- (void)setState:(long long)a0 completion:(id /* block */)a1;

@end
