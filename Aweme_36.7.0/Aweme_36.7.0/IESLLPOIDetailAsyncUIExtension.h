@interface IESLLPOIDetailAsyncUIExtension : IESLLPOIBaseExtension

@property (nonatomic) struct CGPoint { double x; double y; } originalScrollViewOffset;

- (void)configWithRouterParamDict:(id)a0;
- (void)pageDidScroll:(id)a0;
- (void)pageWillBeginDragging:(id)a0;
- (void)initializeExtension;
- (id)constData;
- (id)aweNearbyModuleService;
- (void)retryAsyncUI;
- (void)poiPageRequestLocationPermissionWithConfig:(id)a0 authorizeBlk:(id /* block */)a1;
- (void)requestAsyncUI;
- (id)dataManager;

@end
