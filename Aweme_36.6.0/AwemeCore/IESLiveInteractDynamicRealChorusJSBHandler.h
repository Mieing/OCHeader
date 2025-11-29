@protocol IESLiveInteractPushStreaming, IESLiveVideoChorusService, IESLiveMultiUserScenarioMonitor, IESLiveKTVPlayerService, IESLiveKTVTuningService, IESLiveInteractionLinkerService, HTSLiveStreamPlayerProvider, IESLiveKTVService, IESLiveInteractVideoChorusConcertComponentRouter;

@interface IESLiveInteractDynamicRealChorusJSBHandler : IESLiveInteractDynamicJSBHandler

@property (weak, nonatomic) id<IESLiveInteractPushStreaming> interactStreamer;
@property (weak, nonatomic) id<IESLiveInteractionLinkerService> linkerService;
@property (weak, nonatomic) id<IESLiveInteractVideoChorusConcertComponentRouter> videoChorusConcertRouter;
@property (weak, nonatomic) id<IESLiveMultiUserScenarioMonitor> fullLinkMonitor;
@property (weak, nonatomic) id<IESLiveVideoChorusService> videoChorusService;
@property (weak, nonatomic) id<IESLiveKTVTuningService> tuningService;
@property (weak, nonatomic) id<IESLiveKTVService> ktvService;
@property (weak, nonatomic) id<IESLiveKTVPlayerService> player;
@property (weak, nonatomic) id<HTSLiveStreamPlayerProvider> streamPlayer;

- (id)exception:(id)a0 context:(id)a1;
- (void)traceWithStep:(id)a0 extra:(id)a1;
- (id)jsb_get_chorus:(id)a0 context:(id)a1;
- (id)jsb_update_chorus:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
