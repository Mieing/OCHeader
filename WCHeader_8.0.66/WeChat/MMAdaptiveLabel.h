@interface MMAdaptiveLabel : MMCPLabel {
    int m_adaptiveType;
}

+ (struct CGSize { double x0; double x1; })getIdealSize:(id)a0 initSize:(struct CGSize { double x0; double x1; })a1 forAdaptiveType:(int)a2;

- (void)internalAdjustFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void)adjustSize;
- (void)setAdaptiveType:(int)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (void)setText:(id)a0;
- (void)setFont:(id)a0;
- (void)setLineBreakMode:(long long)a0;

@end
