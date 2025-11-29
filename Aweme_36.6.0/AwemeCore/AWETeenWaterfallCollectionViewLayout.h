@class NSMutableDictionary, NSDictionary, NSArray, NSMutableArray;
@protocol AWETeenWaterfallCollectionViewLayoutDelegate;

@interface AWETeenWaterfallCollectionViewLayout : AWEBaseListFlowLayout

@property (retain, nonatomic) NSMutableArray *columnHeights;
@property (retain, nonatomic) NSMutableArray *sectionItemAttributes;
@property (retain, nonatomic) NSMutableArray *allItemAttributes;
@property (retain, nonatomic) NSMutableDictionary *headersAttribute;
@property (retain, nonatomic) NSMutableDictionary *footersAttribute;
@property (retain, nonatomic) NSMutableArray *unionRects;
@property (copy, nonatomic) NSDictionary *itemsWilldelete;
@property (copy, nonatomic) NSDictionary *itemsWillInsert;
@property (copy, nonatomic) NSArray *itemsWillReload;
@property (retain, nonatomic) NSArray *sectionsWillReload;
@property (retain, nonatomic) NSMutableArray *cachedItemsSize;
@property (weak, nonatomic) id<AWETeenWaterfallCollectionViewLayoutDelegate> delegate;
@property (nonatomic) BOOL enableCacheItems;
@property (nonatomic) long long columnCount;
@property (nonatomic) double minimumColumnSpacing;
@property (nonatomic) double headerHeight;
@property (nonatomic) double footerHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } headerInset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } footerInset;
@property (nonatomic) unsigned long long itemRenderDirection;
@property (nonatomic) double minimumContentHeight;
@property (nonatomic) BOOL supportsFullWidthCell;

- (long long)columnCountForSection:(long long)a0;
- (unsigned long long)longestColumnIndexInSection:(long long)a0;
- (unsigned long long)shortestColumnIndexInSection:(long long)a0;
- (BOOL)p_hasInvalidateInfo;
- (void)p_clearAllInvalidateInfo;
- (unsigned long long)nextColumnIndexForItem:(long long)a0 inSection:(long long)a1;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)commonInit;
- (id)initWithCoder:(id)a0;
- (void)setMinimumInteritemSpacing:(double)a0;
- (void)setSectionInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
