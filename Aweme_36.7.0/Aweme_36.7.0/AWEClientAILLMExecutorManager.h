@class NSMutableDictionary;

@interface AWEClientAILLMExecutorManager : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (retain, nonatomic) NSMutableDictionary *executorMap;

+ (id)sharedInstance;

- (id)createExecutorWithSceneModelName:(id)a0;
- (id)executorWithSceneModelName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
