@class UIColor;

@interface KindaUIButton : MMUIButton

@property (retain, nonatomic) UIColor *m_highlighBorderColor;
@property (retain, nonatomic) UIColor *m_disabledBorderColor;
@property (retain, nonatomic) UIColor *m_normalBorderColor;
@property (retain, nonatomic) UIColor *normalTextColor;
@property (retain, nonatomic) UIColor *normalBackgroudColor;
@property (retain, nonatomic) UIColor *disabledTextColor;
@property (retain, nonatomic) UIColor *disabledBackgroudColor;
@property (nonatomic) BOOL enableHignLight;
@property (nonatomic) long long m_verticalPadding;
@property (nonatomic) long long m_horizontalPadding;

- (id)init;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)getSuperViewBackgroundColor;
- (unsigned long long)colorStyle:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setEnabled:(BOOL)a0;
- (void)setWeakStyle;
- (void)setGreenStyle;
- (void).cxx_destruct;

@end
