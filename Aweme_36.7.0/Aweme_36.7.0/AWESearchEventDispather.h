@class NSMapTable, AWESearchPluginManager, AWESearchComponentManager;

@interface AWESearchEventDispather : NSObject

@property (retain, nonatomic) AWESearchComponentManager *componentManager;
@property (retain, nonatomic) AWESearchPluginManager *pluginManager;
@property (retain, nonatomic) NSMapTable *sendProxyMap;
@property (retain, nonatomic) NSMapTable *broadcastProxyMap;

- (void)addEventWithObject:(id)a0;
- (void)removeEventWithObject:(id)a0;
- (id)fetchSendEventWithProtocol:(id)a0;
- (id)fetchBroadcastWithProtocol:(id)a0 object:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)addComponent:(id)a0;
- (void)removeComponent:(id)a0;
- (void)removePlugin:(id)a0;
- (void)addPlugin:(id)a0;
- (id)componentList;
- (void)insertComponent:(id)a0 atIndex:(long long)a1;

@end
