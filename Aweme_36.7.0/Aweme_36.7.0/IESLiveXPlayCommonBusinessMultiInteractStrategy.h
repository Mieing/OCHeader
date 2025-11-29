@protocol IESLiveXPlayAudioStreamService, IESLiveInteractXplayTracker, IESLiveInteractXplayGameInterface, IESLiveRoomService;

@interface IESLiveXPlayCommonBusinessMultiInteractStrategy : IESLiveXPlayCommonBusinessBaseStrategy

@property (weak, nonatomic) id<IESLiveXPlayAudioStreamService> audioStreamService;
@property (weak, nonatomic) id<IESLiveInteractXplayGameInterface> interactService;
@property (weak, nonatomic) id<IESLiveRoomService> roomService;
@property (weak, nonatomic) id<IESLiveInteractXplayTracker> interactXplayTracker;

- (void)enableAudioFrame:(BOOL)a0;
- (void)sendFrameBufferToAppId:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 rotation:(long long)a2 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)sendAudioFrameToAppId:(id)a0 frame:(id)a1 timestamp:(long long)a2;
- (id)trackerExtraFields:(id)a0;
- (void)enterLaunch;
- (void)loadXPlayGameWithCompletion:(id /* block */)a0;
- (void)handleCloseXPlayGame:(id)a0 completion:(id /* block */)a1;
- (void)willSwitchToScene:(long long)a0;
- (void)didSwitchToScene:(long long)a0;
- (void)switchScene:(id)a0 completion:(id /* block */)a1;
- (void)handleXPlayStatusDidUpdate:(long long)a0 extraInfo:(id)a1;
- (void)trackStart:(BOOL)a0 extra:(id)a1;
- (void)showXplayWithCompletion:(id /* block */)a0;
- (void)handleLoadResult:(long long)a0 extra:(id)a1;
- (BOOL)isMixStreamFromServerAvailable;
- (void)restartXplayGame;
- (id)getDurationTrackInfo;
- (void).cxx_destruct;

@end
