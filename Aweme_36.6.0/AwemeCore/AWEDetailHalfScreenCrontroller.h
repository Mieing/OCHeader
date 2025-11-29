@class NSString;

@interface AWEDetailHalfScreenCrontroller : AWEBaseController <AWEHPFeedPlayControllerListenerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hpSlidingScrollViewShouldScrollWithPanGestureRecognizer:(id)a0 reason:(id *)a1;
- (BOOL)hpRefreshPanGestureRecognizerShouldBegin:(id)a0 reason:(id *)a1;
- (id)hpShouldPreventInteractionWithInteractionType:(long long)a0;

@end
