@protocol AWESearchBasicContainerViewControllerProtocol, CachalotRenderPipelineComponentViewModel, AWESearchAIGCSSEDataBuilderManagerDelegate;

@interface AWESearchAIGCSSEDataBuilderManager : NSObject

@property (weak, nonatomic) id<AWESearchBasicContainerViewControllerProtocol> container;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> rootNode;
@property (weak, nonatomic) id<AWESearchAIGCSSEDataBuilderManagerDelegate> delegate;

- (id)buildNodeWithChunkModel:(id)a0;
- (void)handleNewCardCmd:(id)a0 response:(id)a1;
- (void)handleReplaceCmd:(id)a0 response:(id)a1;
- (void)handleRemoveCmd:(id)a0 response:(id)a1;
- (id)buildNodeWithSSEData:(id)a0 rootNode:(id)a1;
- (void).cxx_destruct;

@end
