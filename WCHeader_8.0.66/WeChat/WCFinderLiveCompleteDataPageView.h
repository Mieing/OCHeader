@class WCFinderLiveCompleteDataModel, UICollectionView, NSString, AnchorCloseLivePageDataUnit;

@interface WCFinderLiveCompleteDataPageView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) AnchorCloseLivePageDataUnit *pageDataUnit;
@property (retain, nonatomic) WCFinderLiveCompleteDataModel *dataModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL reportBaseData;
@property (nonatomic) BOOL reportIncomeData;
@property (copy, nonatomic) id /* block */ itemSelectBlock;
@property (copy, nonatomic) id /* block */ dataViewBlock;
@property (copy, nonatomic) id /* block */ dataViewExposeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithPageData:(id)a0 dataModel:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)isClickEnable:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)dataViewClick:(int)a0;
- (void)collectionViewClick;
- (void).cxx_destruct;

@end
