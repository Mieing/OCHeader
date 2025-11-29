@class AWEEvilStatusBarInfo;

@interface AWEStatusBarEvilController : UIViewController

@property (retain, nonatomic) AWEEvilStatusBarInfo *statusBarInfo;

- (void)setStatusBarHidden:(BOOL)a0 style:(long long)a1;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)init;
- (id)initWith:(id)a0;

@end
