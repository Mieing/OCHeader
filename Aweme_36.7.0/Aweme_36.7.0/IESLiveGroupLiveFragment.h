@class NSString, IESLiveGroupLiveComponentViewModel, IESLiveGroupLiveTrackerInterceptorImpl;

@interface IESLiveGroupLiveFragment : IESLiveRoomComponent <IESLiveGroupLiveCommonContainerInterface, IESLiveGroupLiveTrackerInterceptorImplDelegate, IESLiveTapAction>

@property (retain, nonatomic) IESLiveGroupLiveComponentViewModel *groupLiveViewModel;
@property (retain, nonatomic) IESLiveGroupLiveTrackerInterceptorImpl *trackerInterceptorImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)a0;
- (void)willCommitTrackEvent:(id)a0 params:(id)a1;
- (id)currentMountBusinessInfo;
- (void)unlockScreen;
- (void)zoneClicked:(struct CGPoint { double x0; double x1; })a0;
- (id)groupLiveTrackerParams;
- (BOOL)groupLiveTrackerInterceptorIsShowContainer:(id)a0;
- (void).cxx_destruct;
- (void)lockScreen;

@end
