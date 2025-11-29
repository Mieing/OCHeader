@class NSDictionary, NSString;
@protocol IESLivePlayerSettings, IESLiveSettings;

@interface IESLiveStreamPlayerSettingsPlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerSettingsPluginProtocol>

@property (retain, nonatomic) id<IESLiveSettings> liveSettings;
@property (retain, nonatomic) id<IESLivePlayerSettings> ttPlayerSetting;
@property (copy, nonatomic) NSDictionary *showAniSettings;
@property (nonatomic) long long ntpDiffTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (void)updateTTPlayerSDKSettings;
- (void)pe_bizHostDidInit;
- (void)pe_commonInit;
- (BOOL)enableShowAnimate;
- (double)showAnimateDuration;
- (void).cxx_destruct;

@end
