@class NSString, UIImageView, TTVideoEngine, BDXLynxVideoProModel;
@protocol BDXLynxVideoProUIProtocol;

@interface BDXLynxVideoPlayerPro : UIView <TTVideoEngineDelegate, TTVideoEngineDataSource, BDXLynxVideoProPlayerProtocol>

@property (retain, nonatomic) TTVideoEngine *videoEngine;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (nonatomic) BOOL inBackground;
@property (nonatomic) BOOL willResumeWhileActive;
@property (nonatomic) BOOL inListReusePool;
@property (nonatomic) BOOL createEngineEveryTime;
@property (retain, nonatomic) BDXLynxVideoProModel *playingModel;
@property (weak, nonatomic) id<BDXLynxVideoProUIProtocol> uiDelegate;
@property (nonatomic) BOOL renderByMetal;
@property (nonatomic) BOOL asyncClose;
@property (nonatomic) BOOL asyncPrepare;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)fullScreenClz;

- (void)videoEngineUserStopped:(id)a0;
- (void)videoEngine:(id)a0 playbackStateDidChanged:(long long)a1;
- (void)videoEngine:(id)a0 loadStateDidChanged:(unsigned long long)a1;
- (void)videoEngineDidFinish:(id)a0 error:(id)a1;
- (void)videoEngineDidFinish:(id)a0 videoStatusException:(long long)a1;
- (void)videoEngineCloseAysncFinish:(id)a0;
- (void)videoEngineReadyToDisPlay:(id)a0;
- (void)videoEnginePrepared:(id)a0;
- (void)videoEngine:(id)a0 retryForError:(id)a1;
- (void)videoEngine:(id)a0 mdlKey:(id)a1 hitCacheSze:(long long)a2;
- (void)onListCellDisappear:(id)a0 exist:(BOOL)a1 withList:(id)a2;
- (void)onListCellPrepareForReuse:(id)a0 withList:(id)a1;
- (void)onListCellAppear:(id)a0 withList:(id)a1;
- (void)seek:(double)a0 completion:(id /* block */)a1;
- (id)apiForFetcher:(unsigned long long)a0;
- (void)mute:(BOOL)a0;
- (void)prepareVideo:(BOOL)a0;
- (void)playerBecomeActive;
- (void)playerEnterBackground;
- (void)tryFetchVideo;
- (void)unfocusedMute:(BOOL)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)init;
- (void)stop;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)didMoveToWindow;

@end
