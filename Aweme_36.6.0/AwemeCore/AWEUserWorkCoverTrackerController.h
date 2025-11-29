@class AWEUserWorkReachCellExposeController;
@protocol AWEUserTrackServiceProtocol;

@interface AWEUserWorkCoverTrackerController : AWEUserWorkController

@property (nonatomic) long long profileTabType;
@property (weak, nonatomic) id<AWEUserTrackServiceProtocol> userTrackService;
@property (retain, nonatomic) AWEUserWorkReachCellExposeController *exposeController;

- (id)enterFrom;
- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewDidEndDecelerating:(id)a0;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)sectionController:(id)a0 configCell:(id)a1 model:(id)a2 index:(long long)a3;
- (void)listDidReloadData;
- (void)configExposeController;
- (void)trackClientShowHomepageWithModel:(id)a0 cell:(id)a1 indexPath:(id)a2;
- (id)videoCoverOrderWith:(id)a0;
- (void).cxx_destruct;
- (void)containerViewDidLoad;

@end
