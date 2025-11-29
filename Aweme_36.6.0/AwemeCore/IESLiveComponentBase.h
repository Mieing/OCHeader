@class NSString, IESLiveComponentReleaseObserver;

@interface IESLiveComponentBase : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL reuse;
@property (nonatomic) long long currentState;
@property (retain, nonatomic) IESLiveComponentReleaseObserver *observer;
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (readonly, nonatomic) long long currentState;
@property (nonatomic) BOOL usePlatformData;
@property (nonatomic) BOOL preloaded;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentDidDisappear;
- (void)componentUnmount;
- (void)componentDestroy;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationTransitioning:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)remoteRoomDataReady:(id)a0;
- (void)componentRefresh;
- (void)componentBeginAppear;
- (void)mountDidFinishForLevel:(long long)a0;
- (void)appearDidFinishForLevel:(long long)a0;
- (BOOL)couldUnmountComponent;
- (void)createDidFinishForLevel:(long long)a0;
- (void)comp_applicationWillResignActive;
- (void)comp_applicationDidEnterBackground;
- (void)comp_applicationWillEnterForeground;
- (void)setRoom:(id)a0 componentContext:(id)a1 trackContext:(id)a2;
- (void)comp_applicationDidBecomeActive;
- (void)disAppearDidFinishForLevel:(long long)a0;
- (void)unMountDidFinishForLevel:(long long)a0;
- (void)destroyDidFinishForLevel:(long long)a0;
- (void)comp_applicationWillTerminate;
- (void)comp_streamPlayerStateDidChanged:(unsigned long long)a0;
- (void)comp_streamPlayerFirstFrame;
- (void)reuseComponentWillChangeFromScene:(unsigned long long)a0 toScene:(unsigned long long)a1;
- (void)reuseComponentDidChangeFromScene:(unsigned long long)a0 toScene:(unsigned long long)a1;
- (void)reuseComponentRefreshUIIfNeed;
- (BOOL)reuseInPreviewAndAudienceRoom;
- (BOOL)isReady;
- (long long)componentPriority;

@end
