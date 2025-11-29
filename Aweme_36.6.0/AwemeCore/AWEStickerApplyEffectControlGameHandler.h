@class AWEVideoGameCameraContainerView, IESEffectModel, NSString;
@protocol ACCRecordSelectMusicService, ACCMusicModelProtocol;

@interface AWEStickerApplyEffectControlGameHandler : AWEStickerApplyBaseHandler <ACCRecordPropServiceSubscriber, ACCEffectEvent>

@property (nonatomic) BOOL gameStarted;
@property (nonatomic) long long gamePreviousCameraMode;
@property (nonatomic) BOOL isMicrophoneMuted;
@property (nonatomic) BOOL gameHasNoGuideVide;
@property (retain, nonatomic) AWEVideoGameCameraContainerView *gameCameraContainer;
@property (retain, nonatomic) IESEffectModel *currentSticker;
@property (retain, nonatomic) IESEffectModel *restoreSticker;
@property (retain, nonatomic) id<ACCRecordSelectMusicService> musicService;
@property (retain, nonatomic) id<ACCMusicModelProtocol> oldSelectedMusic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)propServiceWillApplyProp:(id)a0 propSource:(long long)a1;
- (void)enterGame;
- (void)onEffectMessageReceived:(id)a0;
- (void)handlerDidBecomeActive;
- (BOOL)p_shouldHandleMessage:(id)a0;
- (void)finishAndExportGame;
- (void)p_sendLoadTimesMessageToEffectWithArg:(id)a0;
- (void)p_resetProp;
- (id)p_exchangeSelectedMusicForBackup:(BOOL)a0;
- (long long)p_updateEffectLoadTimes;
- (id)p_dictionaryWithJsonString:(id)a0;
- (void)showGameCameraContainer;
- (void)backupRecordContextForGame;
- (void)dismissGameCameraContainer;
- (void)restoreRecordContextForGame;
- (void)resetGame;
- (void)quitGame;
- (void)p_backupMusic;
- (void)p_restoreMusic;
- (void).cxx_destruct;
- (void)startGame;
- (void)p_addObservers;

@end
