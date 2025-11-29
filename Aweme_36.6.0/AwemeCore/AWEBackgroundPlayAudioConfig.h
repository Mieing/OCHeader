@class AWEBackgroundPlaySettingsCellModel, AWEBackgroundPlaySettingsConfig, NSDictionary, AWEAwemeModel, NSString;
@protocol AWEBackgroundPlayAudioConfigDelegate;

@interface AWEBackgroundPlayAudioConfig : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEBackgroundPlaySettingsConfig *userSettingsConfig;
@property (retain, nonatomic) AWEBackgroundPlaySettingsCellModel *userSettingsCellModel;
@property (retain, nonatomic) AWEBackgroundPlaySettingsCellModel *allSceneCellModel;
@property (retain, nonatomic) AWEBackgroundPlaySettingsCellModel *pinchSceneCellModel;
@property (copy, nonatomic) NSDictionary *logExtraParams;
@property (nonatomic) long long section;
@property (nonatomic) BOOL hideToast;
@property (nonatomic) BOOL hideIcon;
@property (weak, nonatomic) id<AWEBackgroundPlayAudioConfigDelegate> delegate;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) id /* block */ audioSwitchDidChanged;

+ (BOOL)shouldShowBGPlayAudioSwitchWithModel:(id)a0;

- (id)commonTrackParams;
- (void)onSwitchChanged:(BOOL)a0;
- (id)configCellModelWithAwemeModel:(id)a0;
- (id)configSwitchCellModel;
- (id)configSupportAllSceneCellModel;
- (id)configSupportPinchSceneCellModel;
- (void)trackBackgroundPlayAudioShow;
- (void)trackChangeBackgroundPlayAudioSwitch:(BOOL)a0 bgPlaySettings:(id)a1;
- (id)cellModelForSettingsConfig;
- (id)cellModelWithAwemeModel:(id)a0;
- (id)cellModelsForPinchSwitchWithAwemeModel:(id)a0;
- (void).cxx_destruct;

@end
