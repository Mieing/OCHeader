@interface AWEIMIncentiveChatMessageTabNavBarComponent : AWEIMComponentBase <AWEIMGrowthImpl.ResourceSlotComponentProvider, AWEIMGrowthImpl.IncentiveChatNotify> {
    void /* unknown type, empty encoding */ hasPlayedAnimate;
    void /* unknown type, empty encoding */ animationView;
    void /* unknown type, empty encoding */ backgroundRingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_animateCompleBlock;
}

- (void)didDisplay;
- (void)hostVC_viewWillAppear;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)activityInfoDidChangeAt:(long long)a0;
- (void)redPacketEnergyProgressDidChange;
- (void)hostVC_viewWillDisappear;
- (void)pauseAnimationIfNeed;
- (void)resumeAnimationIfNeed;
- (BOOL)checkCanShow;
- (void)hideAllSubviewsWithContainerView:(id)a0 imageView:(id)a1;
- (void)configUIWithContainerView:(id)a0 imageView:(id)a1;
- (void)didClick;
- (double)intrinsicContentWidth;
- (void).cxx_destruct;
- (void)updateBackgroundColor;
- (id)init;

@end
