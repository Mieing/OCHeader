@class NSString, IESLiveAudioMVBackgroundManager;

@interface IESLiveInteractMVBackgroundComponent : IESLiveInteractComponentBase <IESLiveInteractMVBackgroundRouter>

@property (retain, nonatomic) IESLiveAudioMVBackgroundManager *mvManager;
@property (nonatomic) BOOL didTrackMVShow;
@property (copy, nonatomic) NSString *unregisterId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentUnmount;
- (void)registerDegradeStrategy;
- (void)unregisterDegradeStrategy;
- (void)componentBindContext;
- (void)startMVBackgroundWithMVInfo:(id)a0 audioMVBackgroundType:(unsigned long long)a1 stopCompletion:(id /* block */)a2;
- (void)setupFirstRenderBlock:(id /* block */)a0;
- (void)stopMVBackgroundWithStopCompletion:(id /* block */)a0;
- (BOOL)isMVPlaying;
- (void)trackMVWatchDurationIfNeed;
- (void)trackMVShowWithMVInfo:(id)a0;
- (void).cxx_destruct;

@end
