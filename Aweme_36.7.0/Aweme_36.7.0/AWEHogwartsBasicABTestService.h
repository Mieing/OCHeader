@class NSString;

@interface AWEHogwartsBasicABTestService : HTSService <AWEHogwartsBasicABTestService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableFirstFrameOptimize;
- (BOOL)enableRemoteRTCRender;
- (BOOL)enableAudioSessionRouteChange;
- (BOOL)enableShowGameTogetherWithPanel;
- (BOOL)enableVoipSafetyOptimize;
- (BOOL)enableDelayFirstFrameCheck;
- (BOOL)enableCancelFirstFrameCheck;
- (BOOL)enableServiceCallAudioScenarioTypeOpt;
- (id)voipWarningStrategyDic;
- (BOOL)enableSupportHamlet;
- (BOOL)enableKeepAliveRequestOpt;
- (BOOL)enableVoipToastOptV2;
- (BOOL)enableVoipTrackOpt;
- (id)voipOnTheCallOptySettings;
- (BOOL)enableVoipToastOpt;
- (BOOL)enableVoipFixAudioChangeError;
- (BOOL)enableFixAudioSessionStuttering;
- (BOOL)enableFeedShareBgPlaySwitch;
- (BOOL)enableBackgroundFloatWindowShow;
- (BOOL)enableTrackWatchTogetherSmallWindowDuration;
- (BOOL)enableFixNarrowViewAuthority;
- (BOOL)enableVoipSuppleOnTheCallScene;
- (BOOL)enableVoipBizIdSupportConfiguration;
- (BOOL)enableFixAudioMixer;
- (BOOL)enableFixWarningPanelShow;
- (BOOL)enableFixAutoHangup;
- (BOOL)enableRTVRingtone;
- (id)stickerFilterLabels;
- (BOOL)enableIllegalPublishSecurityAutoTerminal;
- (BOOL)enableIllegalCaptureSecurityAutoTerminal;
- (BOOL)enableIllegalAcceptSecurityAutoTerminal;
- (BOOL)enableCameraCaptureInBackground;
- (BOOL)fixInjectionContainer;
- (BOOL)enableFirstFrameOptimizeV2;
- (BOOL)enableAuthRequestOptimize;
- (BOOL)enableAIStickerBlockOptimize;
- (BOOL)enableRTVBigFont;
- (double)bigFontMiddleScale;
- (double)bigFontLargeScale;

@end
