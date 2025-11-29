@interface MMMainSceneDelegate : MMSceneDelegate

- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (void)handleOpenEvent:(id)a0;
- (id)window;
- (void)sceneDidDisconnect:(id)a0;
- (void)sceneWillEnterForeground:(id)a0;
- (void)sceneDidBecomeActive:(id)a0;
- (void)sceneWillResignActive:(id)a0;
- (void)sceneDidEnterBackground:(id)a0;
- (void)scene:(id)a0 openURLContexts:(id)a1;
- (void)scene:(id)a0 willContinueUserActivityWithType:(id)a1;
- (void)scene:(id)a0 continueUserActivity:(id)a1;
- (void)scene:(id)a0 didFailToContinueUserActivityWithType:(id)a1 error:(id)a2;
- (void)windowScene:(id)a0 performActionForShortcutItem:(id)a1 completionHandler:(id /* block */)a2;
- (void)windowScene:(id)a0 didUpdateCoordinateSpace:(id)a1 interfaceOrientation:(long long)a2 traitCollection:(id)a3;

@end
