@class NSString;
@protocol AFDUserWorkCollectionViewDataSource;

@interface AFDUserWorkCollectionView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (weak, nonatomic) id<AFDUserWorkCollectionViewDataSource> userWorkDataSource;
@property (nonatomic) double maxLayoutWidth;
@property (nonatomic) long long maxNumberOfCells;
@property (nonatomic) double maxAspectRatio;
@property (nonatomic) double cellSpacing;
@property (nonatomic) double cellCornerRadius;
@property (nonatomic) long long cellCornerMaskType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultCellSpacing;
+ (long long)defaultCornerMaskType;
+ (double)heightWithLayoutWidth:(double)a0 numberOfCells:(long long)a1 aspectRatio:(double)a2 cellSpacing:(double)a3;
+ (double)defaultLeftPadding;
+ (double)defaultHeight;
+ (double)defaultWidth;

- (void)refreshCellAnimation;
- (void)p_deviceOrientationDidChange:(id)a0;
- (void)reconfigureCellsAnimated:(BOOL)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
