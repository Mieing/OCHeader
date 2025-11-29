@class DitoPageContext, NSMutableDictionary, NSMutableArray;
@protocol DitoCustomParserProtocol;

@interface DitoDataParseTask : DitoDataTask

@property (copy, nonatomic) id /* block */ buildVMBlock;
@property (retain, nonatomic) NSMutableDictionary *viewModelMap;
@property (nonatomic) long long componentIndex;
@property (retain, nonatomic) NSMutableArray *lynxNodeList;
@property (weak, nonatomic) id<DitoCustomParserProtocol> customParserImpl;
@property (weak, nonatomic) DitoPageContext *context;

- (void)parseData:(id)a0 buildVMBlock:(id /* block */)a1 completeBlock:(id /* block */)a2 exceptionBlock:(id /* block */)a3;
- (id)parsePageInfo:(id)a0;
- (id)buildContainerNodeMapWithLayoutData:(id)a0 rootTag:(id)a1 nodesData:(id)a2;
- (id)buildNodeMapWithRootNode:(id)a0 layoutData:(id)a1 componentsData:(id)a2;
- (void)fetchViewModelByNode:(id)a0;
- (void)markLynxNode:(id)a0;
- (void)enumerateNodeMap:(id)a0 processBlock:(id /* block */)a1;
- (void)informSuperNodeWithTag:(id)a0 thisNodeIsIllegal:(id)a1 nodeMap:(id)a2;
- (id)findNextSubNode:(id)a0 buildedNodeMap:(id)a1;
- (id)buildNodeWithTag:(id)a0 superNodeTag:(id)a1 layoutData:(id)a2 componentsData:(id)a3;
- (void).cxx_destruct;

@end
