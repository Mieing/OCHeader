@class NSString, NSCache, NSMutableDictionary;

@interface IESLLTempoTextV2RendererCache : NSObject <NSCacheDelegate> {
    NSCache *_cache;
    NSMutableDictionary *_attrStringRenderers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cache;

- (id)rendererWithString:(id)a0 layoutSpec:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;
- (void)cache:(id)a0 willEvictObject:(id)a1;

@end
