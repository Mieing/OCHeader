@class IGListAdapter, NSMutableDictionary;

@interface AWECollectionViewMultiLayout : UICollectionViewLayout {
    struct vector<AWESectionLayoutEntity, std::allocator<AWESectionLayoutEntity>> { struct AWESectionLayoutEntity *__begin_; struct AWESectionLayoutEntity *__end_; struct AWESectionLayoutEntity *__cap_; } _sectionLayoutEntities;
}

@property (weak, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) NSMutableDictionary *attributesCache;
@property (retain, nonatomic) NSMutableDictionary *supplementaryAttributesCache;
@property (retain, nonatomic) NSMutableDictionary *decorationAttributesCache;

- (void)__calculateLayoutIfNeeded;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfSectionsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)__resetSupplementaryAttributesCache;
- (id)initWithListAdapter:(id)a0;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id).cxx_construct;

@end
