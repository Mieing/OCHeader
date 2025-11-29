@class NSHashTable, Protocol;

@interface AWEProfileEventPublisher : NSProxy

@property (retain, nonatomic) Protocol *event;
@property (retain, nonatomic) NSHashTable *subscribers;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

- (void)handleUnknownSelector:(id)a0;
- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)dealloc;
- (void)addSubscriber:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
