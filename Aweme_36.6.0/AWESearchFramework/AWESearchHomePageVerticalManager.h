@class NSString;
@protocol AWESearchResultVerticalBaseViewControllerProtocol, AWESearchServiceManagerProtocol, AWESearchHomePageHybridViewControllerProtocol;

@interface AWESearchHomePageVerticalManager : AWESearchVerticalServiceManager <AWESearchHomePageHybridServiceManagerProtocol, AWESearchHybridHomePageServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESearchResultVerticalBaseViewControllerProtocol, AWESearchHomePageHybridViewControllerProtocol> container;
@property (weak, nonatomic) id<AWESearchServiceManagerProtocol> serviceManager;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) long long priority;

- (long long)currentPageScene;
- (BOOL)searchHome_currentRefreshTipsShowing;
- (void).cxx_destruct;

@end
