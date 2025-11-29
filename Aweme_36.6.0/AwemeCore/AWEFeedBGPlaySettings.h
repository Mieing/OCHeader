@class NSString;

@interface AWEFeedBGPlaySettings : NSObject <AWEFeedBGPlaySettingsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)liveModuleService;
+ (BOOL)albumEnableBGPlay;
+ (BOOL)enableBGPlayComponentWithOptimize;
+ (BOOL)enableBGPlaySettings;
+ (long long)defaultUserSettingsType;
+ (long long)pinchSwitchStrategyType;
+ (BOOL)isHittingPinchSwitchStrategy;
+ (BOOL)supportPinchSwitch;
+ (BOOL)enableUserChangeSettings;
+ (id)userSettingsTypeList;
+ (id)userSettingsNameWithType:(long long)a0;
+ (BOOL)fixSmallWindowPlayTime;
+ (BOOL)enableAutoPlayInBackground;
+ (id)userSettingsTrackNameWithType:(long long)a0;
+ (id)userSettingsNameForBigFontWithType:(long long)a0;
+ (id)titleForAudioSettings;
+ (id)titleForPiPSettings;
+ (BOOL)enableBGPlayComponent;
+ (id)bgPlayOptimizeConfig;
+ (BOOL)shouldEnterBGPlayWithModel:(id)a0 currentPlayTime:(double)a1;
+ (double)videoDurationWithModel:(id)a0;
+ (id)bgplaySettingsConfig;
+ (id)userSettingsList;
+ (BOOL)updateNowPlayingInfoWhenResiginActive;
+ (BOOL)shouldShowBGPlayComponentSwitch;
+ (BOOL)shouldEnterBGPlayWithModel:(id)a0;
+ (BOOL)shouldShowAudioSwitchWithModel:(id)a0;
+ (BOOL)shouldShowPiPSwitchWithModel:(id)a0;
+ (BOOL)albumEnableBGPlayWithModel:(id)a0;
+ (BOOL)shouldShowBGPlayUniSwitch;
+ (id)subtitleForAudioSettings;
+ (id)switchStateForAudioSettings;
+ (id)subtitleForPiPSettings;
+ (id)switchStateForPiPSettings;
+ (BOOL)enableAlbumWhenAutoPlay;
+ (id)userSettingsTitle;
+ (long long)currentUserSettingsSelectedIndex;


@end
