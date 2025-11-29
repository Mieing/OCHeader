@interface AWEIMMessageGiphyPKComponent : AWEIMFlexComponent

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)p_addKVO;
- (void)presenter:(id)a0 didUpdateWithView:(id)a1;
- (void)p_didTappedPKView;
- (void)p_hidePKViewIfNeeded;

@end
