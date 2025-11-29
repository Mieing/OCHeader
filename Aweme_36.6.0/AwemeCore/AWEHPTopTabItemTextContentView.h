@class UIFont, UIColor, NSString, UILabel;

@interface AWEHPTopTabItemTextContentView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double fontSize;
@property (nonatomic) double fontStrokeWidth;
@property (nonatomic) long long unselectedFontWeight;
@property (nonatomic) long long selectedFontWeight;
@property (nonatomic) double selectedProgress;
@property (retain, nonatomic) UIColor *labelShadowColor;
@property (readonly, nonatomic) BOOL isLightTheme;
@property (copy, nonatomic) NSString *contentText;

- (void)layoutSubviews;
- (void)updateTextColor:(id)a0;
- (void)p_updateTextColorWithModel:(id)a0;
- (id)initWithFontSize:(double)a0 fontStrokeWidth:(double)a1 selectedFontWeight:(double)a2 unselectedFontWeight:(double)a3 labelShadowColor:(id)a4;
- (void)updateTitleLabelShadowWithProgress:(double)a0;
- (void)setIsLightTheme:(BOOL)a0 textColor:(id)a1;
- (void)setSelectedProgress:(double)a0 textColor:(id)a1;
- (void)updateTitleLabelShadowColor:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setupUI;
- (id)currentFont;

@end
