@class NSMutableDictionary, NSRecursiveLock;

@interface DolphinTaskContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *contextDict;
@property (retain, nonatomic) NSRecursiveLock *lock;

- (void)addHandler:(id /* block */)a0 forKey:(id)a1;
- (void)postValue:(id)a0 forKey:(id)a1;
- (void)removeHandler:(id /* block */)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
