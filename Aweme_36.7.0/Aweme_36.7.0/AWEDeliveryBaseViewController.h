@class NSDictionary, AWEDeliveryNavigationBar, NSString;

@interface AWEDeliveryBaseViewController : UIViewController <AWERouterViewControllerProtocol>

@property (copy, nonatomic) NSDictionary *routerParams;
@property (retain, nonatomic) AWEDeliveryNavigationBar *navigationBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)p_dismissAndPopViewControllerWithAnimation:(BOOL)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)viewDidLoad;
- (id)pageName;

@end
