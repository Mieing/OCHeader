@class NSMutableArray;
@protocol IESECCollectionViewLayoutDelegate;

@interface IESECCollectionViewLayout : UICollectionViewLayout

@property (nonatomic) double contentHeight;
@property (nonatomic) BOOL cachedLayoutInvalid;
@property (nonatomic) BOOL shouldInvalidateLayout;
@property (nonatomic) double contentInsetY;
@property (weak, nonatomic) id<IESECCollectionViewLayoutDelegate> delegate;
@property (nonatomic) BOOL optimizeEnable;
@property (retain, nonatomic) NSMutableArray *sectionLayouts;
@property (nonatomic) BOOL needAnimation;

+ (Class)layoutAttributesClass;
+ (Class)invalidationContextClass;

- (void)resetDatas;
- (id)sectionLayoutForSection:(long long)a0;
- (id)layoutAttributesForItemAtIndexPathInCalculate:(id)a0;
- (double)offsetYTopForCurrentIndexPath:(id)a0;
- (double)offsetYBottomForCurrentIndexPath:(id)a0;
- (double)offsetYBottomForCurrentIndexPathInCalculate:(id)a0;
- (double)offsetYTopForSection:(long long)a0;
- (double)offsetYBottomForSection:(long long)a0;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)commonInit;
- (id)initWithCoder:(id)a0;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)a0 atIndexPath:(id)a1;

@end
