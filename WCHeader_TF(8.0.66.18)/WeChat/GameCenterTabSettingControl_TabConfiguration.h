@class NSString, GameCenterTabSettingControl_TabDefaultConfiguration, GameCenterTabSettingControl_HomeBarConfiguration, NSMutableArray;

@interface GameCenterTabSettingControl_TabConfiguration : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *tabList;
@property (retain, nonatomic) GameCenterTabSettingControl_TabDefaultConfiguration *defaultTab;
@property (retain, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) NSString *darkModeBackgroundColor;
@property (retain, nonatomic) GameCenterTabSettingControl_HomeBarConfiguration *homeBar;

+ (void)initialize;

- (void)setHomeBar:(id)a0;
- (id)homeBar;
- (void)setDarkModeBackgroundColor:(id)a0;
- (id)darkModeBackgroundColor;
- (void)setBackgroundColor:(id)a0;
- (id)backgroundColor;
- (void)setDefaultTab:(id)a0;
- (id)defaultTab;
- (void)setTabList:(id)a0;
- (id)tabList;

@end
