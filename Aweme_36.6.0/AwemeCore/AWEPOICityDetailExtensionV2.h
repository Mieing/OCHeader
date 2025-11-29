@interface AWEPOICityDetailExtensionV2 : AWEPOIBaseExtension

@property (nonatomic) BOOL didCityFeedTabTriggerScroll;

- (id)poiDetail;
- (void)bindActionAndState;
- (void)initializeExtension;
- (id)constData;
- (id)poiBizContainerRequestParams;
- (void)registerBizAgent;
- (id)init;

@end
