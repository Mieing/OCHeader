@class IESLiveHybridVCDelegateHook, NSString;
@protocol IESHYHybridViewLifecycleProtocol;

@interface IESLiveHybridLifecycleDelegateProxy : NSProxy <IESHYHybridViewLifecycleProtocol>

@property (weak, nonatomic) id<IESHYHybridViewLifecycleProtocol> originalDelegate;
@property (weak, nonatomic) IESLiveHybridVCDelegateHook *hook;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidConstructJSRuntime:(id)a0;
- (void)viewDidStartLoading;
- (void)viewDidFirstScreen;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidUpdate;
- (void)viewDidPageUpdate;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)viewWillCreated:(id)a0;
- (void)viewDidCreated:(id)a0;
- (void)viewWillDealloc:(id)a0;
- (id)initWithHook:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (void)forwardInvocation:(id)a0;

@end
