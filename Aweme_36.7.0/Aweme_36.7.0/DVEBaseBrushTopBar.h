@class NSArray, UICollectionView, NSString, DVEEffectValue, UIButton;

@interface DVEBaseBrushTopBar : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionView *brushListView;
@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) DVEEffectValue *currentBrushValue;
@property (retain, nonatomic) NSArray *brushValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)selectWithBrushValues:(id)a0;
- (void)updateBrushValues:(id)a0;
- (void)selectBrushValuesWithIndex:(long long)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setupUI;

@end
