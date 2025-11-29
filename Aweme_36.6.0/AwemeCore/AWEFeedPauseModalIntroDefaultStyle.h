@class AWEPlayInteractionLeftElement, UIView;

@interface AWEFeedPauseModalIntroDefaultStyle : AWEFeedPauseModalBaseStyle {
    UIView *_styleContainerView;
}

@property (weak, nonatomic) AWEPlayInteractionLeftElement *leftElement;
@property (copy, nonatomic) id /* block */ handler;

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
- (BOOL)conflictCheck;
- (void)setStyleContainerView:(id)a0;
- (void)trackFalseTouchIfNeedWithAweme:(id)a0;
- (id)buttonClassNameArray;
- (double)getViewHeight;
- (void)addObserverForOtherLeftElement;
- (void)handleLeftButton:(BOOL)a0;
- (long long)pauseModelIntroBottomBarStrategy;
- (void)handleBottomContainer:(BOOL)a0;
- (void)removeObserverForOtherLeftElement:(id)a0;
- (void)performAnimationWithDelay:(double)a0 timingFunction:(id)a1 animationBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (id)conflictBottomBars;
- (long long)pauseModelIntroBottomButtonStrategy;
- (id)conflictBottomButtons;
- (id)pauseContentWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
