@interface AWEIMMessageTailAddBubbleComponent : AWEIMFlexComponent

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_didTapBubbleButton;
- (void)p_trackBubbleWithEvent:(id)a0;

@end
