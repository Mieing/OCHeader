@class NSPointerArray, NSCache, Protocol;

@interface IESLiveStreamPlayerDelegateDispatcher : NSObject

@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwLock;
@property (retain, nonatomic) Protocol *protocol;
@property (retain, nonatomic) NSPointerArray *delegates;
@property (retain, nonatomic) NSCache *forwardCache;

- (id)allDelegates;
- (id)p_signatureForSelector:(SEL)a0 inProtocol:(id)a1;
- (id)p_defaultSignatureForSelector:(SEL)a0 inProtocol:(id)a1;
- (void)updateForwardCache;
- (struct objc_method_description { SEL x0; char *x1; })p_descriptionForSelector:(SEL)a0 inProtocol:(id)a1;
- (void)addDelegatesFromArray:(id)a0;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
