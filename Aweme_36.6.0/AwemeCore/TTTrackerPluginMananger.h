@class NSMutableDictionary, NSDictionary, NSHashTable, NSObject, NSLock;
@protocol OS_dispatch_queue, BDTrackerPluginCompression, BDTrackerPluginSampling;

@interface TTTrackerPluginMananger : NSObject {
    NSMutableDictionary *registerPlugins;
    NSDictionary *pluginInstances;
    id<BDTrackerPluginCompression> zstdPlugin;
    id<BDTrackerPluginSampling> samplingPlugin;
    NSObject<OS_dispatch_queue> *event_state_queue;
    NSHashTable *eventObservers;
    NSHashTable *settingsObservers;
    double applogLastestFlushTime;
    BOOL isBusy;
    NSHashTable *priorityTimerObservers;
    NSHashTable *priorityConfigObservers;
    NSLock *locker;
    BOOL pluginInitialized;
}

- (id)priorityManager;
- (void)notifyPriorityUpdated:(id)a0;
- (void)notifyEventUpdated:(id)a0 withState:(long long)a1 userInfo:(id)a2;
- (id)forwardManager;
- (id)zstdPlugin;
- (void)notifyRemoteSettingsUpdated:(id)a0;
- (Class)pluginClassForKey:(id)a0;
- (id)samplingPlugin;
- (id)pluginForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)registerPlugin:(Class)a0;
- (id)allPlugins;
- (void)initPlugins;

@end
