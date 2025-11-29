@class NSString;

@interface AWEHPPlayletFeedPlayControlController : AWEBaseController <AWEHPFeedPlayControllerListenerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hpShouldPreventPauseWhenDisappear;

@end
