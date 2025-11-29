@class UIWindow, NSString, UIWindowScene, UISceneSession;

@interface MMSceneDelegate : UIResponder <UIWindowSceneDelegate>

@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) NSString *sceneName;
@property (weak, nonatomic) UISceneSession *sceneSession;
@property (weak, nonatomic) UIWindowScene *windowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSceneName:(id)a0;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (void)sceneDidDisconnect:(id)a0;
- (void)windowScene:(id)a0 didUpdateCoordinateSpace:(id)a1 interfaceOrientation:(long long)a2 traitCollection:(id)a3;
- (BOOL)isMainScene;
- (void)updateSceneBizViewController:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
