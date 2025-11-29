@interface IESLLTempoSwiperItemView : UIView

- (BOOL)isScrollContainer;
- (void)resumeAnimationIfNeed;
- (void)didBuildView;
- (void)completeShow;
- (void)endShow;
- (void)willShow;

@end
