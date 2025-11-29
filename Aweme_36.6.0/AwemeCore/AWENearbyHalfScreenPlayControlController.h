@class NSString;

@interface AWENearbyHalfScreenPlayControlController : AWEBaseController <AWEHPFeedPlayControllerListenerProtocol>

@property (nonatomic) BOOL isHalfScreenPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hpShouldPreventPauseWhenDisappear;
- (void)handleHalfScreenPopupDismiss:(id)a0;
- (void)handleHalfScreenPopupStart:(id)a0;
- (id)init;
- (void)dealloc;

@end
