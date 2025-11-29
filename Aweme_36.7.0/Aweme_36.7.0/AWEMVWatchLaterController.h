@class NSString;

@interface AWEMVWatchLaterController : AWEDCFeedBaseController <AWEWatchVideoLaterMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindObserver;
- (void)didAddToWatchLater:(id)a0;
- (void)didRemoveWatchLater:(id)a0;
- (void)onWatchVideoLaterChangeNotification:(id)a0;
- (void)dealloc;
- (void)containerViewDidLoad;

@end
