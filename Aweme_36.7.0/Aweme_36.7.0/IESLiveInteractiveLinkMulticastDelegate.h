@class NSHashTable, Protocol;

@interface IESLiveInteractiveLinkMulticastDelegate : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
}

@property (retain, nonatomic) Protocol *protocol;
@property (retain, nonatomic) NSHashTable *delegates;

- (id)signatureForSelector:(SEL)a0 inProtocol:(id)a1;
- (struct objc_method_description { SEL x0; char *x1; })descriptionForSelecctor:(SEL)a0 inProtocol:(id)a1;
- (id)allDelegates;
- (id)initWithProtocol:(id)a0 shouldRetain:(BOOL)a1;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (void)forwardInvocation:(id)a0;

@end
