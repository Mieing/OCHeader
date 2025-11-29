@class MMMainSceneDelegate;

@interface MMSubSceneDelegate : MMSceneDelegate

@property (retain, nonatomic) MMMainSceneDelegate *mainSceneDelegate;

- (void)updateSceneBizViewController:(id)a0 completion:(id /* block */)a1;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (void)sceneDidDisconnect:(id)a0;
- (void)sceneWillEnterForeground:(id)a0;
- (void)sceneDidBecomeActive:(id)a0;
- (void)sceneWillResignActive:(id)a0;
- (void)sceneDidEnterBackground:(id)a0;
- (void)windowScene:(id)a0 didUpdateCoordinateSpace:(id)a1 interfaceOrientation:(long long)a2 traitCollection:(id)a3;
- (void).cxx_destruct;

@end
