@class NSString, NSDictionary;

@interface LLDitoDataTask : NSObject

@property (copy, nonatomic) NSString *currentParseContainer;
@property (copy, nonatomic) NSDictionary *nodeMap;

- (id)nodeWithTag:(id)a0;
- (void)dfs_nodeTreeWithRootNodeTag:(id)a0 needDepthSearch:(id /* block */)a1 beSearched:(id /* block */)a2 didDepthSearch:(id /* block */)a3;
- (id)fetchContainerNodeComponentTagListMapFromPageModel:(id)a0;
- (id)inheritanceChain:(id)a0;
- (BOOL)removeNodeTag:(id)a0;
- (BOOL)replaceNodeWithOriginNodeTag:(id)a0 newNodeTag:(id)a1;
- (id)nextSubNodeTagIfNeedBuild:(id)a0 didBuildTagSet:(id)a1;
- (BOOL)clearNodeTag:(id)a0;
- (void).cxx_destruct;

@end
