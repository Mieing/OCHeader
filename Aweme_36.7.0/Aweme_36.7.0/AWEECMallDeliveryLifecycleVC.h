@class NSDictionary, UIViewController;

@interface AWEECMallDeliveryLifecycleVC : UIViewController {
    BOOL _isFirstViewWillAppear;
    BOOL _isFirstViewDidAppear;
    Class _pageDisplayCycle;
}

@property (copy, nonatomic) NSDictionary *routerParams;
@property (weak, nonatomic) UIViewController *fromVC;

- (void)hostInjectionViewWillDisappear;
- (void)hostInjectionDidOpenPage;
- (void)hostInjectionWillClosePage;
- (void)hostInjectionWillOpenNextPage;
- (void)hostInjectionPageWillAppearAgain;
- (long long)currentPageContentMode;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)extraInfo;

@end
