@class AVAudioSessionRouteDescription, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, WCAudioSessionDelegate;

@interface WCAudioSession : MMRootService <MMServiceProtocol>

@property (weak, nonatomic) id<WCAudioSessionDelegate> m_delegate;
@property (nonatomic) BOOL m_otherPlayingBeforeActive;
@property (retain, nonatomic) NSMutableDictionary *categoryOptionsDict;
@property (retain, nonatomic) AVAudioSessionRouteDescription *currentRoute;
@property (retain, nonatomic) NSString *currentCategory;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioSessionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)portNameWithOutputs:(id)a0;
+ (unsigned long long)deviceModeWithOutputs:(id)a0;
+ (unsigned long long)audioModeWithRouteChange:(id)a0;

- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)otherPlayingBeforeActive;
- (void)updateDelegate:(id)a0;
- (void)restart;
- (void)asyncSetActive:(BOOL)a0;
- (BOOL)setActive:(BOOL)a0;
- (BOOL)setActive:(BOOL)a0 error:(id *)a1;
- (BOOL)setActive:(BOOL)a0 stopPlayCheck:(BOOL)a1 error:(id *)a2;
- (BOOL)setCategroy:(unsigned long long)a0;
- (BOOL)setCategroy:(unsigned long long)a0 options:(unsigned long long)a1;
- (BOOL)setCategroy:(unsigned long long)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setCategroy:(unsigned long long)a0 defaultToSpeaker:(BOOL)a1 mixWithOthers:(BOOL)a2;
- (BOOL)setCategroy:(unsigned long long)a0 defaultToSpeaker:(BOOL)a1 mixWithOthers:(BOOL)a2 forceUseBuiltinMic:(BOOL)a3;
- (BOOL)setCategroy:(unsigned long long)a0 mode:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (BOOL)setCategroy:(unsigned long long)a0 withBlockType:(unsigned long long)a1;
- (BOOL)setCategroy:(unsigned long long)a0 options:(unsigned long long)a1 withBlockType:(unsigned long long)a2;
- (BOOL)setCategroy:(unsigned long long)a0 options:(unsigned long long)a1 error:(id *)a2 withBlockType:(unsigned long long)a3;
- (BOOL)setCategroy:(unsigned long long)a0 mode:(id)a1 options:(unsigned long long)a2 error:(id *)a3 withBlockType:(unsigned long long)a4;
- (BOOL)setCategroy:(unsigned long long)a0 mode:(id)a1 options:(unsigned long long)a2 forceUseBuiltinMic:(BOOL)a3 error:(id *)a4 withBlockType:(unsigned long long)a5;
- (BOOL)setCategroy:(unsigned long long)a0 mode:(id)a1 options:(unsigned long long)a2 optionsForbidModify:(BOOL)a3 forceUseBuiltinMic:(BOOL)a4 error:(id *)a5 withBlockType:(unsigned long long)a6;
- (void)reportSetCategoryError:(id)a0;
- (void)activeMixWithOtherAudio;
- (void)activePlaybackDuckOthers;
- (void)activePlayAndRecordDuckOthers;
- (BOOL)setMode:(id)a0 error:(id *)a1;
- (BOOL)setSpeaker:(BOOL)a0;
- (BOOL)setSpeaker:(BOOL)a0 error:(id *)a1;
- (id)getCurrentAudioPortDescription;
- (unsigned long long)getCurrentAudioMode;
- (unsigned long long)getCacheAudioMode;
- (unsigned long long)audioModeWithSessionDesciption:(id)a0;
- (BOOL)isOtherAudioPlaying;
- (float)getOutputVolume;
- (id)currentRecordCategory;
- (unsigned long long)currentCategoryId;
- (id)getBuiltInMicInputDataSource:(id)a0;
- (BOOL)switchBuiltInMicDataSource:(id)a0;
- (BOOL)switchPreferredInputPort:(id)a0;
- (void)ayncClearInputPortSet;
- (BOOL)setAllowHapticsAndSystemSoundsDuringRecording:(BOOL)a0;
- (void)onAudioSessionRouteChange:(id)a0;
- (void)handleRouteChange:(id)a0;
- (void)print:(id)a0 ignoreInputsPortDescription:(BOOL)a1;
- (void)print:(id)a0;
- (void)saveCategoryOptions:(unsigned int)a0;
- (void)restoreCategoryOptions:(unsigned int)a0;
- (void).cxx_destruct;

@end
