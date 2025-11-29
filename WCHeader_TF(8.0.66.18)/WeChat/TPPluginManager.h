@class NSString, TPWorkerQueue, NSMutableArray, TPRecursiveLock;

@interface TPPluginManager : NSObject <ITPPluginManager>

@property (retain, nonatomic) NSMutableArray *pluginList;
@property (retain, nonatomic) TPWorkerQueue *pluginEventQueue;
@property (retain, nonatomic) TPRecursiveLock *pluginListLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)pushEvent:(unsigned long long)a0 withUserInfo:(id)a1;
- (void)addPlugin:(id)a0;
- (void)removePlugin:(id)a0;
- (void)releasePlugins;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)printEvent:(unsigned long long)a0 withUserInfo:(id)a1;
- (void).cxx_destruct;

@end
