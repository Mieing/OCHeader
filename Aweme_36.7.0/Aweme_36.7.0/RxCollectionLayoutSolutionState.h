@class RxOrderedRangeIndexer, NSArray, NSDictionary, RxCollectionLayoutSectionGeometryTranslator, RxRTree;

@interface RxCollectionLayoutSolutionState : NSObject

@property (readonly, nonatomic) NSDictionary *auxillaryRangeIndexerKindDict;
@property (readonly, nonatomic) NSArray *bookmarks;
@property (readonly, nonatomic) RxRTree *geometricIndexer;
@property (readonly, nonatomic) RxOrderedRangeIndexer *itemRangeIndexer;
@property (readonly, nonatomic) RxCollectionLayoutSectionGeometryTranslator *sectionGeometryTranslator;

- (id)initWithGeometryTranslator:(id)a0 bookmarks:(id)a1 geometricIndexer:(id)a2 itemRangeIndexer:(id)a3 auxillaryRangeIndexerKindDict:(id)a4;
- (id)copyWithGeometryConverter:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
