@class NSString;

@interface MMMusicFadeOutLayer : CAGradientLayer <MMMusicFadeOutItem> {
    struct GradientStep { double stepValue[2]; } m_gradientStep;
    BOOL m_isVertical;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithGradientStep:(double)a0 step2:(double)a1 isVertical:(BOOL)a2;
- (id)initWithGradientStepValue:(double)a0 stepValue2:(double)a1 isVertical:(BOOL)a2;
- (id)initWithMidAlpha:(double)a0 gradientStepValue:(double)a1 stepValue2:(double)a2 isVertical:(BOOL)a3;
- (void)updateStepValue:(double)a0 stepValue2:(double)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
