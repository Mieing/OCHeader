@class NSArray, BDPUniqueID, NSString;

@interface BDPMorePanelItemNewCollectionView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) double spacing;
@property (copy, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewLayout:(double)a0;
+ (Class)cellClass;

- (void)updateCell:(id)a0 withItem:(id)a1;
- (id)initWithItems:(id)a0 uniqueID:(id)a1 spacing:(double)a2;
- (id)reorderItems:(id)a0;
- (void)setUpSelfContext;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;

@end
