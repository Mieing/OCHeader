@class NSArray, AWEFollowListGroupFilterModel, UICollectionView, NSString;

@interface AWEFollowListGroupFilterView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *groupList;
@property (retain, nonatomic) AWEFollowListGroupFilterModel *selectedGroup;
@property (copy, nonatomic) id /* block */ groupfilterClickedBlock;
@property (copy, nonatomic) id /* block */ clickedEnableBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSelectStatusWithType:(long long)a0;
- (void)updateSelectStatusWithSelectedGroup:(id)a0;
- (void)configGroupList:(id)a0 currentGroupFilterType:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)setupCollectionView;
- (void)setupUI;

@end
