@class NSString, AWEPadMixVideoPanelGestureGuideView;

@interface AWEPadSplitViewMixBizAdapter : AWEPadSplitViewBaseBizAdapter <AWEPadMixVideoPanelGestureGuideViewDelegate>

@property (retain, nonatomic) AWEPadMixVideoPanelGestureGuideView *gestureGuideView;
@property (nonatomic) BOOL gestureGuideViewShowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableVerticalSlideDismiss;
- (void)service:(id)a0 didShowViewController:(id)a1 source:(long long)a2;
- (void)service:(id)a0 willDismissViewController:(id)a1 source:(long long)a2;
- (void)service:(id)a0 didDismissViewController:(id)a1 source:(long long)a2;
- (BOOL)service:(id)a0 gestureRecognizer:(id)a1 shouldBeRequiredToFailByGestureRecognizer:(id)a2;
- (void)splitViewDismissWithStayTime:(double)a0 duration:(double)a1;
- (void)lottieViewPlayCompletion;
- (void)panGesAction;
- (void)showGestureGuideOnView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)dismissGestureGuide;
- (BOOL)canShowGestureGuideFrequencyControl;
- (void)addGestureGuideViewShowTimes;
- (void).cxx_destruct;

@end
