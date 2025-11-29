@class NSString, UIView;
@protocol BDXViewContainerProtocol;

@interface AWEPlayInteractionBottomBarInnerPOICardElement : AWEPlayInteractionLeftElement <BDXContainerLifecycleProtocol, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bdxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
