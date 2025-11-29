@class NSString;

@interface AWELiveDetailController : AWEAwemeNewDetailBaseController <AWELiveVideoFeedUpdateMessage>

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } subscribeRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)liveModuleService;
- (void)setNeedsDeleteLiveWithRoomId:(id)a0 uid:(id)a1;
- (void)subscribedLiveStatusChange:(id)a0;
- (void)preloadBgImageWithIndexPath:(id)a0;
- (void)subscribeLiveStatusWithIndexPath:(id)a0 triggerReasonType:(long long)a1;
- (void)p_willEndDraggingCell:(id)a0;
- (BOOL)enableMixContainerLiveCheck;
- (BOOL)enableMixPreStreamCloseDelete;
- (id)init;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;

@end
