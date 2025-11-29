@class NSArray, NSString;

@interface IESLiveDanmakuSettingToolBar : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (copy, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineSpacing:(double)a1 interSpacing:(double)a2;
- (void)updateItem:(id)a0 atIndex:(unsigned long long)a1;
- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (void)reload;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setupViews;
- (id)itemForType:(unsigned long long)a0;

@end
