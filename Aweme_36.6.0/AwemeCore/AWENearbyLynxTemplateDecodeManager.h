@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWENearbyLynxTemplateDecodeManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executeQueue;
@property (retain, nonatomic) NSMutableDictionary *cachedBundlesMap;

+ (id)sharedInstance;

- (id)cacheKeyForURL:(id)a0;
- (void)preDecodeTemplateWithUrlList:(id)a0;
- (void)preDecodeTemplateWithSceneGroup:(id)a0;
- (id)templateBundleForURL:(id)a0;
- (void)preDecodeTemplateForURL:(id)a0;
- (void)setTemplateBundle:(id)a0 forURL:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
