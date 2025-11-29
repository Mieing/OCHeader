@interface WeChat.CarPlayScene : MMSceneDelegate <CPTemplateApplicationSceneDelegate> {
    void /* unknown type, empty encoding */ interfaceController;
}

+ (id)shared;

- (BOOL)isCarPlayConnected;
- (void)sceneDidBecomeActive:(id)a0;
- (void)templateApplicationScene:(id)a0 didConnectInterfaceController:(id)a1;
- (void)templateApplicationScene:(id)a0 didDisconnectInterfaceController:(id)a1;
- (void)templateApplicationScene:(id)a0 didSelectNavigationAlert:(id)a1;
- (void)templateApplicationScene:(id)a0 didSelectManeuver:(id)a1;
- (void)contentStyleDidChange:(long long)a0;
- (id)initWithSceneName:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
