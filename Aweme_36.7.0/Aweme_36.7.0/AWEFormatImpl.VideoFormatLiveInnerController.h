@interface AWEFormatImpl.VideoFormatLiveInnerController : AWEFormatImpl.FormatLiveInnerController <AWETransitioningViewController, AWEModernFullscreenTransitionInnerContextProvider, AWEFormatFullscreenTransitionInnerContextProvider>

- (void)viewControllerWillBePopped;
- (void)transitionDidSubmitAnimation;
- (void)transitionDidCompleteAnimation:(BOOL)a0;
- (id)awe_preferredTransitionProviderClassNameForContext:(id)a0;
- (long long)modernTransitionItemOffset;
- (BOOL)modernTransitionItemHasScrolled;
- (id)modernTransitionContext;
- (void)transitionWillStartAnimation;
- (void)transitionWillSubmitAnimation;
- (double)modernAnimationDuration;
- (id)initWithCoder:(id)a0;

@end
