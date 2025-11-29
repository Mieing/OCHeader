@class NSIndexPath, NSString, AWEMusicListSkeletonView, UIButton, ACCMusicListViewModel, ACCMusicItemViewModel, UICollectionView, UILabel;

@interface ACCMusicListViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, ACCMusicItemCollectionViewCellDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) AWEMusicListSkeletonView *skeletonView;
@property (retain, nonatomic) UILabel *emptyContentLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) ACCMusicListViewModel *viewModel;
@property (retain, nonatomic) NSIndexPath *lastSelectIndex;
@property (retain, nonatomic) ACCMusicItemViewModel *lastSelectedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel;
- (void)showEmptyView;
- (void)retryButtonTapped:(id)a0;
- (void)didTapClipButton:(id)a0;
- (void)didTapFavoriteButton:(id)a0;
- (void)didLongPress:(id)a0 withGesture:(id)a1;
- (void)didTapApplyButton:(id)a0;
- (id)visibleMusicItems;
- (void)showSkeletonView;
- (void)scrollViewToSelected;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (BOOL)isEmpty;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithViewModel:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;
- (void)resetScrollOffset;
- (void)showRetryButton;

@end
