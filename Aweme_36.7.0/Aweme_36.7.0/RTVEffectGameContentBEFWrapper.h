@class NSString, NSMutableDictionary, RxScheduler, RTVXRBaseBusinessHandler, BEFView, NSArray, NSNumber;
@protocol RTVEffectGameContentBEFWrapperDelegate, RTVXRRoomSessionControllerInterface, RTVXRControllerInjector, RTVEffectGamePlayAudioWrapper;

@interface RTVEffectGameContentBEFWrapper : UIView <RTVEffectGameContentBEFWrapper, BEFViewDelegate, RTVXRControllerInterface>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) RTVXRBaseBusinessHandler<RTVXRRoomSessionControllerInterface> *roomController;
@property (readonly, nonatomic) id<RTVEffectGamePlayAudioWrapper> playAudioWrapper;
@property (readonly, nonatomic) BEFView *beefView;
@property (readonly, nonatomic) NSMutableDictionary *deferMap;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, copy, nonatomic) NSArray *audioPaths;
@property (nonatomic) BOOL preloadedAudioPaused;
@property (retain, nonatomic) NSNumber *active;
@property (weak, nonatomic) id<RTVEffectGameContentBEFWrapperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)__addObserver;
- (void)__createComponents;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (BOOL)msgProc:(unsigned int)a0 arg1:(long long)a1 arg2:(long long)a2 arg3:(const char *)a3;
- (void)__appDidBecomeActive;
- (void)__appDidEnterBackground;
- (void)adjustGameAudioVolume:(double)a0;
- (void)__resumePreloadedAudio;
- (void)__pausePreloadedAudio;
- (id)__getDeferForKey:(id)a0;
- (id)__setDefer:(id)a0 forKey:(id)a1;
- (void)__createBEFView;
- (id)__stopPreloadedAudio;
- (void)__gameLoadFinishWithInfoString:(id)a0;
- (void)__gameJoinRoomResult:(BOOL)a0 infoString:(id)a1;
- (void)__gameNewPlayerJoinWithInfoString:(id)a0;
- (void)__gameStartWithInfoString:(id)a0;
- (void)__oneQuitWithInfoString:(id)a0;
- (void)__gamePauseWithInfoString:(id)a0;
- (void)__gameEndWithInfoString:(id)a0;
- (void)__gameServerErrorWithInfoString:(id)a0;
- (void)__changeGameWithInfoString:(id)a0;
- (void)__quitGameWithInfoString:(id)a0;
- (void)__inputFieldShow:(BOOL)a0 withinfoString:(id)a1;
- (void)__gameAudioListWithInfoString:(id)a0;
- (void)__playAudioWithLoop:(BOOL)a0 infoString:(id)a1;
- (void)__replayAudioWithLoop:(BOOL)a0 infoString:(id)a1;
- (void)__stopAudioWithInfoString:(id)a0;
- (void)__pauseAudioWithInfoString:(id)a0;
- (void)__resumeAudioWithInfoString:(id)a0;
- (void)__reconnectResult:(BOOL)a0 infoString:(id)a1;
- (id)releaseWrapper;
- (id)loadGameWithFilePath:(id)a0;
- (id)joinGameWithModel:(id)a0;
- (id)waitGameStart;
- (id)inputText:(id)a0 needClose:(BOOL)a1;
- (id)reconnectWithModel:(id)a0;
- (void)pauseAudioIfNeeded;
- (void)resumeAudioIfNeeded;
- (void)stopAndUnloadAllAudio;
- (void)beActive:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
