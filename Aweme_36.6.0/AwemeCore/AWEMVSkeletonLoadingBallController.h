@class AWEMVSkeletonLoadingBallView;

@interface AWEMVSkeletonLoadingBallController : AWEDCFeedBaseController

@property (retain, nonatomic) AWEMVSkeletonLoadingBallView *loadingView;

- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 skeletonWillDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 skeletonDidEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void).cxx_destruct;

@end
