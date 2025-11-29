@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HunterLynxTemplateDecodeManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executeQueue;
@property (retain, nonatomic) NSMutableDictionary *LRUQueues;

+ (id)sharedInstance;

- (id)preDecodeTemplateSyncForSchema:(id)a0;
- (id)cacheKeyForSchema:(id)a0 withDomain:(id)a1;
- (id)LRUQueueForDomain:(id)a0;
- (id)domainForSchema:(id)a0;
- (void)setTemplateBundle:(id)a0 forSchema:(id)a1 withDomain:(id)a2;
- (void)invokePreDecodeCallbackForSchema:(id)a0 templateBundle:(id)a1 completion:(id /* block */)a2;
- (id)templateBundleForSchema:(id)a0;
- (void)preDecodeTemplateLocalAsyncForSchema:(id)a0 completion:(id /* block */)a1;
- (void)preDecodeTemplateRemoteAsyncForSchema:(id)a0 useMainThreadDecode:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
