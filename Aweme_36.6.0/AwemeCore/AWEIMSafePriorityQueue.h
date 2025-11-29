@class NSPointerArray, NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEIMSafePriorityQueue : NSObject <AWEIMSafePriorityQueueProtocol>

@property (retain, nonatomic) NSPointerArray *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (nonatomic) BOOL locked;
@property (nonatomic) unsigned long long queueType;
@property (nonatomic) unsigned long long objectType;
@property (nonatomic) id /* block */ comparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)toUnlcok;
- (BOOL)containObject:(id)a0;
- (void)toLock;
- (id)initWithObjectType:(unsigned long long)a0 queueType:(unsigned long long)a1;
- (void)configQueue;
- (void)configLock;
- (void)__compact;
- (id)initWithObjects:(id)a0 ObjectType:(unsigned long long)a1 queueType:(unsigned long long)a2;
- (void)compact;
- (void)remove:(id)a0;
- (void)pop;
- (BOOL)empty;
- (void)push:(id)a0;
- (void).cxx_destruct;
- (void)popAll;
- (id)allObjects;
- (void)insert:(id)a0;
- (id)top;
- (void)dealloc;
- (unsigned long long)size;
- (unsigned long long)__size;

@end
