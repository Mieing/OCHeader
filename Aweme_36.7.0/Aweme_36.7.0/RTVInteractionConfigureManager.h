@class RTVInteractionSetting, NSString, RTVInteractionDisableNarrowModelsSetting;
@protocol RTVVoipSettingManagerInterface, RxInjector, RTVSettingsManager;

@interface RTVInteractionConfigureManager : NSObject <RTVInteractionConfigureManagerInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVSettingsManager> settingManager;
@property (retain, nonatomic) RTVInteractionSetting *interactionSettings;
@property (retain, nonatomic) RTVInteractionDisableNarrowModelsSetting *disableNarrowModelsSetting;
@property (retain, nonatomic) id<RTVVoipSettingManagerInterface> voipSettingsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (BOOL)enableInteractionFeedWindow;
- (BOOL)supportInviteOutsideUser;
- (BOOL)isSupportFeedShare;
- (double)defaultVoipVoiceVolume;
- (double)defaultFeedVideoPlayVolume;
- (double)defaultGamePlayVolume;
- (BOOL)enableNarrowView;
- (BOOL)preloadPlayerEnable;
- (BOOL)enableFeedShareMsgDoubleSend;
- (BOOL)enableFeedShareMsgDoubleReceive;
- (BOOL)shouldShowFeedTogetherPIP;
- (BOOL)disableJumpToIMWhenSendMsg;
- (BOOL)enableFeedShareExitPopConfirm;
- (BOOL)enableNarrowOptimize;
- (BOOL)enableVolumeSetting;
- (BOOL)enableEffectEmojiFullScreen;
- (BOOL)isInteractiveFusion;
- (void)__parseInteractionConfig;
- (void)__parseDisableNarrowModelsSetting;
- (id)__currentModel;
- (void).cxx_destruct;

@end
