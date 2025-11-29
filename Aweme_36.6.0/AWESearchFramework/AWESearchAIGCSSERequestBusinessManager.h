@class AWESearchCachalotLynxPipeline, NSDictionary, NSString, UIView, UIViewController;
@protocol AWESearchAIGCSSERequestManagerProtocol, CachalotRenderPipelineComponentViewModel, AWESearchAIGCStreamDataManagerProtocol, SearchCachalotViewInterface;

@interface AWESearchAIGCSSERequestBusinessManager : NSObject <AWESearchAIGCSSERequestManagerDelegate>

@property (retain, nonatomic) id<AWESearchAIGCSSERequestManagerProtocol> requestManager;
@property (retain, nonatomic) id<AWESearchAIGCStreamDataManagerProtocol> streamDataManager;
@property (copy, nonatomic) NSDictionary *lastRequestParams;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (weak, nonatomic) AWESearchCachalotLynxPipeline *lynxPipeline;
@property (weak, nonatomic) UIView<SearchCachalotViewInterface> *cachalotView;
@property (weak, nonatomic) UIViewController *refViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleDynamicPatchWithViewModel:(id)a0 generalSearchModel:(id)a1;

- (void)didReceiveAllData;
- (void)chunkRequestDidEndWithCommonResponse:(id)a0 withError:(id)a1 forceCanceled:(BOOL)a2;
- (void)clearBeforeNewLink;
- (void)didReceiveCommonResponse:(id)a0;
- (void)startRequestWithParams:(id)a0;
- (void)didReceiveFirstDataChunk;
- (void)retryRequestWithRetryCount:(long long)a0;
- (void)didEndReadChunkForError:(id)a0 errorReason:(long long)a1 currentResponse:(id)a2;
- (void)clearLastRequest;
- (void)sendStreamDataAfterComponentFinishRender:(id)a0;
- (void)startRequestWithViewModels:(id)a0;
- (void)reAnswer;
- (void)clearStreamData;
- (void)p_handleWithChunk:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
