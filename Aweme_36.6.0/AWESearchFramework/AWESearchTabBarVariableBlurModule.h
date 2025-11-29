@class AWESearchVariableBlurConfig, NSString, AWESearchVariableBlurView;
@protocol AWESearchAIGCServiceProtocol, AWESearchResultHybridViewControllerProtocol, AWESearchServiceManagerProtocol, AWESearchResultVerticalBaseViewControllerProtocol;

@interface AWESearchTabBarVariableBlurModule : AWESearchBaseContainerService <AWESearchResultHybridModulesProtocol, AWESearchHybridHomePageServiceProtocol>

@property (retain, nonatomic) AWESearchVariableBlurView *blurView;
@property (retain, nonatomic) AWESearchVariableBlurConfig *blurConfig;
@property (weak, nonatomic) id<AWESearchAIGCServiceProtocol> aigcService;
@property (weak, nonatomic) id<AWESearchResultVerticalBaseViewControllerProtocol, AWESearchResultHybridViewControllerProtocol> container;
@property (weak, nonatomic) id<AWESearchServiceManagerProtocol> serviceManager;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupUI:(id)a0;
- (void)searchHybird_setupUI;
- (id)viewAboveBlur;
- (void).cxx_destruct;
- (void)configureView;

@end
