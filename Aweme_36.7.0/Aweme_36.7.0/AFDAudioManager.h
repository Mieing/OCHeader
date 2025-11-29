@class NSNumber, NSString;

@interface AFDAudioManager : NSObject <AWEDigitalWellbeingMessage, AWERTVMessage, AWEUserMessage, AFDAudioManagerProtocol>

@property (nonatomic) BOOL isMute;
@property (retain, nonatomic) NSNumber *volumeHandlerID;
@property (nonatomic) BOOL needShowExpendAnimation;
@property (nonatomic) double lastUnactivedTimestamp;
@property (nonatomic) BOOL isInForbiddingScene;
@property (nonatomic) BOOL needRecoveryGlobalMute;
@property (nonatomic) long long forbidMuteScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)muteAwemeFeatureIsEnabled;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (id)audioManager;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)muteAwemeWithNeedShowExpendAnimation:(BOOL)a0;
- (void)showExpendAnimation;
- (BOOL)shouldShowExpendAnimation;
- (BOOL)enableCancelPreemptAudioFocusGlobalKey;
- (void)keepSecondaryAudioInTTVideoWithEnableKeepSecondaryAudio:(BOOL)a0;
- (void)onVolumeChangeNotification:(id)a0;
- (id)systemVolumeDidChangeNotification;
- (id)audioCategoryNotificationParameter;
- (id)changeReasonNotificationParameter;
- (void)p_addObserver;
- (void)globalMuteSceneForbidding:(BOOL)a0 scene:(long long)a1;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)voiceOverStatusChanged:(id)a0;
- (void)p_applicationWillEnterForeground;
- (void)rtvServiceWillBegin:(id)a0;
- (void)rtvServiceDidBegin:(id)a0;
- (void)rtvServiceWillFinish:(id)a0;
- (void)rtvServiceDidFinish:(id)a0;
- (BOOL)afd_allowMuteWhenVoiceOverRunning;
- (BOOL)enableTrackAdjustVolumeSinceColdStart;
- (BOOL)enableMuteAwemeCancelHideVolumeSlider;
- (BOOL)isGlobalMuteSysVolumeShow;
- (BOOL)cancelMuteAwemeUseSystemVolume;
- (void)afd_trackSilenceLaunchApp:(BOOL)a0;
- (void)trackAdjustVolumeSinceColdStartIfNeeded;
- (void)trackQuitSilenceModeClickWithEventType:(id)a0;
- (void)afd_trackWarmLaunchApp;
- (void)trackClickSystemVolumeButtonWithFailedReason:(id)a0;
- (BOOL)isInSpecialMode;
- (BOOL)isValidPlaying;
- (void)initMuteAweme;
- (void)enableSDKGlobalMuteFeatureIfNeeded;
- (void)p_registerMessage;
- (void)p_muteAweme;
- (void)p_unmuteAwemeForced:(BOOL)a0 completion:(id /* block */)a1;
- (void)p_setSystemVolumeViewHidden:(BOOL)a0;
- (void)keepSecondaryAudioInLiveVideoWithEnableKeepSecondaryAudio:(BOOL)a0;
- (void)p_resumeVolume;
- (void)p_changeVolume:(double)a0 completion:(id /* block */)a1;
- (void)observerSystemVolumeChanged:(id /* block */)a0;
- (void)p_applicationEnterBackground;
- (void)p_muteAwemeAfterWarmStartIfNeeded;
- (void)unmuteAweme;
- (void)createAndHideSysVolumeViewIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
