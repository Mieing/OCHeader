@class AWEIMActiveUserAccuracyTrackTimer;
@protocol AWEIMMessageListNaviBarTitleAvatarInterface;

@interface AWEIMMessageListActiveStateAccuracyComponent : AWEIMComponentBase

@property (weak, nonatomic) id<AWEIMMessageListNaviBarTitleAvatarInterface> avatarComponent;
@property (retain, nonatomic) AWEIMActiveUserAccuracyTrackTimer *trackTimer;
@property (nonatomic) double sampleRate;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)hostVC_afterFirstRender;
- (void)app_willResignActive;
- (void)app_didBecomeActive;
- (void)p_viewDidAppear;
- (void)trackIfNeededWithIndex:(long long)a0;
- (BOOL)isViewOnWindow;
- (void).cxx_destruct;

@end
