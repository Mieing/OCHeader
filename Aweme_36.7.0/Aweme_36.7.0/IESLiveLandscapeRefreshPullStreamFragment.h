@class IESLiveLandscapeRefreshView, NSString, IESLiveGCDTimer;

@interface IESLiveLandscapeRefreshPullStreamFragment : IESLiveRoomComponent <HTSLiveHideComponentAction>

@property (retain, nonatomic) IESLiveLandscapeRefreshView *landscapeRefreshView;
@property (retain, nonatomic) IESLiveGCDTimer *refreshTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentOrientationTransitioning:(long long)a0;
- (void)hideAllComponent;
- (void)showAllComponent;
- (void)componentRefresh;
- (void)trackRefreshViewShow;
- (void)trackRefreshViewClick;
- (void)handleTapLandscapeRefreshView;
- (void).cxx_destruct;

@end
