@interface AWEMusicStreamingButton : UIButton

@property (nonatomic) float oriAlpha;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) double selectedAlpha;

- (void)setHighlighted:(BOOL)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
