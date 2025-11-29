@class NSString;
@protocol AWESearchServiceManagerProtocol, AWESearchResultVerticalBaseViewControllerProtocol;

@interface AWESearchVerticalContainerService : AWESearchBaseContainerService <AWESearchVerticalServiceProtocol>

@property (weak, nonatomic) id<AWESearchResultVerticalBaseViewControllerProtocol> container;
@property (weak, nonatomic) id<AWESearchServiceManagerProtocol> serviceManager;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchDataWithKeyWord:(id)a0 enterFrom:(id)a1 extraLogParams:(id)a2 isSearchByUserClick:(BOOL)a3 isFilterSearch:(BOOL)a4 animated:(BOOL)a5 completion:(id /* block */)a6;
- (void)customFeedRecieveRequestWithResponseParams:(id)a0 isLoadMore:(BOOL)a1;
- (void)customRefreshResponseCompletion:(id /* block */)a0 withParams:(id)a1;
- (void)customHandleNodeViewModelsReady:(id)a0 withResponseParams:(id)a1 isLoadmore:(BOOL)a2;
- (void)customComponentDidFinishRender:(id)a0 withViewModel:(id)a1;
- (void)handleRefreshResponseCompletion:(id /* block */)a0 withParams:(id)a1;

@end
