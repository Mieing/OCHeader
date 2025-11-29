@class NSString, NSMutableDictionary;

@interface TXCDarwinNotificationCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *observerDic;
@property (retain, nonatomic) NSString *mainBundleID;

- (id)init;
- (void)dealloc;
- (void)handleNotification:(id)a0;
- (void)addObserverWithName:(id)a0 callback:(id /* block */)a1;
- (void)addObserverWithName:(id)a0 callback:(id /* block */)a1 timeout:(double)a2;
- (void)removeObserverWithName:(id)a0;
- (void)postNotificationName:(id)a0;
- (void)registerForNotificationsWithName:(id)a0;
- (void)unregisterForNotificationsWithName:(id)a0;
- (void).cxx_destruct;

@end
