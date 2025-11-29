@class NSString, NSMutableArray;

@interface RTVMultipleDelegate : NSObject <RTVMultipleDelegateInterface> {
    struct RecursiveMutex { int _type; union { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _plain; struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _recursive; } ; } _lock;
}

@property (readonly, nonatomic) NSMutableArray *delegateNodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAllDelegates;
- (void)removeDelegate:(id)a0 delegateQueue:(id)a1;
- (id)duplicateInvocation:(id)a0;
- (void)__addDelegate:(id)a0 delegateQueue:(id)a1;
- (void)__removeDelegate:(id)a0 delegateQueue:(id)a1;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (id).cxx_construct;
- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (void)doNothing;
- (void)addDelegate:(id)a0 delegateQueue:(id)a1;

@end
