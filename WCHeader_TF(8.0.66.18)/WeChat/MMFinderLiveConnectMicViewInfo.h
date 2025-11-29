@class MMLiveRemoteTrtcCustomRenderWrapper, NSString, MMFinderLiveConnectMicAudioOnlyAnchorView, MMFinderLiveGestureAnimationContainerView, UIView, MMFinderLiveConnectMicUser;

@interface MMFinderLiveConnectMicViewInfo : NSObject <MMWebImageViewDelegate>

@property (retain, nonatomic) MMFinderLiveConnectMicAudioOnlyAnchorView *audioModeBackgroundView;
@property (nonatomic) BOOL isViewHidden;
@property (retain, nonatomic) MMFinderLiveConnectMicUser *userInfo;
@property (retain, nonatomic) UIView *userView;
@property (weak, nonatomic) MMLiveRemoteTrtcCustomRenderWrapper *customRenderWrapper;
@property (nonatomic) BOOL isStartCustomRender;
@property (retain, nonatomic) MMFinderLiveGestureAnimationContainerView *gestureAnimationContainer;
@property (nonatomic) BOOL useVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureCoverViewWithFinderLiveTaskId:(id)a0;
- (void)configureCoverViewWithFinderLiveTaskId:(id)a0 coverImageViewName:(id)a1 backgroundVideoViewName:(id)a2;
- (void)startCustomRender:(id)a0;
- (void)stopCustomRender;
- (void)updateUIForCustomRenderChanged;
- (void)updateViewsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeViewsFromSuperView;
- (void)updateViewsHidden:(BOOL)a0;
- (void)refreshViewsAppearence;
- (void).cxx_destruct;

@end
