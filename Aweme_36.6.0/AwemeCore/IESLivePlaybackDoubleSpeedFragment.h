@class HTSLiveRoomAuthStatus, NSArray, IESLivePlaybackDoubleSpeedPortraitButton, IESLivePlaybackDoubleSpeedLandscapeButton, NSString;

@interface IESLivePlaybackDoubleSpeedFragment : IESLivePlaybackComponent <IESLiveAirPlayAction, IESVSVideoPlayAction, IESLivePlaybackCustomAutoHideAnimService>

@property (retain, nonatomic) HTSLiveRoomAuthStatus *roomAuth;
@property (retain, nonatomic) IESLivePlaybackDoubleSpeedPortraitButton *portraitBtn;
@property (retain, nonatomic) IESLivePlaybackDoubleSpeedLandscapeButton *landscapeBtn;
@property (retain, nonatomic) IESLivePlaybackDoubleSpeedLandscapeButton *localLandscapeBtn;
@property (retain, nonatomic) NSArray *dataList;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL btnShowDidTracked;
@property (nonatomic) int durationLast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentOrientationChanged:(long long)a0;
- (void)componentDidMount;
- (void)landscapeViewsTransformToHidden:(BOOL)a0;
- (void)portraitViewsTransformToHidden:(BOOL)a0;
- (void)airplayStateDidChange:(BOOL)a0;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)onVideoFrameChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)usePadNewStyle;
- (void)vsPlayBackTrackEvent:(id)a0 extraParams:(id)a1;
- (void)updateWithConnectedAirplay:(BOOL)a0;
- (void)p_trackName:(id)a0;
- (void)showLandscapeSelect;
- (void)showPortraitSelect;
- (id)getSpeedsList:(BOOL)a0;
- (void)stateChangeTrack:(long long)a0;
- (void)updateSpeedState:(id)a0;
- (void).cxx_destruct;
- (void)stateDidChange:(long long)a0;
- (void)setupUI;

@end
