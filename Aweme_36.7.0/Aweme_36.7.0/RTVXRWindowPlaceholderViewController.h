@protocol RxInjector, RTVNarrowViewHelperInterface;

@interface RTVXRWindowPlaceholderViewController : UIViewController

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVNarrowViewHelperInterface> narrowViewHelper;

- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)rxAwakeFromPropertyInjection;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
