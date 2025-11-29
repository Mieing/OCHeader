@class NSString;
@protocol AWENearbyHotSpotFeedDispatcherDelegate;

@interface AWENearbyHotSpotFeedDispatcher : AWEBaseController <AWENearbyHotSpotFeedDispatcherProtocol>

@property (weak, nonatomic) id<AWENearbyHotSpotFeedDispatcherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onScrollViewWillBeginDragging:(double)a0;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)onScrollWillChangeVideo:(id)a0 index:(long long)a1 directTop:(BOOL)a2;
- (void)onScrollBackToIndex:(long long)a0;
- (void).cxx_destruct;

@end
