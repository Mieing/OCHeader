@class NSArray, UICollectionView, NSString, UIView, AWEVSFormatCategoryCell;

@interface AWEVSFormatTopCategoryView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *data;
@property (nonatomic) double targetTop;
@property (nonatomic) double limitHeight;
@property (retain, nonatomic) AWEVSFormatCategoryCell *selectCell;
@property (copy, nonatomic) id /* block */ onItemClick;
@property (copy, nonatomic) id /* block */ onItemShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContentAlpha:(double)a0;
- (void)adjustTop:(double)a0 needFixed:(BOOL)a1;
- (void)updateSelectCell:(id)a0;
- (void)updateSelectedItemAtIndexPath:(id)a0;
- (void)updateLimitHeight:(double)a0;
- (id)buildSeasonTag:(id)a0;
- (void).cxx_destruct;
- (void)updateData:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)updateContentBackgroundColor:(id)a0;
- (void)setupView;

@end
