@interface AWEIMUIPreferredReadonlyPropertiesViewController : UIViewController

@property (nonatomic) BOOL innerPrefersStatusBarHidden;
@property (nonatomic) BOOL prefersStatusBarHidden;

- (BOOL)prefersStatusBarHidden;
- (void)setPrefersStatusBarHidden:(BOOL)a0;

@end
