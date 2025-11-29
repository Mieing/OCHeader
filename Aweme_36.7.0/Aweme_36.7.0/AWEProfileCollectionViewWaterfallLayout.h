@class NSString, NSMutableArray, NSMutableDictionary;
@protocol AWEProfileCollectionViewDelegateWaterfallLayout, UICollectionViewDataSource;

@interface AWEProfileCollectionViewWaterfallLayout : UICollectionViewLayout <AWEProfileCollectionViewWaterfallLayoutProtocol>

@property (weak, nonatomic) id<AWEProfileCollectionViewDelegateWaterfallLayout> delegate;
@property (readonly, nonatomic) id<UICollectionViewDataSource> datasource;
@property (retain, nonatomic) NSMutableArray *columnHeights;
@property (retain, nonatomic) NSMutableArray *sectionItemAttributes;
@property (retain, nonatomic) NSMutableArray *allItemAttributes;
@property (retain, nonatomic) NSMutableDictionary *headersAttribute;
@property (retain, nonatomic) NSMutableDictionary *footersAttribute;
@property (retain, nonatomic) NSMutableArray *unionRects;
@property (retain, nonatomic) NSMutableArray *previousItemAttributes;
@property (nonatomic) long long previousItemSection;
@property (nonatomic) long long columnCount;
@property (nonatomic) double minimumColumnSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) double headerHeight;
@property (nonatomic) double footerHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } headerInset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } footerInset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (copy, nonatomic) id /* block */ columnCountBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)columnCountForSection:(long long)a0;
- (unsigned long long)longestColumnIndexInSection:(long long)a0;
- (unsigned long long)shortestColumnIndexInSection:(long long)a0;
- (unsigned long long)nextColumnIndexForItem:(long long)a0 inSection:(long long)a1;
- (double)itemWidthInSectionAtIndex:(long long)a0;
- (void)prepareForClearPreviousItems;
- (double)prepareForLoadPreviousInSection:(long long)a0 addedItemCountNumber:(id)a1;
- (double)calculatePreviousAttributesInSection:(long long)a0 addedItemCountNumber:(id)a1;
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

@end
