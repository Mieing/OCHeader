@class NSLock, NSMutableSet;

@interface AWEBindingHostManager : NSObject

@property (nonatomic) BOOL callDealloc;
@property (retain, nonatomic) NSMutableSet *bindings;
@property (retain, nonatomic) NSLock *lock;

- (void)addBinding:(id)a0;
- (void)removeBinding:(id)a0;
- (id)initWithCallDealloc:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeAllBindings;

@end
