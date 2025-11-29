@class NSString, UILabel, UIImageView;

@interface WCFinderIconArrowField : UIView

@property (readonly, nonatomic) id /* block */ themeIconSVG;
@property (readonly, nonatomic) id /* block */ arrowWithTheme;
@property (readonly, nonatomic) id /* block */ arrowOrNoneWithTheme;
@property (readonly, nonatomic) id /* block */ textColor;
@property (readonly, nonatomic) id /* block */ arrow;
@property (readonly, nonatomic) id /* block */ configText;
@property (readonly, nonatomic) id /* block */ icon;
@property (readonly, nonatomic) id /* block */ iconWithSVG;
@property (readonly, nonatomic) id /* block */ iconWithSVGSize;
@property (readonly, nonatomic) id /* block */ onTap;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UILabel *textField;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (nonatomic) double arrowPaddingText;
@property (copy, nonatomic) id /* block */ tapAction;

+ (double)textPaddingLeft;
+ (struct CGPoint { double x0; double x1; })iconCenterWithHeight:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sizeToFit;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_onClickTap;
- (id)debugDescription;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
