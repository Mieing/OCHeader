@class NSString, NSMutableArray, UICollectionView;

@interface AWETeenSearchResultAlbumNoDataViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) NSMutableArray *dataSource;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *searchID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)getLabelHeightWithFixedWidth:(double)a0 andFixedFont:(id)a1 andContent:(id)a2;
- (id)albumAtIndex:(long long)a0;
- (void)setPlaceholderData:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)setupUI;

@end
