@class NSObject, NSHashTable, Protocol;
@protocol OS_dispatch_semaphore;

@interface AWEListKitDelegateDispatcher : NSObject

@property (retain, nonatomic) Protocol *protocol;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (retain, nonatomic) NSHashTable *delegatesHashTable;

+ (id)dispatcherWithProtocol:(id)a0;

- (void)registerDelegate:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)unregisterDelegate:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
