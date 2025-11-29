@class UIColor, NSString, UILabel, UIView;

@interface BDASplashSkipButton : UIButton

@property (retain, nonatomic) UILabel *leftCountdownLabel;
@property (retain, nonatomic) UILabel *rightCountdownLabel;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *separateLine;
@property (nonatomic) BOOL countDownUnitPrefix;
@property (copy, nonatomic) NSString *skipText;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *bgColor;
@property (nonatomic) struct CGColor { } *borderColor;
@property (nonatomic) BOOL isHiddenSeparateLine;
@property (nonatomic) double defaultFontSize;
@property (nonatomic) BOOL tinyMode;
@property (nonatomic) double customEdgeInset;
@property (nonatomic) double borderWidth;
@property (nonatomic) long long positionStyle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestInsets;

- (double)textLabelFont;
- (double)btnHeight;
- (void)updatePrefixString:(id)a0;
- (double)countDownLabelFont;
- (double)bgViewHeight;
- (BOOL)isSmallerScreen;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (double)edgeInset;
- (void)updateFrame;

@end
