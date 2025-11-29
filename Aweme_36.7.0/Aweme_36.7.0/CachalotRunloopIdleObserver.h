@class NSHashTable;

@interface CachalotRunloopIdleObserver : NSObject {
    BOOL _attached;
}

@property (nonatomic) struct __CFRunLoopObserver { } *observer;
@property (nonatomic) struct __CFRunLoop { } *runloop;
@property (retain, nonatomic) NSHashTable *handlers;

- (void)attachToRunloop:(struct __CFRunLoop { } *)a0;
- (void)detachFromRunLoop;
- (void).cxx_destruct;
- (id)init;
- (void)addHandler:(id)a0;
- (void)dealloc;

@end
