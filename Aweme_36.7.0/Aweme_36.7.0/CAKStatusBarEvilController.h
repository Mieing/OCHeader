@class CAKEvilStatusBarInfo;

@interface CAKStatusBarEvilController : UIViewController

@property (retain, nonatomic) CAKEvilStatusBarInfo *statusBarInfo;

- (void)setStatusBarHidden:(BOOL)a0 style:(long long)a1;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)init;
- (id)initWith:(id)a0;

@end
