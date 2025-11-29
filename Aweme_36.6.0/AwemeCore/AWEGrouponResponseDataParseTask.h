@interface AWEGrouponResponseDataParseTask : NSObject

@property (copy, nonatomic) id /* block */ completeBlock;

- (id)errorWithCode:(long long)a0 msg:(id)a1;
- (id)createNodeWithTag:(id)a0 nodeData:(id)a1;
- (void)parseData:(id)a0 completeBlock:(id /* block */)a1;
- (void)invokeFailureCompleteBlockWithError:(id)a0;
- (id)parseNodesMap:(id)a0;
- (void)builRelationships:(id)a0 layoutData:(id)a1;
- (void)invokeFinishCompleteBlockWithPageViewModel:(id)a0;
- (void)builRelationshipsWithNode:(id)a0 subTagList:(id)a1 nodeMap:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
