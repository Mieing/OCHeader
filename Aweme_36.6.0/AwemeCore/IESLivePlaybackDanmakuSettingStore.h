@class HTSEventContext, NSString, HTSEventForwardingView, NSObject, IESLivePlaybackNewStyleDanmakuSettingConfiguration;
@protocol IESLivePlaybackDanmakuEngineSettingsProtocol;

@interface IESLivePlaybackDanmakuSettingStore : NSObject <IESLivePlaybackDanmakuSettingStoreProtocol>

@property (retain, nonatomic) IESLivePlaybackNewStyleDanmakuSettingConfiguration *playbackNewStyleConfiguration;
@property (retain, nonatomic) HTSEventForwardingView *contentView;
@property (readonly, nonatomic) NSObject<IESLivePlaybackDanmakuEngineSettingsProtocol> *danmukuEngineSettings;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) BOOL enablePortraitSetting;
@property (nonatomic) BOOL filterSwitchEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)loadConfig;
- (long long)speedType;
- (long long)fontSizeType;
- (double)channelHeight;
- (long long)alphaPercentValue;
- (void)setDanmakuContentView:(id)a0;
- (id)initWithDanmukuEngineSettings:(id)a0 context:(id)a1;
- (double)channelHeightFromFontSizeType:(long long)a0;
- (double)channelAreaHeight;
- (void)resetFontSizeTypeWithOrientation:(long long)a0;
- (void)reloadSettingsIfNeeded;
- (void)fastEnableDanmaku;
- (void)fastDisableDanmaku;
- (void)changeFontSizeType:(long long)a0;
- (void)changeAplhaPercenValue:(long long)a0;
- (void)changeSpeedType:(long long)a0;
- (void)changeAreaPercentValue:(long long)a0;
- (long long)areaPercentValue;
- (void)loadDanmakuSettingConfig;
- (void)applyNewStyleDanmakuSettingsWithConfiguration:(id)a0;
- (void)changeFontSizeType:(long long)a0 saveSetting:(BOOL)a1;
- (double)avatarImageSizeFromType:(long long)a0;
- (double)normalFontSizeFromType:(long long)a0;
- (double)giftFontSizeFromType:(long long)a0;
- (double)danmakuHeightFromFontSizeType:(long long)a0;
- (double)badgeSizeFromType:(long long)a0;
- (double)giftImageSizeFromType:(long long)a0;
- (double)giftComboNumberFontSizeFromType:(long long)a0;
- (double)giftLinkCharFontSizeFromType:(long long)a0;
- (void).cxx_destruct;
- (id)defaultConfig;
- (void)resetSettings;

@end
