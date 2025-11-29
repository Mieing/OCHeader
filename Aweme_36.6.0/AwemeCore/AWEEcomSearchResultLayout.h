@class NSString, NSMutableArray;
@protocol AWEEcomNewSearchResultLayout;

@interface AWEEcomSearchResultLayout : UICollectionViewFlowLayout <AWEEcomSearchResultLayoutProtocol>

@property (weak, nonatomic) id<AWEEcomNewSearchResultLayout> delegate;
@property (retain, nonatomic) NSMutableArray *columnHeights;
@property (retain, nonatomic) NSMutableArray *sectionItemAttributes;
@property (retain, nonatomic) NSMutableArray *allItemAttributes;
@property (retain, nonatomic) NSMutableArray *unionRects;
@property (nonatomic) BOOL enableCacheItems;
@property (nonatomic) long long columnCount;
@property (nonatomic) double minimumColumnSpacing;
@property (nonatomic) double minimumContentHeight;
@property (nonatomic) BOOL supportsFullWidthCell;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } sectionInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)columnCountForSection:(long long)a0;
- (unsigned long long)longestColumnIndexInSection:(long long)a0;
- (unsigned long long)shortestColumnIndexInSection:(long long)a0;
- (unsigned long long)nextColumnIndexForItem:(long long)a0 inSection:(long long)a1;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)commonInit;
- (id)initWithCoder:(id)a0;

@end
