@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEModelPropertyRollbackConfigStorage : NSObject {
    NSMutableDictionary *_memoryConfig;
    NSString *_configPath;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    NSObject<OS_dispatch_queue> *_fileIOQueue;
}

+ (id)sharedStorage;

- (id)getRollbackConfig;
- (void)appendFieldForModel:(id)a0 propertyKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
