@class NSString;

@interface AWEHPFlexPinchController : AWEBaseController <AWEHPContainerViewControllerLifeCycle, AWEHPFeedPlayControllerListenerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hpShouldPreventPauseWhenDisappear;
- (void)viewDidAppear;

@end
