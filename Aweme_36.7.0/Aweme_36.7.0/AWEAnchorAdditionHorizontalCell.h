@class AWEAnchorAdditionListModel, NSString, UICollectionView;

@interface AWEAnchorAdditionHorizontalCell : UITableViewCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UITableViewDelegate, AWEAnchorAdditionCellProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEAnchorAdditionListModel *listModel;
@property (copy, nonatomic) id /* block */ didSelectItem;
@property (copy, nonatomic) id /* block */ willDisplayItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)anchorAdditionCellIdentifier;
+ (double)anchorAdditionCellForHeight;

- (void)updateUIWithListModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)setupSubviews;

@end
