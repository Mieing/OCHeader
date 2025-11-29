@protocol ACCMusicTrimExpandClickViewDelegate;

@interface ACCMusicTrimExpandClickView : UIView

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } expandInsetResponseEdge;
@property (weak, nonatomic) id<ACCMusicTrimExpandClickViewDelegate> delegate;

- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)accessibilityValue;

@end
