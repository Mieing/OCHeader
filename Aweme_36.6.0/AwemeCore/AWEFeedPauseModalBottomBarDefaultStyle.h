@class UIView;

@interface AWEFeedPauseModalBottomBarDefaultStyle : AWEFeedPauseModalBaseStyle {
    UIView *_styleContainerView;
}

+ (Class)shouldShowWithModel:(id)a0 styleConfig:(id)a1 strategyManager:(id)a2;
+ (id)optionalBusinessComponent:(id)a0;

- (unsigned long long)pauseModalBizType;
- (id)trackerParamsForFeedPauseButtonShow:(id)a0;
- (id)trackerParamsForFeedPauseButtonClose:(id)a0;
- (id)trackerParamsForFeedPauseButtonClick:(id)a0;
- (id)trackerParamsForFeedPauseButton:(id)a0;
- (void)activeComponentWithClass:(Class)a0 model:(id)a1;
- (void)layoutContainerView:(id)a0 cellViewController:(id)a1;
- (void)deallocStyleWithModel:(id)a0 cellViewController:(id)a1 clickMethod:(id)a2;
- (void)hiddenStyleWithModel:(id)a0 clickMethod:(id)a1;
- (long long)pauseModalStyleSlotType;
- (id)styleContainerView;
- (BOOL)isBottomBarStyle;
- (void)setStyleContainerView:(id)a0;
- (void)triggerInteractionLiftUpAnimationWithCellViewController:(id)a0;
- (void)triggerInteractionLayDownAnimationWithCellViewController:(id)a0;
- (id)bottomBarElementArray;
- (id)bottomButtonElementArray;
- (void)performAnimationWithDuration:(double)a0 animationBlock:(id /* block */)a1;
- (void)performAnimationWithDuration:(double)a0 animationBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (id)buttonClassNameArray;
- (id)pauseContentWithModel:(id)a0;
- (void).cxx_destruct;

@end
