@class NSString, NSMutableDictionary, HTSLiveImage, NSDictionary, NSTimer;
@protocol IESLiveInteractDynamicContainerProvider;

@interface IESLiveInteractVoiceWaveManager : NSObject <IESLiveInteractVoiceWaveRouter>

@property (retain, nonatomic) HTSLiveImage *voiceWaveThemeImage;
@property (retain, nonatomic) HTSLiveImage *audioStageSpeakingImage;
@property (copy, nonatomic) NSString *audioStageSpeakingUid;
@property (retain, nonatomic) NSMutableDictionary *voiceWaveViewDict;
@property (retain, nonatomic) NSMutableDictionary *userObserveDict;
@property (retain, nonatomic) NSMutableDictionary *guestModelDict;
@property (nonatomic) double seiDelayTime;
@property (retain, nonatomic) NSMutableDictionary *currentSpeakingSendDict;
@property (copy, nonatomic) NSDictionary *lastSpeakingSendDict;
@property (retain, nonatomic) NSTimer *voiceTimer;
@property (nonatomic) BOOL timerHasFired;
@property (weak, nonatomic) id<IESLiveInteractDynamicContainerProvider> dynamicProvider;
@property (nonatomic) BOOL animationOptimize;
@property (nonatomic) double lastCheckTime;
@property (nonatomic) BOOL videoIsPlaying;
@property (nonatomic) BOOL shouldSendSpeakingToLynx;

- (void)updateWithTheme:(id)a0;
- (void)stopAllAnimation;
- (void)startAnimationIfNeed;
- (void)updateAudioStageSpeakingAnimationForUid:(id)a0;
- (void)registerVoiceWaveView:(id)a0 withUid:(id)a1;
- (void)unRegisterVoiceWaveView:(id)a0 withUid:(id)a1;
- (void)updateVoiceWaveViewHidden:(BOOL)a0 forUid:(id)a1;
- (void)updateWithThemeForVoiceWave:(id)a0;
- (void)updateWithGuestList:(id)a0;
- (void)updateVoiceWaveResourceWithUid:(id)a0;
- (void)updateVoiceWaveThemeData;
- (void)updateGuestListVoiceWaveResource;
- (void)addUserObserverWithUser:(id)a0;
- (void)removeUserObserverWithUserID:(id)a0;
- (id)userModelWithUid:(id)a0;
- (BOOL)isVoiceWaveNeedSilenceHideWithType:(unsigned long long)a0;
- (BOOL)isUserTalkingWithUser:(id)a0;
- (void)updateSeiInfoForLinkmicId:(id)a0 isSpeaking:(BOOL)a1;
- (void)sendSpeakingSEIInfoIfNeed;
- (void)checkSpeakingSendDict;
- (id)generateSendVoiceDict;
- (BOOL)checkDifferentWithDict:(id)a0;
- (id)generateGuestInfoWithDict:(id)a0 toStop:(BOOL)a1;
- (void).cxx_destruct;
- (void)timerFired;
- (id)init;
- (void)dealloc;

@end
