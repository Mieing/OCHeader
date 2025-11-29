@class NSHashTable, Protocol;

@interface IESGurdDelegateDispatcher : NSObject

@property (retain, nonatomic) Protocol *protocol;
@property (retain, nonatomic) NSHashTable *delegatesHashTable;

+ (id)dispatcherWithProtocol:(id)a0;

- (void)registerDelegate:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)unregisterDelegate:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (void)forwardInvocation:(id)a0;

@end
