@class NSString;

@interface AWESearchAIGCPanelRefreshPanController : AWEBaseController <AWEHPHomeContainerViewControllerLifeCycle, AWEHPFeedPlayControllerListenerProtocol>

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hpRefreshPanGestureRecognizerShouldBegin:(id)a0 reason:(id *)a1;
- (id)hpShouldPreventPlayIfActive;

@end
