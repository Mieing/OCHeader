@interface AWEGDContainerPrefetchImageManager : NSObject

+ (id)sharedInstance;

- (void)prefetchImageWithData:(id)a0 ruleArray:(id)a1;
- (void)parseNodesDataWithNodesData:(id)a0 rule:(id)a1;
- (id)valueForJSONKeyPathWithKeyPath:(id)a0 json:(id)a1;
- (void)preloadImageWithImgPath:(id)a0;
- (void)triggerPrefetchImageWithParams:(id)a0 headers:(id)a1 cache:(BOOL)a2;

@end
