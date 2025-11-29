@class IESLiveKTVOrderPanelTabViewSectionModel, IESLiveKTVTabSortButton, UICollectionView, IESLiveKTVTabSortSelectionView, NSString;

@interface IESLiveKTVOrderPanelTabViewSectionCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegate, IESLiveKTVOrderPanelSectionCellProtocol>

@property (retain, nonatomic) IESLiveKTVOrderPanelTabViewSectionModel *model;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESLiveKTVTabSortButton *sortButton;
@property (retain, nonatomic) IESLiveKTVTabSortSelectionView *sortSelectionView;
@property (nonatomic) BOOL isHideSort;
@property (nonatomic) long long scaleRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_initData;
- (void)renderWithModel:(id)a0;
- (void)updateSelectedWithPath:(id)a0;
- (void)selectItemWithIndex:(unsigned long long)a0;
- (void)updateTabWithListType:(long long)a0 count:(long long)a1 isUnread:(BOOL)a2;
- (void)refreshTabSortStatusIfNeed;
- (void)p_updateSortViewWithCurrentTab:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)selectedType;
- (void)setupUI;

@end
