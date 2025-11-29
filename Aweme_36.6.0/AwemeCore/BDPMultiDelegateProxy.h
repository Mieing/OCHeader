@class NSPointerArray;

@interface BDPMultiDelegateProxy : NSObject

@property (retain, nonatomic) NSPointerArray *delegates;
@property (nonatomic) BOOL silentWhenEmpty;

- (void)removeAllDelegates;
- (id)initWithDelegates:(id)a0;
- (void)addDelegate:(id)a0 beforeDelegate:(id)a1;
- (void)addDelegate:(id)a0 afterDelegate:(id)a1;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDelegate:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)allObjects;
- (BOOL)respondsToSelector:(SEL)a0;
- (unsigned long long)count;
- (void)forwardInvocation:(id)a0;

@end
