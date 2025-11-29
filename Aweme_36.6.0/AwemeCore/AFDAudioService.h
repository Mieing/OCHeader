@class NSString;

@interface AFDAudioService : HTSService <AFDAudioService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)muteAwemeFeatureIsEnabled;
- (BOOL)isAwemeMute;
- (BOOL)isMuteAwemeSwitchOn;
- (void)updateMuteAwemeSwitch:(BOOL)a0 withEnterMethod:(id)a1 completion:(id /* block */)a2;
- (void)muteAwemeWithNeedShowExpendAnimation:(BOOL)a0;
- (void)cancelMuteAweme;
- (id)muteAwemeSwitchKey;
- (id)muteAwemeUsedKey;
- (void)showExpendAnimation;
- (BOOL)shouldShowExpendAnimation;
- (BOOL)cancelPreemptAudioFocusSwitch;
- (BOOL)enableCancelPreemptAudioFocusGlobalKey;
- (void)keepSecondaryAudioInTTVideoWithEnableKeepSecondaryAudio:(BOOL)a0;
- (id)registerSystemVolumeChanged:(id /* block */)a0;
- (void)removeVolumeHandlerWithIdentifier:(id)a0;
- (id)cancelAwemeMuteView;
- (void)globalMuteSceneForbidding:(BOOL)a0 scene:(long long)a1;

@end
