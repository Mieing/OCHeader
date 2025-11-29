@class NSNumber, NSString, IESECTracker, IESECReviewsDetailViewControllerConfiguration, IESECReviewsDetailPlayerManager, UIButton, UICollectionView, UILabel, IESECCommentShowDataManager;

@interface IESECReviewsDetailViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IESECReviewsDetailViewCellDelegate> {
    IESECReviewsDetailViewControllerConfiguration *_configuration;
    IESECCommentShowDataManager *_dataManager;
    IESECReviewsDetailPlayerManager *_playerManager;
    UIButton *_backButton;
    UILabel *_noMoreReviewsLabel;
    IESECTracker *_tracker;
    NSNumber *_currentCommentIDForTracking;
    double _currentCommentTimestamp;
    NSString *_previousCommentActionType;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupTracker;
- (void)backButtonDidClick:(id)a0;
- (void)reviewsDetailCell:(id)a0 likedValueChangedWithComment:(id)a1;
- (void)trackForReviewDisplayAtIndex:(long long)a0 withActionType:(id)a1;
- (void)updateNoMoreReviewsLabel;
- (void)trackForCommentContentExit;
- (BOOL)needsPlayerForIndex:(long long)a0;
- (void).cxx_destruct;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (id)initWithConfiguration:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)dataManager;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupSubviews;

@end
