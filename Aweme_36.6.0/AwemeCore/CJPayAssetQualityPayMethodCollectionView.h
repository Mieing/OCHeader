@class NSArray, UICollectionView, NSString, CJPayAssetInfoModel;

@interface CJPayAssetQualityPayMethodCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *itemModelList;
@property (retain, nonatomic) CJPayAssetInfoModel *selectedAsset;
@property (nonatomic) BOOL scrollAnimated;
@property (nonatomic) BOOL needShowSelectStatus;
@property (copy, nonatomic) id /* block */ didSelectAssetBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadWithAssetListCellVM:(id)a0;
- (id)p_createColItemVMWithAsset:(id)a0 superCellVM:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
