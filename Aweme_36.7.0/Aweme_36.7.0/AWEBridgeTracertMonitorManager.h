@class NSMutableDictionary, NSRecursiveLock;

@interface AWEBridgeTracertMonitorManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *monitorMap;
@property (retain, nonatomic) NSRecursiveLock *lock;

+ (id)sharedInstance;

- (void)registerMonitor:(id)a0 forKey:(id)a1;
- (id)monitorForKey:(id)a0;
- (void)removeMonitorForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
