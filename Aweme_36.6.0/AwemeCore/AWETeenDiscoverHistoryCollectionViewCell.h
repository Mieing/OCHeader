@class NSString, UICollectionView, NSMutableSet, NSMutableArray, AWETeenDiscoverChannelContext;

@interface AWETeenDiscoverHistoryCollectionViewCell : UICollectionViewCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableArray *albumsListDataSource;
@property (retain, nonatomic) NSMutableSet *albumSets;
@property (nonatomic) BOOL isAppear;
@property (retain, nonatomic) AWETeenDiscoverChannelContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cellShowLog;
- (void)configWithAlbums:(id)a0 context:(id)a1 isAppear:(BOOL)a2;
- (id)enterFromOrEventPage;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
