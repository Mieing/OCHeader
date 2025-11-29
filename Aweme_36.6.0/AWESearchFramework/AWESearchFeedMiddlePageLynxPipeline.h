@interface AWESearchFeedMiddlePageLynxPipeline : AWESearchCachalotLynxPipeline

+ (BOOL)enableSearchSessionIDOpt;

- (BOOL)useTemplateBundle;
- (id)templateBundleLoadListBeforeRequest;

@end
