@class NSArray, NSMutableSet, NSMutableDictionary;
@protocol DitoBodyContainerLayoutDataSource;

@interface DitoBodyContainerLayout : UICollectionViewLayout

@property (retain, nonatomic) NSArray *bodyAttributesList;
@property (nonatomic) double contentHeight;
@property (copy, nonatomic) NSArray *preBodyAttributesList;
@property (retain, nonatomic) NSMutableSet *insertIndexPathSet;
@property (retain, nonatomic) NSArray *insertRangeList;
@property (retain, nonatomic) NSMutableSet *deleteIndexPathSet;
@property (retain, nonatomic) NSArray *deleteRangeList;
@property (retain, nonatomic) NSMutableDictionary *moveItemMap;
@property (weak, nonatomic) id<DitoBodyContainerLayoutDataSource> dataSource;

+ (Class)layoutAttributesClass;

- (id)keyFromIndexPath:(id)a0;
- (id)fetchIndexRange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maskViewFrameAtIndex:(long long)a0 toRangeList:(id)a1 final:(BOOL)a2;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (void)finalizeCollectionViewUpdates;

@end
