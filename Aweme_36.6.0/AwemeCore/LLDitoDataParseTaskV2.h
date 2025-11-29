@class NSString, NSDictionary, NSArray, NSMutableDictionary, LLDitoNode, NSMutableArray;

@interface LLDitoDataParseTaskV2 : LLDitoDataParseTask

@property (copy, nonatomic) id /* block */ buildVMBlock;
@property (copy, nonatomic) NSDictionary *layoutDataMap;
@property (copy, nonatomic) NSString *root;
@property (retain, nonatomic) LLDitoNode *rootNode;
@property (copy, nonatomic) NSArray *containerNodeList;
@property (copy, nonatomic) NSArray *groupNodeList;
@property (copy, nonatomic) NSArray *componentNodeList;
@property (retain, nonatomic) NSMutableDictionary *viewModelMap;
@property (retain, nonatomic) NSMutableArray *lynxNodeList;
@property (copy, nonatomic) NSDictionary *containerNodeMap;
@property (copy, nonatomic) id /* block */ exceptionBlock;

- (void)nodeBeSearched:(id)a0;
- (void)nodeDidRelatedSubNodes:(id)a0;
- (void)parseData:(id)a0 buildVMBlock:(id /* block */)a1 completeBlock:(id /* block */)a2 exceptionBlock:(id /* block */)a3;
- (BOOL)needSearchSubNodes:(id)a0;
- (id)parsePageInfo:(id)a0;
- (void)buildNodeMap:(id)a0 layoutDataMap:(id)a1;
- (id)fetchRootNodeTagList;
- (void)buildNodeTreeWithRootNodeTag:(id)a0;
- (id)fetchContainerNodeMap;
- (void)markComponentNode:(id)a0;
- (void)markNodeLayerZPosition:(id)a0;
- (void).cxx_destruct;

@end
