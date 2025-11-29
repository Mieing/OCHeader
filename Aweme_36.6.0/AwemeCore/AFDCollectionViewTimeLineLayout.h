@class AFDCollectionViewTimeLineLayoutAttributes, NSMutableDictionary, NSString;
@protocol AFDCollectionViewDelegateTimeLineLayout, AWEListKitBaseLayoutDelegate;

@interface AFDCollectionViewTimeLineLayout : UICollectionViewFlowLayout <AWEListKitLayoutBaseProtocol>

@property (readonly, weak, nonatomic) id<AFDCollectionViewDelegateTimeLineLayout> delegate;
@property (retain, nonatomic) NSMutableDictionary *sectionLeftTitleAttributes;
@property (retain, nonatomic) AFDCollectionViewTimeLineLayoutAttributes *pageHeaderLayoutAttributes;
@property (nonatomic) BOOL willInsertSingleItemInCollectionView;
@property (nonatomic) double pageHeaderTopInset;
@property (nonatomic) struct CGSize { double width; double height; } pageHeaderReferenceSize;
@property (nonatomic) struct CGSize { double width; double height; } sectionLeftTitleSize;
@property (weak, nonatomic) id<AWEListKitBaseLayoutDelegate> baseDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layoutAttributesClass;

- (BOOL)shouldHidePageHeaderWithCollectionView:(id)a0;
- (BOOL)enableProtection;
- (struct CGSize { double x0; double x1; })sizeForSectionLeftTitleInSection:(long long)a0;
- (void)updateCachedSectionLeftTitleAttributes;
- (void)updatePageHeaderLayoutAttributes;
- (long long)currentScrollSection;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPageHeaderInSection:(long long)a0;
- (struct CGSize { double x0; double x1; })referenceSizeForPageHeaderInSection:(long long)a0;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayout;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)finalizeAnimatedBoundsChange;

@end
