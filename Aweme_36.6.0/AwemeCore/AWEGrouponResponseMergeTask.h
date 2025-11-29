@interface AWEGrouponResponseMergeTask : NSObject

@property (copy, nonatomic) id /* block */ completeBlock;

- (id)errorWithCode:(long long)a0 msg:(id)a1;
- (void)mergePageViewModel:(id)a0 newPageViewModel:(id)a1 completeBlock:(id /* block */)a2;
- (void)invokeFailureCompleteBlockWithError:(id)a0;
- (void)invokeFinishCompleteBlockWithPageViewModel:(id)a0;
- (id)updatePageViewModel:(id)a0 newPageViewModel:(id)a1;
- (id)mergePageInfo:(id)a0 newPageInfo:(id)a1;
- (id)nodeMerge:(id)a0 mergedNodeMap:(id)a1 newNodeMap:(id)a2;
- (id)loadMoreNodeWithTag:(id)a0 oldNodeMap:(id)a1 newNodeMap:(id)a2;
- (id)refreshNodeWithTag:(id)a0 oldNodeMap:(id)a1 newNodeMap:(id)a2;
- (id)updateNodeWithTag:(id)a0 oldNodeMap:(id)a1 newNodeMap:(id)a2;
- (id)removeNodeWithTag:(id)a0 nodeMap:(id)a1;
- (id)clearNodeWithTag:(id)a0 nodeMap:(id)a1;
- (id)nodeMapInTreeWhichAsRoot:(id)a0 nodeMap:(id)a1;
- (id)nodeTagListInTreeWhichAsRoot:(id)a0 nodeMap:(id)a1;
- (id)containerNodeMapFromNodeMap:(id)a0;
- (void).cxx_destruct;

@end
