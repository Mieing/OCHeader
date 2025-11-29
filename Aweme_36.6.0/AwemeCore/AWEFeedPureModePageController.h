@class NSString;

@interface AWEFeedPureModePageController : AWEAwemeFeedBaseController <AWEFeedPureModePageControllerProtocol>

@property (nonatomic) double scrollDragTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)scrollToModel:(id)a0 direction:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)currentPureModeExitTransitionDelegate;
- (id)commonTableView;
- (void)trackScrollWithEvent:(id)a0 params:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end
