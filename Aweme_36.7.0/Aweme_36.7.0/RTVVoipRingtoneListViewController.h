@class RTVVoipMusicListSkeletonView, NSString, UICollectionView, RTVVoipRingtoneListViewModel, RTVExceptionView, UIButton;

@interface RTVVoipRingtoneListViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, RTVVoipRingtoneCollectionViewCellDelegate>

@property (retain, nonatomic) RTVVoipMusicListSkeletonView *skeletonView;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) RTVExceptionView *exceptionView;
@property (retain, nonatomic) RTVVoipRingtoneListViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel;
- (void)showEmptyView;
- (void)retryButtonTapped:(id)a0;
- (void)showNetErrorView;
- (void)didTapFavoriteButton:(id)a0;
- (id)visibleMusicItems;
- (void)showSkeletonView;
- (void)didTapApplyButton:(id)a0 isApply:(BOOL)a1;
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
- (void)viewDidLoad;
- (void)setupUI;
- (void)resetScrollOffset;

@end
