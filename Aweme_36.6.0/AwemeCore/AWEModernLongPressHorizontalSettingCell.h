@class NSArray, UICollectionView, AWELongPressPanelViewGroupModel, NSString;

@interface AWEModernLongPressHorizontalSettingCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *dataArray;
@property (nonatomic) BOOL isAppearing;
@property (retain, nonatomic) AWELongPressPanelViewGroupModel *longPressViewGroupModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cellDisplay;
- (void)cellDisappear;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setupCollectionView;
- (void)setUpUI;

@end
