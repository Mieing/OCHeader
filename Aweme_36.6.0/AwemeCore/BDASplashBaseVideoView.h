@class NSString, TTVideoEngine;
@protocol BDASplashVideoViewDelegate;

@interface BDASplashBaseVideoView : UIView <TTVideoEngineDelegate, BDASplashVideoProtocol>

@property (retain, nonatomic) TTVideoEngine *engine;
@property (nonatomic) BOOL isPrepared;
@property (weak, nonatomic) id<BDASplashVideoViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoEngineUserStopped:(id)a0;
- (void)videoEngine:(id)a0 loadStateDidChanged:(unsigned long long)a1;
- (void)videoEngineDidFinish:(id)a0 error:(id)a1;
- (void)videoEngineDidFinish:(id)a0 videoStatusException:(long long)a1;
- (void)videoEngineCloseAysncFinish:(id)a0;
- (void)videoEngineReadyToDisPlay:(id)a0;
- (void)addNotifications;
- (void)setupBaseVideoEngine;
- (void)setupVideoEngineWithVideoLocalURL:(id)a0 secretKey:(id)a1;
- (void)setupVideoEngineWithVideoRemoteURLs:(id)a0 secretKey:(id)a1;
- (void)applyGreyThemeWithImage:(id)a0;
- (void)didBecomeActive;
- (void)willResignActive;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)isPlaying;
- (void)stop;
- (double)duration;
- (double)currentTime;
- (void)layoutSubviews;
- (void)dealloc;

@end
