@class NSMapTable, NSString, NSMutableArray, UIViewController;

@interface MMAppSceneMgr : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) NSMapTable *scenes;
@property (retain, nonatomic) NSMutableArray *unscenedMainWindows;
@property (nonatomic) BOOL closeSubSceneWhenDismissToRoot;
@property (retain, nonatomic) UIViewController *subSceneViewController;
@property (nonatomic) BOOL isMovingToSubScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)addUnscenedMainWindow:(id)a0;
- (BOOL)isMainSceneCreated;
- (BOOL)isSubSceneCreated;
- (BOOL)isCarPlaySceneCreated;
- (BOOL)canCreateSubScene;
- (id)getSubSceneBizViewController;
- (BOOL)isViewControllerMovingToOtherScene:(id)a0;
- (BOOL)shouldCloseSubSceneAtDismiss;
- (void)closeSubScene;
- (void)removeSceneDelegateForName:(id)a0;
- (id)sceneDelegateForName:(id)a0;
- (void)addSceneDelegate:(id)a0 name:(id)a1;
- (void)moveViewControllerToSubScene:(id)a0;
- (void)moveViewControllerToMainScene:(id)a0;
- (void)showViewController:(id)a0 from:(id)a1 complete:(id /* block */)a2;
- (BOOL)isRootBizViewControllerInSubScene:(id)a0;
- (void)requestSceneWithSession:(id)a0;
- (void)requestSceneWithSession:(id)a0 onFail:(id /* block */)a1;
- (void)requestSceneDestructionWithSession:(id)a0;
- (void)screenDidConnect:(id)a0;
- (void)screenDidDisconnect:(id)a0;
- (void)screenModeDidChange:(id)a0;
- (void).cxx_destruct;

@end
