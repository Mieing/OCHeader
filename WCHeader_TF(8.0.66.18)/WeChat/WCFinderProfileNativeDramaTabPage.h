@class WCFinderProfileNativeDramaBackgroundView, WCFinderNoMoreView, UICollectionView, UICollectionViewDiffableDataSource, NSString;

@interface WCFinderProfileNativeDramaTabPage : WCFinderStreamProfileViewPage <UICollectionViewDelegate, WCFinderProfileNativeDramaTabPageModelDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) WCFinderNoMoreView *noMoreView;
@property (retain, nonatomic) WCFinderProfileNativeDramaBackgroundView *backgroundView;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *collectionViewDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)loadView;
- (void)setViewModel:(id)a0;
- (void)viewDidLoad;
- (id)_collectionViewLayout;
- (void)_setupCollectionViewDataSource;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewModelDidFetchData:(id)a0;
- (void).cxx_destruct;

@end
