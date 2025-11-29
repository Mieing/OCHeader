@class NSPointerArray;

@interface HybridObserver : NSObject

@property (copy, nonatomic) NSPointerArray *receivers;

- (void)compactDelegates;
- (void)addReceiver:(id)a0 beforeObject:(id)a1;
- (void)addReceiver:(id)a0 afterObject:(id)a1;
- (void)removeAllReceiver;
- (void).cxx_destruct;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)allObjects;
- (BOOL)respondsToSelector:(SEL)a0;
- (unsigned long long)indexOfObject:(id)a0;
- (unsigned long long)count;
- (void)forwardInvocation:(id)a0;
- (void)addReceiver:(id)a0;
- (void)removeReceiver:(id)a0;

@end
