@class NSLock, NSMutableDictionary;

@interface AWEBindingKVOManager : NSObject

@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableDictionary *objectMap;

+ (id)sharedInstance;

- (id)hashKeyByObject:(id)a0;
- (void)observe:(id)a0 objectHashKey:(id)a1;
- (void)unObserve:(id)a0 object:(id)a1 objectHashKey:(id)a2;
- (id)getBindingArray:(id)a0 keyPath:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
