@class NSString, UICollectionView, AWEIMFansGroupMultiselectListViewModel, UIView, UILabel, UIButton;
@protocol AWEIMFansGroupMultiselectListViewDelegate;

@interface AWEIMFansGroupMultiselectListView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, AWEIMTranspondListCellActionDelegate, AWEIMTranspondListMoreCellActionDelegate>

@property (retain, nonatomic) AWEIMFansGroupMultiselectListViewModel *viewModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *rightButton;
@property (weak, nonatomic) id<AWEIMFansGroupMultiselectListViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__setupUI;
- (void)__refreshUI;
- (BOOL)transpondListCellDelegateDidTapAvatar:(id)a0 shareModel:(id)a1;
- (void)moreCellTapped;
- (void)__addKVOController;
- (void)__setupLayout;
- (void)refreshCollectionViewIfNeeded;
- (void)__updateRightButton;
- (void)__selectAllBtnTapped;
- (void)configWithViewModel:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;

@end
