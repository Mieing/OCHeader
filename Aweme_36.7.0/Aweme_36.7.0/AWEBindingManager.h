@class NSLock, NSMutableSet;

@interface AWEBindingManager : NSObject

@property (retain, nonatomic) NSMutableSet *bindingSet;
@property (retain, nonatomic) NSLock *lock;

- (BOOL)addBinding:(id)a0;
- (void)removeBinding:(id)a0;
- (void)removeAllBindingsByObject:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeAllBindings;

@end
