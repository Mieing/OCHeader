@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWELifeFeedsLynxPredecodeManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executeQueue;
@property (retain, nonatomic) NSMutableDictionary *cachedBundlesMap;

+ (id)fetchOptConfig;
+ (id)commonPredecodeTemplates;
+ (id)predecodeTemplatesForScene:(id)a0;
+ (id)sharedInstance;

- (id)cacheKeyForURL:(id)a0;
- (void)preDecodeTemplateWithUrlList:(id)a0;
- (void)preDecodeCommonTemplates;
- (id)templateBundleForURL:(id)a0;
- (void)preDecodeTemplatesWithScene:(id)a0;
- (void)preDecodeTemplateForURL:(id)a0;
- (void)setTemplateBundle:(id)a0 forURL:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
