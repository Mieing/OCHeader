@class NSPointerArray;

@interface VeGameBaseProxy : NSProxy

@property (retain, nonatomic) NSPointerArray *delegateArray;

+ (id)proxyWithDelegate:(id)a0;

- (void)addEngineDelegate:(id)a0;
- (id)initEngineProxy;
- (id)getDelegateProtocol;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isProxy;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
