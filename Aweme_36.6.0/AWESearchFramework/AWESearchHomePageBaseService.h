@class NSString;
@protocol AWESearchResultVerticalBaseViewControllerProtocol, AWESearchServiceManagerProtocol, AWESearchHomePageHybridViewControllerProtocol;

@interface AWESearchHomePageBaseService : AWESearchVerticalContainerService <AWESearchHybridHomePageServiceProtocol>

@property (weak, nonatomic) id<AWESearchResultVerticalBaseViewControllerProtocol, AWESearchHomePageHybridViewControllerProtocol> container;
@property (weak, nonatomic) id<AWESearchServiceManagerProtocol> serviceManager;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configUI;
- (void)customFeedWillBeginDragging:(id)a0;
- (void)customFeedDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)customFeedDidEndDecelerating:(id)a0;
- (void)customFeedDidEndScrollingAnimation:(id)a0;
- (void)searchHome_willSetViewStatus:(long long)a0;
- (void)searchHome_didSetViewStatus:(long long)a0;

@end
