@class RxReadWriteLock, NSMapTable, NSDictionary, NSString;

@interface AWERecallMessageManager : NSObject <AWERecallMessageManagerProtocol>

@property (copy) NSDictionary *lastRecallMessage;
@property (retain, nonatomic) NSMapTable *hashMap;
@property (retain, nonatomic) RxReadWriteLock *readWriteLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)addObserver:(id)a0 handler:(id /* block */)a1;
- (void)registerByteSync;
- (void)handleRecallDebugNotification:(id)a0;
- (void)__handleRecallMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
