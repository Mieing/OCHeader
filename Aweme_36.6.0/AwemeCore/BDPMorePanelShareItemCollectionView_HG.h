@class NSArray, NSString, NSMutableArray, BDPUniqueID;

@interface BDPMorePanelShareItemCollectionView_HG : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, BDPMorePanelShareItemViewCell_HGActionDelegate>

@property (retain, nonatomic) NSMutableArray *cellList;
@property (nonatomic) BOOL isLandscape;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellClass;
+ (id)collectionLayout;

- (id)initWithItems:(id)a0 uniqueID:(id)a1;
- (void)unselectAllCells;
- (void)updateCell:(id)a0 withItem:(id)a1 isSelected:(BOOL)a2;
- (void)cellDelegateDidCancelAvatar:(id)a0 itemModel:(id)a1;
- (void)cellDelegateDidSelectAvatar:(id)a0 itemModel:(id)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;

@end
