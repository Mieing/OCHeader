@class AWEStatusBarDummyControllerStatusBarInfo;

@interface AWEStatusBarDummyController : UIViewController

@property (retain, nonatomic) AWEStatusBarDummyControllerStatusBarInfo *statusBarInfo;

- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)setStatusBarHidden:(BOOL)a0 style:(long long)a1;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)init;
- (id)initWith:(id)a0;

@end
