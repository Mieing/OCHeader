@interface IESLLPOICityDetailExtensionV2 : IESLLPOIBaseExtension

@property (nonatomic) BOOL didCityFeedTabTriggerScroll;

- (id)poiDetail;
- (void)bindActionAndState;
- (void)initializeExtension;
- (id)constData;
- (id)poiBizContainerRequestParams;
- (void)registerBizAgent;
- (id)init;

@end
