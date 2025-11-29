@class LLDitoPageModel, NSMutableDictionary, NSSet, NSMutableArray;
@protocol LLDitoCustomParserProtocol;

@interface LLDitoDataMergeTask : LLDitoDataTask

@property (copy, nonatomic) LLDitoPageModel *mainModel;
@property (copy, nonatomic) LLDitoPageModel *updateModel;
@property (copy, nonatomic) id /* block */ buildVMBlock;
@property (copy, nonatomic) id /* block */ exceptionBlock;
@property (retain, nonatomic) NSMutableDictionary *nodeMapForMerge;
@property (retain, nonatomic) NSMutableDictionary *viewModelMap;
@property (retain, nonatomic) NSMutableDictionary *containerNodeMap;
@property (retain, nonatomic) NSMutableArray *lynxNodeList;
@property (retain, nonatomic) NSMutableArray *groupNodeList;
@property (copy, nonatomic) NSSet *updateNodeTagSet;
@property (weak, nonatomic) id<LLDitoCustomParserProtocol> customParserImpl;

- (void)mergeNodeMap;
- (void)nodeBeSearched:(id)a0;
- (void)nodeDidRelatedSubNodes:(id)a0;
- (void)nodeDidSearchSubNodes:(id)a0;
- (BOOL)needSearchSubNodes:(id)a0;
- (void)recordMainNodeData;
- (void)buildNodeTreeRelated;
- (id)errorWithCode:(long long)a0 userInfo:(id)a1 node:(id)a2;
- (void)addNewNode:(id)a0;
- (void)mergeNode:(id)a0 newNode:(id)a1;
- (void)replaceOriginNode:(id)a0 newNode:(id)a1;
- (void)loadMoreSubNode:(id)a0 newNode:(id)a1;
- (void)updateNode:(id)a0 newNode:(id)a1;
- (void)removeNode:(id)a0 newNode:(id)a1;
- (void)clearNode:(id)a0 newNode:(id)a1;
- (id)appendingMoreSubNodeTagList:(id)a0 toOriginSubNodeTagList:(id)a1;
- (id)mergeSourceData:(id)a0 newSourceData:(id)a1;
- (void)removeNodeAndDescendantNodes:(id)a0;
- (id)dataMergeWithMainPageModel:(id)a0 updatePageModel:(id)a1 buildVMBlock:(id /* block */)a2 exceptionHandleBlock:(id /* block */)a3;
- (id)nextSubNodeTagNeedRelated:(id)a0 didRelatedTagSet:(id)a1;
- (void).cxx_destruct;
- (void)removeNode:(id)a0;

@end
