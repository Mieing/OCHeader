@class NSString;
@protocol AWEListKitBaseLayoutDelegate;

@interface AWEBaseListFlowLayout : UICollectionViewFlowLayout <AWEListKitLayoutBaseProtocol, AWEListKitBaseStickHeaderProtocol>

@property (weak, nonatomic) id<AWEListKitBaseLayoutDelegate> baseDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL enableStickHeader;

+ (Class)customDecorationViewClass;

- (BOOL)shouldStickHeaderAtSection:(long long)a0;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)a0;
- (void).cxx_destruct;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (void)finalizeCollectionViewUpdates;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;

@end
