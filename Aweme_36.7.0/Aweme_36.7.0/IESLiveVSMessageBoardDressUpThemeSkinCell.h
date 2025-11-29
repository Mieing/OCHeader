@class NSString, UIImageView, UICollectionView, InteractDressInfoResponse_DressInfo;

@interface IESLiveVSMessageBoardDressUpThemeSkinCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIImageView *userImageView;
@property (copy, nonatomic) NSString *userTitle;
@property (retain, nonatomic) InteractDressInfoResponse_DressInfo *dressUpModel;
@property (copy, nonatomic) id /* block */ ThemeSkinBlock;
@property (copy, nonatomic) id /* block */ ThemeSkinCellShow;
@property (nonatomic) int lastThemeSkinRow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUI;
- (void)updateSelectItem;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;

@end
