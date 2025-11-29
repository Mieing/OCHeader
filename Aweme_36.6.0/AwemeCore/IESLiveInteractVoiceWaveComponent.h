@class NSString, IESLiveInteractVoiceWaveManager;

@interface IESLiveInteractVoiceWaveComponent : IESLiveInteractComponentBase <IESLiveInteractVoiceWaveRouter, IESLiveRoomThemeActions, IESLiveAudioBackgroundActions, IESLiveAudioKTVBackgroundActions>

@property (retain, nonatomic) IESLiveInteractVoiceWaveManager *voiceWaveManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)updateWithTheme:(id)a0;
- (void)roomThemeNeedRefresh;
- (void)updateRoomThemeDataWithType:(long long)a0;
- (void)updateAudienceRoomThemeData;
- (void)refreshMatchRoomLandscapeTheme:(BOOL)a0;
- (void)joinIconDidChangeWithURLs:(id)a0;
- (void)componentBindContext;
- (void)updateAudioStageSpeakingAnimationForUid:(id)a0;
- (void)registerVoiceWaveView:(id)a0 withUid:(id)a1;
- (void)unRegisterVoiceWaveView:(id)a0 withUid:(id)a1;
- (void)updateVoiceWaveViewHidden:(BOOL)a0 forUid:(id)a1;
- (void)updateWithThemeForVoiceWave:(id)a0;
- (void)componentStartLayout:(id)a0;
- (void)componentDidUpdatedGuestList:(id)a0;
- (void)componentDidChangedFromLayout:(id)a0 toLayout:(id)a1;
- (void).cxx_destruct;

@end
