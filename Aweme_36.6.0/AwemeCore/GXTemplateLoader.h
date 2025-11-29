@class GXCache, NSObject, GXTemplateReader;
@protocol OS_dispatch_queue;

@interface GXTemplateLoader : NSObject {
    NSObject<OS_dispatch_queue> *_loaderAsyncQueue;
}

@property (retain, nonatomic) GXCache *templateCache;
@property (retain, nonatomic) GXTemplateReader *templateReader;

+ (id)defaultLoader;

- (void)removeCacheTemplateForKey:(id)a0;
- (id)loadCacheTemplateForKey:(id)a0;
- (void)cacheTemplate:(id)a0 forKey:(id)a1;
- (id)loadTemplateInfoWithBizId:(id)a0 templateId:(id)a1;
- (void)loadTemplateInfoWithBizId:(id)a0 templateId:(id)a1 completion:(id /* block */)a2;
- (id)loadTemplateContenttWithFolderPath:(id)a0 templateId:(id)a1 templateVersion:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
