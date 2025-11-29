@protocol AWEProfilePadServiceProtocol;

@interface AWEUserWorkPadTrackerController : AWEUserWorkController

@property (weak, nonatomic) id<AWEProfilePadServiceProtocol> padService;
@property (nonatomic) long long profileTabType;

- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)trackAllCellShowIfNeeded;
- (void)removePadTrackItemIDs;
- (void)trackPadCellShowWithModel:(id)a0 indexPath:(id)a1;
- (void).cxx_destruct;
- (void)containerViewDidLoad;

@end
