@interface AWEDanmakuContainerView : DDanmakuContainerView

- (BOOL)isAccessibilityElement;
- (id)accessibilityElements;
- (void)setAccessibilityElements:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;

@end
