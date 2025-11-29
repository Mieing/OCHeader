@class UIView, NSIndexPath, NSString, UICollectionViewFlowLayout, NSMutableArray, UICollectionView, MMAsset, UIColor;
@protocol WCEditSelectedCollectionViewDelegate;

@interface WCEditSelectedCollectionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (nonatomic) long long currentSelectedIndex;
@property (retain, nonatomic) MMAsset *currentSelectedAsset;
@property (retain, nonatomic) NSIndexPath *oldIndexPath;
@property (retain, nonatomic) UIView *snapedView;
@property (nonatomic) double layoutSpace;
@property (retain, nonatomic) NSMutableArray *assets;
@property (weak, nonatomic) id<WCEditSelectedCollectionViewDelegate> delegate;
@property (retain, nonatomic) UIColor *cellBorderLineColor;
@property (nonatomic) BOOL showGifLogo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })editSelectCollectionViewDefaultSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)customSetHeight:(double)a0;
- (void)customLayoutSpace:(double)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)handlelongGesture:(id)a0;
- (void)moveItemAtIndexPath:(id)a0 toIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)setCurrentSelect:(unsigned long long)a0;
- (void)selectItemAtIndexPath:(unsigned long long)a0;
- (void)deleteItemAtIndex:(unsigned long long)a0;
- (void)performBatchUpdates:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
