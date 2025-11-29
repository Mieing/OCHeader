@class NSMutableDictionary, NSRecursiveLock;

@interface DolphinDIServiceCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *registerCenter;
@property (retain, nonatomic) NSRecursiveLock *lock;

+ (id)sharedInstance;

- (BOOL)bindService:(Class)a0 forProtocol:(id)a1;
- (BOOL)unbindServiceForProtocol:(id)a0;
- (BOOL)bindService:(Class)a0 forProtocol:(id)a1 forKey:(id)a2;
- (BOOL)unbindServiceForProtocol:(id)a0 forKey:(id)a1;
- (id)getService:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)getService:(id)a0;

@end
