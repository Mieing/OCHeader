@class NSString, AWEBinding, UIView, AWEFeedPauseModalBaseComponent;

@interface AWEFeedPauseModalBottomTabDefaultStyle : AWEFeedPauseModalBaseStyle {
    UIView *_styleContainerView;
}

@property (retain, nonatomic) AWEFeedPauseModalBaseComponent *rightComponent;
@property (nonatomic) BOOL isHidingTabBar;
@property (nonatomic) BOOL shouldRecoverTabBarShow;
@property (retain, nonatomic) AWEBinding *hiddenBinding;
@property (retain, nonatomic) AWEBinding *alphaBinding;
@property (copy, nonatomic) NSString *businessID;

+ (Class)shouldShowWithModel:(id)a0 styleConfig:(id)a1 strategyManager:(id)a2;
+ (id)optionalBusinessComponent:(id)a0;
+ (id)leftComponentArray:(id)a0;

- (void)setupBind;
- (unsigned long long)pauseModalBizType;
- (double)topDistance;
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
- (BOOL)enableFrequencyCheck;
- (BOOL)isBottomTabStyle;
- (void)setStyleContainerView:(id)a0;
- (void)hiddenBottomTabIfNeedWithModel:(id)a0;
- (void)showBottomTabIfNeedWithModel:(id)a0;
- (void)trackFalseTouchIfNeedWithAweme:(id)a0;
- (double)bottomLeftWidth;
- (double)bottomLeftHeight;
- (BOOL)enableUseTabAbility;
- (Class)rightComponentClass;
- (void)unBind;
- (id)pauseContentWithModel:(id)a0;
- (void).cxx_destruct;

@end
