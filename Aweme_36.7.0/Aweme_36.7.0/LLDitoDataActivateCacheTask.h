@class NSMutableDictionary, LLDitoPageModel, NSMutableSet, NSMutableArray;

@interface LLDitoDataActivateCacheTask : LLDitoDataTask

@property (retain, nonatomic) LLDitoPageModel *pageModel;
@property (retain, nonatomic) LLDitoPageModel *cachePageModel;
@property (retain, nonatomic) NSMutableSet *updateNodeTagSet;
@property (retain, nonatomic) NSMutableDictionary *nextNodeMap;
@property (retain, nonatomic) NSMutableDictionary *containerNodeMap;
@property (retain, nonatomic) NSMutableDictionary *viewModelMap;
@property (retain, nonatomic) NSMutableArray *lynxNodeList;
@property (retain, nonatomic) NSMutableArray *groupNodeList;

- (void)mergeNodeMap;
- (void)nodeBeSearched:(id)a0;
- (void)nodeDidRelatedSubNodes:(id)a0;
- (void)markNode:(id)a0;
- (id)pageModel:(id)a0 cachePageModel:(id)a1;
- (void).cxx_destruct;

@end
