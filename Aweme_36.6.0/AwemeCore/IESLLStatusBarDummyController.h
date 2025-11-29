@class IESLLStatusBarDummyControllerStatusBarInfo;

@interface IESLLStatusBarDummyController : UIViewController

@property (retain, nonatomic) IESLLStatusBarDummyControllerStatusBarInfo *statusBarInfo;

- (BOOL)iesll_shouldAutorotate;
- (unsigned long long)iesll_interfaceOrientationMaskFrom:(long long)a0;
- (unsigned long long)iesll_supportedInterfaceOrientations;
- (void)setStatusBarHidden:(BOOL)a0 style:(long long)a1;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)init;
- (id)initWith:(id)a0;

@end
