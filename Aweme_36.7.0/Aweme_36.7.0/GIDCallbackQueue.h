@class NSMutableArray;

@interface GIDCallbackQueue : NSObject {
    BOOL _firing;
    int _pending;
    NSMutableArray *_queue;
    GIDCallbackQueue *_strongSelf;
}

- (void).cxx_destruct;
- (id)init;
- (void)next;
- (void)wait;
- (void)reset;
- (void)addCallback:(id /* block */)a0;
- (void)fire;

@end
