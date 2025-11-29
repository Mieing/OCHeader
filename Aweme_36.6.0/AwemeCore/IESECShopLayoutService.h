@class IESECPagerView, IESECServiceProxy, NSString, UIView, IESECShopTopTabView, UIViewController;
@protocol IESECShopContainerViewControllerV2, IESECShopForwardCoService;

@interface IESECShopLayoutService : IESECShopService <IESECShopLayoutService>

@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *forwardCoService;
@property (readonly, weak, nonatomic) UIView *rootView;
@property (readonly, weak, nonatomic) UIView *containerView;
@property (readonly, weak, nonatomic) UIViewController<IESECShopContainerViewControllerV2> *container;
@property (readonly, weak, nonatomic) UIView *bottomTabView;
@property (readonly, weak, nonatomic) IESECShopTopTabView *topTabView;
@property (readonly, weak, nonatomic) IESECPagerView *pagerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configContainer:(id)a0;
- (void)configRootView:(id)a0;
- (void)configContainerView:(id)a0;
- (void)configPagerView:(id)a0;
- (void)configBottomTabView:(id)a0;
- (void)configTopTabView:(id)a0;
- (void).cxx_destruct;

@end
