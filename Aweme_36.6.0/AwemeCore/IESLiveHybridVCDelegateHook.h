@class IESLiveHybridLifecycleDelegateProxy, IESLiveHybridDelegateProxy, UIView, UIViewController;
@protocol IESHYHybridViewProtocol, IESHYControllerProtocol;

@interface IESLiveHybridVCDelegateHook : NSObject

@property (retain, nonatomic) IESLiveHybridDelegateProxy *delegateProxy;
@property (retain, nonatomic) IESLiveHybridLifecycleDelegateProxy *lifecycleDelegateProxy;
@property (weak, nonatomic) UIViewController<IESHYControllerProtocol> *observedController;
@property (weak, nonatomic) UIView<IESHYHybridViewProtocol> *observedKitView;
@property (nonatomic) BOOL isObservingController;
@property (nonatomic) BOOL isObservingKitView;
@property (copy, nonatomic) id /* block */ didCreatedHYViewBlock;
@property (copy, nonatomic) id /* block */ didStartLoadBlock;
@property (copy, nonatomic) id /* block */ didFinishLoadBlock;
@property (copy, nonatomic) id /* block */ didFinishLoadWithErrorBlock;
@property (copy, nonatomic) id /* block */ willDismissBlock;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (copy, nonatomic) id /* block */ viewDidFinishLoadWithURLBlock;
@property (copy, nonatomic) id /* block */ viewDidLoadFailedWithUrlBlock;
@property (copy, nonatomic) id /* block */ viewDidReceiveErrorBlock;
@property (copy, nonatomic) id /* block */ viewDidConstructJSRuntimeBlock;
@property (copy, nonatomic) id /* block */ viewWillCreatedBlock;
@property (copy, nonatomic) id /* block */ viewDidCreatedBlock;
@property (copy, nonatomic) id /* block */ viewDidStartLoadingBlock;
@property (copy, nonatomic) id /* block */ viewDidFirstScreenBlock;
@property (copy, nonatomic) id /* block */ viewDidUpdateBlock;
@property (copy, nonatomic) id /* block */ viewDidPageUpdateBlock;
@property (copy, nonatomic) id /* block */ viewWillDeallocBlock;
@property (weak, nonatomic) UIViewController<IESHYControllerProtocol> *viewController;

+ (void)hookViewController:(id)a0 withConfiguration:(id /* block */)a1;

- (void)setupProxy;
- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;
- (void)stopObserving;
- (void)startObserving;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
