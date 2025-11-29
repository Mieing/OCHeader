@class GameCenterTabSettingControl_TabConfiguration;

@interface GameLifeTabBarLogicController : MMObject {
    GameCenterTabSettingControl_TabConfiguration *_defaultTabConfiguration;
}

- (id)init;
- (void)initDefaultTabConfiguration;
- (id)getTabConfiguration;
- (id)getTabConfigurationFromGlobalConfig;
- (id)getTabStyleConfiguration;
- (void).cxx_destruct;

@end
