@class LynxVideoPlayableDefaultWrapper, TTVideoEngine, NSString, BDXLynxVideoProFullScreen, NSNumber;
@protocol LynxVideoCallback;

@interface LynxVideoPlayableDefault : NSObject <TTVideoEngineDataSource, TTVideoEngineDelegate, LynxVideoPlayable>

@property (nonatomic) BOOL prepared;
@property (nonatomic) BOOL useLightPlayer;
@property (nonatomic) double lastPlayableDuration;
@property (retain, nonatomic) LynxVideoPlayableDefaultWrapper *wrapperView;
@property (retain, nonatomic) TTVideoEngine *videoEngine;
@property (retain, nonatomic) BDXLynxVideoProFullScreen *fullScreen;
@property (nonatomic) BOOL asyncDisplay;
@property (retain, nonatomic) NSString *propsDomain;
@property (retain, nonatomic) NSString *propsToken;
@property (retain, nonatomic) NSNumber *propsPauseOnHide;
@property (weak, nonatomic) id<LynxVideoCallback> lynxCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoEngineUserStopped:(id)a0;
- (void)videoEngine:(id)a0 playbackStateDidChanged:(long long)a1;
- (void)videoEngine:(id)a0 loadStateDidChanged:(unsigned long long)a1;
- (void)videoEngineDidFinish:(id)a0 error:(id)a1;
- (void)videoEngineDidFinish:(id)a0 videoStatusException:(long long)a1;
- (void)videoEngineCloseAysncFinish:(id)a0;
- (void)videoEngineReadyToDisPlay:(id)a0;
- (void)videoEngine:(id)a0 loadStateDidChanged:(unsigned long long)a1 extra:(id)a2;
- (void)videoEnginePrepared:(id)a0;
- (void)videoEngineReadyToPlay:(id)a0;
- (void)videoEngine:(id)a0 retryForError:(id)a1;
- (void)videoEngine:(id)a0 mdlKey:(id)a1 hitCacheSze:(long long)a2;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (id)apiForFetcher:(unsigned long long)a0;
- (id)getView;
- (id)initWithUsingLightPlayer:(BOOL)a0;
- (void)updatePlayParams:(id)a0;
- (void)seekTo:(double)a0 play:(BOOL)a1 callback:(id /* block */)a2;
- (void)requestFullScreen:(id /* block */)a0;
- (void)requestPortraitFullScreen:(id /* block */)a0;
- (void)exitFullScreen:(id /* block */)a0;
- (void)zoom:(BOOL)a0;
- (unsigned long long)definitionToResolution:(id)a0;
- (void)getDuration:(id /* block */)a0;
- (void)setCallback:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)stop:(id /* block */)a0;
- (void)pause:(id /* block */)a0;
- (BOOL)isPrepared;
- (void)dealloc;
- (void)play:(id /* block */)a0;
- (void)setAsync:(BOOL)a0;
- (void)prepare:(id /* block */)a0;

@end
