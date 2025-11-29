@class NSMutableDictionary;

@interface IGListCollectionViewLayout : UICollectionViewLayout {
    struct vector<IGListSectionEntry, std::allocator<IGListSectionEntry>> { struct IGListSectionEntry *__begin_; struct IGListSectionEntry *__end_; struct IGListSectionEntry *__cap_; } _sectionData;
    NSMutableDictionary *_attributesCache;
    long long _minimumInvalidatedSection;
    NSMutableDictionary *_supplementaryAttributesCache;
}

@property (readonly, nonatomic) BOOL stickyHeaders;
@property (readonly, nonatomic) double topContentInset;
@property (readonly, nonatomic) BOOL stretchToEdge;
@property (readonly, nonatomic) long long scrollDirection;
@property (nonatomic) double stickyHeaderYOffset;
@property (nonatomic) BOOL showHeaderWhenEmpty;

+ (Class)invalidationContextClass;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfSectionsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithStickyHeaders:(BOOL)a0 scrollDirection:(long long)a1 topContentInset:(double)a2 stretchToEdge:(BOOL)a3;
- (id)initWithStickyHeaders:(BOOL)a0 topContentInset:(double)a1 stretchToEdge:(BOOL)a2;
- (void)_resetSupplementaryAttributesCache;
- (void)_calculateLayoutIfNeeded;
- (void)didModifySection:(long long)a0;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;

@end
