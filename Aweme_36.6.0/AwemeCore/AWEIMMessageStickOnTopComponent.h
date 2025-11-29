@interface AWEIMMessageStickOnTopComponent : AWEIMFlexComponent

@property (nonatomic) BOOL isStickOnTop;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)p_addKVO:(id)a0;
- (void)p_stickOnTopButtonTap;
- (void)p_setButtonStateWithStickOnTop:(BOOL)a0;

@end
