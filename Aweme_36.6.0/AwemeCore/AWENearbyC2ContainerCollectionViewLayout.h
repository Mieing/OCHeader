@class NSArray, NSDictionary;
@protocol AWENearbyC2ContainerLayoutDelegate;

@interface AWENearbyC2ContainerCollectionViewLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) NSArray *topInsetArray;
@property (retain, nonatomic) NSArray *bottomInsetArray;
@property (retain, nonatomic) NSArray *columnsCountArray;
@property (retain, nonatomic) NSDictionary *layoutInfo;
@property (retain, nonatomic) NSArray *sectionsHeights;
@property (copy, nonatomic) NSDictionary *itemsSizeDict;
@property (copy, nonatomic) NSArray *sectionConfig;
@property (copy, nonatomic) NSArray *sectionsItemWidth;
@property (nonatomic) double currentContentHeight;
@property (weak, nonatomic) id<AWENearbyC2ContainerLayoutDelegate> delegate;
@property (nonatomic) double fixTop;
@property (nonatomic) BOOL isStickyHeader;
@property (nonatomic) BOOL isTopForHeader;
@property (nonatomic) BOOL isStickyFooter;

- (void)calculateSectionConfig;
- (void)calculateColumnsCount;
- (void)calculateCellWidthInSection;
- (void)calculateSectionsTopInsetAndBottomInset;
- (BOOL)layoutOptimizeEnable;
- (void)calculateLayoutInfo;
- (void)calculateItemsSize;
- (void)calculateSectionsHeights;
- (void)calculateItemsAttributes;
- (double)headerHeightForIndexPath:(id)a0;
- (double)footerHeightForIndexPath:(id)a0;
- (double)topInSection:(long long)a0;
- (double)bottomInSection:(long long)a0;
- (id)calculateHeightForSection:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForWaterfallCellIndexPath:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForWaterfallHeaderAtIndexPath:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForWaterfallFooterAtIndexPath:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForDecorationViewAtIndexPath:(id)a0;
- (double)headerToTopInSection:(long long)a0;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)setup;

@end
