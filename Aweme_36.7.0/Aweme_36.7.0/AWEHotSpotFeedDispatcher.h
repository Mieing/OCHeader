@class NSString;
@protocol AWEHotSpotFeedDispatcherDelegate;

@interface AWEHotSpotFeedDispatcher : AWEBaseController <AWEHotSpotFeedDispatcherProtocol>

@property (weak, nonatomic) id<AWEHotSpotFeedDispatcherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onScrollViewWillBeginDragging:(double)a0;
- (void)cellWillDisplay:(id)a0 forRowAtIndexPath:(id)a1 tableView:(id)a2;
- (void)willConfigureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)initialDataSourceFetchDidFinished;
- (void)viewWillEndCoordinatorTransitionAnimation:(struct CGSize { double x0; double x1; })a0;
- (void)onScrollWillChangeVideo:(id)a0 index:(long long)a1 directTop:(BOOL)a2;
- (void)onScrollDidScroll:(id)a0 nextModel:(id)a1 percentage:(double)a2;
- (void)onScrollBackToIndex:(long long)a0;
- (void)didEndConfigingCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (void)onCellDidEndDisplay:(id)a0;
- (void)tableViewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 isLiveRoomRotate:(BOOL)a1;
- (void)configVoiceOverElements;
- (void)hideInteractionView:(BOOL)a0 andMoreView:(BOOL)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
