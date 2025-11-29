@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AWELocalLifeLynxTemplateDecodeManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executeQueue;
@property (retain, nonatomic) NSMutableDictionary *cacheDict;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *cacheSemaphore;

+ (id)sharedInstance;

- (void)setTemplateBundle:(id)a0 forURL:(id)a1;
- (id)templateBundleWithUrl:(id)a0;
- (id)cacheKeyWithUrl:(id)a0;
- (void)predecodeTemplateWithUrl:(id)a0;
- (void).cxx_destruct;
- (void)cleanCache;
- (id)init;

@end
