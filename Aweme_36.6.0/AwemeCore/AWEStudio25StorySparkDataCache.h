@class NSMutableSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEStudio25StorySparkDataCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *dataCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (retain, nonatomic) NSMutableSet *runningLoadServices;
@property (retain, nonatomic) NSMutableSet *preloadedSchemaHashes;

+ (id)sharedInstance;

- (void)preloadWithSchema:(id)a0;
- (id)objectWithClass:(Class)a0 dictionary:(id)a1;
- (id)resourceModelWithSpark:(id)a0;
- (BOOL)isSchemaPreloaded:(id)a0;
- (void)preloadWithSparkData:(id)a0 schema:(id)a1;
- (void)preloadSparkTemplateList:(id)a0 schema:(id)a1;
- (void)trackPreloadStartWithSchema:(id)a0;
- (void)trackPreloadSuccessWithSchema:(id)a0 duration:(double)a1;
- (void).cxx_destruct;
- (id)init;

@end
