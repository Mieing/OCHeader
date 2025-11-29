@class NSString, GameCenterTabSettingControl_TabReport, GameCenterTabSettingControl_TabJumpLiteAppInfo, GameCenterTabSettingControl_TabJumpWeappInfo, NSMutableArray;

@interface GameCenterTabSettingControl_TabSetting : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *titleColor;
@property (retain, nonatomic) NSString *selectedTitleColor;
@property (retain, nonatomic) NSString *darkModeTitleColor;
@property (retain, nonatomic) NSString *darkModeSelectedTitleColor;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *selectedIconUrl;
@property (retain, nonatomic) NSString *darkModeIconUrl;
@property (retain, nonatomic) NSString *darkModeSelectedIconUrl;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) GameCenterTabSettingControl_TabJumpWeappInfo *jumpWeapp;
@property (retain, nonatomic) GameCenterTabSettingControl_TabReport *report;
@property (nonatomic) BOOL disablePreloadWebview;
@property (nonatomic) unsigned int preloadWebviewDelayTime;
@property (nonatomic) BOOL enableRememberExit;
@property (retain, nonatomic) NSMutableArray *cornerSettings;
@property (nonatomic) BOOL disablePreloadLiteapp;
@property (nonatomic) unsigned int preloadLiteappDelay;
@property (retain, nonatomic) GameCenterTabSettingControl_TabJumpLiteAppInfo *jumpLiteapp;

+ (void)initialize;

- (void)setJumpLiteapp:(id)a0;
- (id)jumpLiteapp;
- (void)setPreloadLiteappDelay:(unsigned int)a0;
- (unsigned int)preloadLiteappDelay;
- (void)setDisablePreloadLiteapp:(BOOL)a0;
- (BOOL)disablePreloadLiteapp;
- (void)setCornerSettings:(id)a0;
- (id)cornerSettings;
- (void)setEnableRememberExit:(BOOL)a0;
- (BOOL)enableRememberExit;
- (void)setPreloadWebviewDelayTime:(unsigned int)a0;
- (unsigned int)preloadWebviewDelayTime;
- (void)setDisablePreloadWebview:(BOOL)a0;
- (BOOL)disablePreloadWebview;
- (void)setReport:(id)a0;
- (id)report;
- (void)setJumpWeapp:(id)a0;
- (id)jumpWeapp;
- (void)setJumpUrl:(id)a0;
- (id)jumpUrl;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;
- (void)setDarkModeSelectedIconUrl:(id)a0;
- (id)darkModeSelectedIconUrl;
- (void)setDarkModeIconUrl:(id)a0;
- (id)darkModeIconUrl;
- (void)setSelectedIconUrl:(id)a0;
- (id)selectedIconUrl;
- (void)setIconUrl:(id)a0;
- (id)iconUrl;
- (void)setDarkModeSelectedTitleColor:(id)a0;
- (id)darkModeSelectedTitleColor;
- (void)setDarkModeTitleColor:(id)a0;
- (id)darkModeTitleColor;
- (void)setSelectedTitleColor:(id)a0;
- (id)selectedTitleColor;
- (void)setTitleColor:(id)a0;
- (id)titleColor;
- (void)setTitle:(id)a0;
- (id)title;
- (void)setKey:(id)a0;
- (id)key;

@end
