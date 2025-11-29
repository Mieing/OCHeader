@class GXCache, GXTemplateReader, NSObject;
@protocol OS_dispatch_queue;

@interface AWELiveLifeGXTemplateLoader : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loaderAsyncQueue;
@property (retain, nonatomic) GXCache *templateCache;
@property (retain, nonatomic) GXTemplateReader *templateReader;

+ (id)defaultLoader;

- (void)removeCacheTemplateForKey:(id)a0;
- (id)loadCacheTemplateForKey:(id)a0;
- (void)cacheTemplate:(id)a0 forKey:(id)a1;
- (BOOL)validCacheExist:(id)a0;
- (void)cleanEmptyTemplateCache;
- (void)loadCacheIfneededWithTemplateItem:(id)a0;
- (id)cacheKeyWithTemplateId:(id)a0 version:(id)a1;
- (void)loadTemplateInfoWithTemplateItem:(id)a0 completion:(id /* block */)a1;
- (id)loadTemplateInfoWithPath:(id)a0 templateId:(id)a1 version:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
