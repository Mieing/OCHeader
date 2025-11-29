@class NSMutableDictionary;
@protocol SECHybridPluginObserver;

@interface SECHybridPluginCenter : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _registerLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _instanceLock;
}

@property (retain, nonatomic) NSMutableDictionary *registeredPlugins;
@property (retain, nonatomic) NSMutableDictionary *pluginInstances;
@property (weak) id<SECHybridPluginObserver> observer;

+ (id)sharedCenter;

- (BOOL)registerClass:(Class)a0 forPlugin:(id)a1;
- (id)allPluginsForProtocol:(id)a0;
- (id)findPluginByClass:(Class)a0 autoCreate:(BOOL)a1;
- (BOOL)registerPlugin:(id)a0 forProtocol:(id)a1;
- (id)findPluginByClass:(Class)a0;
- (void).cxx_destruct;
- (id)init;

@end
