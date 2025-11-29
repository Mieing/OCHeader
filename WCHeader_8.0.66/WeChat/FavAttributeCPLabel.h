@class UIColor, UIFont;

@interface FavAttributeCPLabel : MMCPLabel {
    UIFont *m_font;
    UIColor *m_textColor;
}

@property (nonatomic) double lineSpace;
@property (retain, nonatomic) UIColor *highlightColor;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (void)setFont:(id)a0;
- (void)setTextColor:(id)a0;
- (void)formAttributedString;
- (void)internalSetText;
- (void)internalSetLineSpace;
- (void)setText:(id)a0 highlightKeyWord:(id)a1;
- (void).cxx_destruct;

@end
