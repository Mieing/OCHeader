@class NSString, NSMutableDictionary, NSMutableSet, AWEDoubleColumnSearchMerchandiseQueryModel;

@interface AWESearchFilterBaseManager : NSObject

@property (retain, nonatomic) NSMutableSet *selectDataIDs;
@property (retain, nonatomic) NSString *enterFrom;
@property (nonatomic) long long resetID;
@property (nonatomic) BOOL isFilterAllSearch;
@property (copy, nonatomic) NSString *searchKeyword;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseQueryModel *queryModel;
@property (retain, nonatomic) NSMutableDictionary *dataIDModelListMap;
@property (retain, nonatomic) NSMutableDictionary *mutexModelListMap;

+ (id)filterManagerWithManager:(id)a0;

- (id)initWithEnterFrom:(id)a0;
- (void)resetWithQueryModel:(id)a0;
- (void)updateWithQueryModel:(id)a0;
- (id)getItemModelWithDataID:(id)a0;
- (BOOL)selectStateForModel:(id)a0;
- (BOOL)selectItemWithModel:(id)a0;
- (void)selectItemWithModels:(id)a0;
- (id)getFilterModelDataID:(id)a0;
- (id)sortParamsWithIsFromSelectBoard:(BOOL)a0;
- (BOOL)selectStateForChildComponent:(id)a0 recursive:(BOOL)a1;
- (id)getBusinessInfoModelWithDataID:(id)a0;
- (BOOL)isNoButtonComponent:(id)a0;
- (id)selectModels;
- (void)clearChildComponentSelectStateWithModel:(id)a0;
- (void)getSelectChildModelsWithModel:(id)a0 completion:(id /* block */)a1;
- (void)didSelectComponentWithDataID:(id)a0;
- (void)didUnselectComponentWithDataID:(id)a0;
- (id)selectedNodeInNextLayerForModel:(id)a0;
- (id)selectedLeafNodeForModel:(id)a0;
- (void)initRelationshipEnableInitDefaultSelect:(BOOL)a0;
- (void)recursiveComponentModel:(id)a0 enableInitDefaultSelect:(BOOL)a1;
- (id)getStyleInfoModelWithStyleID:(id)a0;
- (void)recursiveClearChildComponentSelectStateWithModel:(id)a0 list:(id)a1;
- (void)unselectComponentWithDataID:(id)a0;
- (void)selectComponentWithDataID:(id)a0;
- (id)sortParamsWithIsFromSelectBoard:(BOOL)a0 needParent:(BOOL)a1;
- (id)createFilterSelectTreeNodeWithDataID:(id)a0;
- (BOOL)isUserSelectedForChildComponent:(id)a0;
- (void)updateSelectStateWithManager:(id)a0;
- (void)selectItemsWithSelectDataIDs:(id)a0;
- (void).cxx_destruct;

@end
