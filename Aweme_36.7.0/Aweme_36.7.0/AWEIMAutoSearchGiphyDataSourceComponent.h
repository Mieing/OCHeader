@class NSString, AWEIMAutoSearchGiphyPipelineNode, AWEIMAutoSearchGiphyPipelineContext;

@interface AWEIMAutoSearchGiphyDataSourceComponent : AWEIMComponentBase <AWEIMAutoSearchGiphyDataSourceComponentInterface>

@property (nonatomic) unsigned long long conversationType;
@property (copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) AWEIMAutoSearchGiphyPipelineNode *normalEntryNode;
@property (retain, nonatomic) AWEIMAutoSearchGiphyPipelineNode *refreshCacheNode;
@property (retain, nonatomic) AWEIMAutoSearchGiphyPipelineContext *reqContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interveneNode;
+ (id)networkNode;
+ (id)updateCacheNode;
+ (id)updateInterveneNode;
+ (id)effectDataNode;
+ (id)emoticonDataNode;

- (void)componentDidMounted:(id)a0;
- (void)searchGiphyWithKey:(id)a0 shouldLoadMore:(BOOL)a1 offset:(long long)a2 queryIndex:(long long)a3 completion:(id /* block */)a4;
- (id)p_createReqContextWithSearchKey:(id)a0;
- (id)checkCacheNode;
- (void).cxx_destruct;
- (void)setupPipeline;

@end
