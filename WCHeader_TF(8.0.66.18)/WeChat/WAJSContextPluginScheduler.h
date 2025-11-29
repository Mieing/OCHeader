@class NSRecursiveLock, NSString, NSMutableDictionary, WAJSCoreService;

@interface WAJSContextPluginScheduler : NSObject

@property (readonly, weak, nonatomic) WAJSCoreService *ownerContext;
@property (retain, nonatomic) NSRecursiveLock *pluginDictLock;
@property (copy, nonatomic) NSString *lastOperateMusicPluginName;
@property (readonly, nonatomic) NSMutableDictionary *pluginName2InstanceDic;

- (id)operateMusicInstance;
- (void)updateLastOperateMusicPluginName:(id)a0;
- (id)initWithOwnerJSContext:(id)a0;
- (void)dealloc;
- (void)loadingInitPluginArray;
- (void)loadPluginWhenInit;
- (void)commonCreatePluginWithPluginConfigArray:(id)a0;
- (void)createPluginInstanceIfNotExsist:(id)a0;
- (id)GetPluginInstanceByName:(id)a0;
- (id)GetPluginInstanceIfExsist:(id)a0;
- (void)loadPluginForEvent:(long long)a0;
- (void)handleEvent:(long long)a0 userInfo:(id)a1;
- (void)setWAAppTaskState:(unsigned long long)a0;
- (void)setWAAppTaskRunningState:(unsigned long long)a0;
- (void).cxx_destruct;

@end
