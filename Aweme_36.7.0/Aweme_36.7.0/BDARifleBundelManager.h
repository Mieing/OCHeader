@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface BDARifleBundelManager : NSObject {
    long long _templateBundleSizeLimit;
}

@property (retain, nonatomic) NSCache *bundleCaches;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *storageQueue;

+ (id)sharedInstance;

- (id)cacheKeyFromAccesskey:(id)a0 channel:(id)a1 bundle:(id)a2 surl:(id)a3;
- (id)templateBundleWithAccesskey:(id)a0 urlString:(id)a1;
- (void)saveTemplateBundleWithRifleResource:(id)a0 rvProfiler:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
