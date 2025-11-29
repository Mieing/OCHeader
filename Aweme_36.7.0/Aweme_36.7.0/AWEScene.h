@class UIView, AWESceneStack;

@interface AWEScene : NSObject

@property (weak, nonatomic) AWESceneStack *sceneStack;
@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) AWEScene *nextScene;

- (void)moveSubview:(id)a0;
- (void)removeSubview:(id)a0;
- (void)sceneDidLoad:(id)a0;
- (void)sceneWillApper:(id)a0 operation:(long long)a1 duration:(double)a2;
- (void)sceneDidApper:(id)a0 operation:(long long)a1;
- (void)sceneWillDisapper:(id)a0 operation:(long long)a1 duration:(double)a2;
- (void)sceneDidDisapper:(id)a0 operation:(long long)a1;
- (void)sceneDidUnload:(id)a0;
- (void)sceneVc_viewWillAppear:(BOOL)a0;
- (void)sceneVc_viewDidAppear:(BOOL)a0;
- (void)sceneVc_viewWillDisappear:(BOOL)a0;
- (void)sceneVc_viewDidDisappear:(BOOL)a0;
- (void)sceneVc_enterBackgroundNotification;
- (void)sceneVc_enterForegroundNotification;
- (void).cxx_destruct;
- (void)addSubview:(id)a0;

@end
