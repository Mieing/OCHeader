@class NSString, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue;

@interface TIMXDBConversationORMBatchUpdateExecutor : NSObject {
    TIMXSDKInstance *_r;
}

@property (copy, nonatomic) NSString *uid;
@property unsigned long long processedNormalConvCount;
@property unsigned long long processedStrangerConvCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

- (id /* block */)alterBlockWithBlock:(id /* block */)a0 plugins:(id)a1;
- (void)asyncBatchUpdateWithPluginsCoreForStrangerConversation_recursive:(id)a0 strangerVersion:(long long)a1 completion:(id /* block */)a2;
- (void)asyncBatchUpdateWithPluginsForNormalConversation_recursive:(id)a0 sortOrder:(long long)a1 completion:(id /* block */)a2;
- (id)initWithRootObject:(id)a0 uid:(id)a1;
- (void)syncBatchUpdateWithPlugins:(id)a0 needBatchUpdateStranger:(BOOL)a1 completion:(id /* block */)a2;
- (void)asyncBatchUpdateWithPlugins:(id)a0 needBatchUpdateStranger:(BOOL)a1 normalConvCallback:(id /* block */)a2 strangerConvCompletion:(id /* block */)a3;
- (void).cxx_destruct;

@end
