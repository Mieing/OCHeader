@class NSString;

@interface AFDPureModePageService : HTSService <AFDPureModePageService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAFDPureModePageViewControllerAdapterClass;

- (Class)pinchZoomTransitionHelperClass;
- (id)createPureModePageViewController;
- (BOOL)pinchAutoEnterLandscape;
- (BOOL)canPinchToSinglePage;
- (BOOL)enableVideoPinchScale;
- (BOOL)isInPinchViewPip;
- (id)createPinchUpdateAnimator;
- (id)createPinchZoomTransitionHelper;
- (id)pinchZoomEventTracker;
- (void)toastWhenInPureModePageShare;
- (BOOL)shouldShowPinchModePiPSwitch;
- (BOOL)canShowMultiMixVideoWithModel:(id)a0 referString:(id)a1 fromScene:(unsigned long long)a2;
- (BOOL)shouldShowSpeedFuncOnLongPressPanelWithModel:(id)a0;
- (void)trackQuitLandscapeWhenFromPinchWithScene:(unsigned long long)a0;
- (id)aAFDPureModePageViewControllerAdapter;

@end
