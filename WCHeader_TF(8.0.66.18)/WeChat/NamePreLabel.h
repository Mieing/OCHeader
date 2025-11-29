@interface NamePreLabel : MMUILabel {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_superFrame;
    double m_leftMargin;
    double m_rightMargin;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 leftMargin:(double)a1;
- (void)updateRightMargin:(double)a0;
- (void)layoutSelf;
- (void)setText:(id)a0;

@end
