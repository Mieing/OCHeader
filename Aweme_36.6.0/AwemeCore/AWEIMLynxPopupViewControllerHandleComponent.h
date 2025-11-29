@class NSString;

@interface AWEIMLynxPopupViewControllerHandleComponent : AWEIMComponentBase <AWEIMLynxPopupViewControllerHandleComponentInterface, BDXContainerLifecycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)currentInDeprecatedLynxConfigScene;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)setLynxPopupViewControllerDelegateIfNeed:(id)a0;

@end
