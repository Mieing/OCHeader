@class NSString, NSTimer, NSDictionary, HTSLiveStreamPlayer, IESLiveMultiRoomPreloadContextPlugin;
@protocol IESLiveRoomService, IESLiveMTScreenCastService;

@interface IESLiveMultiRoomPreloadStreamPlayerPlugin : IESLiveMultiRoomPreloadBasePlugin <HTSLiveStreamPlayerDelegate>

@property (weak, nonatomic) IESLiveMultiRoomPreloadContextPlugin *contextPlugin;
@property (retain, nonatomic) id<IESLiveMTScreenCastService> screenCastService;
@property (retain, nonatomic) HTSLiveStreamPlayer *streamPlayer;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) NSTimer *wormholePreloadTimer;
@property (nonatomic) unsigned long long preloadType;
@property (retain, nonatomic) NSDictionary *preloadPlayerConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (id)streamPlayerGetCurrentRoomModel;
- (void)restoreCurrentRoomStrategy:(id)a0;
- (void)willDisplayAfterPreloadWithRoom:(id)a0 renderOnView:(id)a1 reuseVC:(BOOL)a2;
- (void)resetWormholePreloadTimer;
- (void)cancelProbePlayerStream:(BOOL)a0;
- (void)didDisplayAfterPreloadWithRoom:(id)a0 renderedCallback:(id /* block */)a1;
- (void)startWormholePreloadTimer:(double)a0;
- (void)loadWithContextPlugin:(id)a0;
- (BOOL)blockPreloadPullStream:(id)a0;
- (void)startPreloadStreamPlayer;
- (BOOL)wormholePreloadPullStream;
- (void)prepareStreamPlayer;
- (id)getStreamPlayer:(BOOL)a0;
- (void).cxx_destruct;
- (void)clear;

@end
