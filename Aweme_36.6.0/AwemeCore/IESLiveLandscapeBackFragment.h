@class NSString, IESLiveLandscapeBackView;

@interface IESLiveLandscapeBackFragment : IESLiveRoomComponent <IESLiveLandscapeBackProvider>

@property (retain, nonatomic) IESLiveLandscapeBackView *backView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentOrientationTransitioning:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)remoteRoomDataReady:(id)a0;
- (void)handleOrientationChanged:(long long)a0;
- (void)setLandscapeBackViewEnable:(BOOL)a0;
- (void)prepareToChangeOrientation:(BOOL)a0;
- (void)setupLandscapeStandardViewsIfNeeded;
- (void)setupLandscapeStandardViews;
- (void).cxx_destruct;

@end
