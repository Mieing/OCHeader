@class NSString, UICollectionView, NSArray, DVEEffectValue, ACCBrushEffectDataSource, ACCBrushEffectCollectionViewConfig;
@protocol ACCBrushEffectValueListDelegate;

@interface ACCBrushEffectValueList : UIView <UICollectionViewDataSource, UICollectionViewDelegate, ACCBrushEffectValueListProtocol>

@property (retain, nonatomic) UICollectionView *brushListView;
@property (retain, nonatomic) ACCBrushEffectCollectionViewConfig *collectionViewConfig;
@property (retain, nonatomic) NSString *cellIdentifier;
@property (weak, nonatomic) id<ACCBrushEffectValueListDelegate> delegate;
@property (retain, nonatomic) ACCBrushEffectDataSource *brushDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) DVEEffectValue *currentBrushValue;
@property (retain, nonatomic) NSArray *brushValues;
@property (nonatomic) BOOL finishedLoadBrushes;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewConfig:(id)a1;
- (void)selectWithBrushValues:(id)a0;
- (void)updateBrushValues:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setupUI;

@end
