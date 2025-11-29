@class AWECommentModel, AWESearchCardTemplateModel, NSDictionary;
@protocol AWESearchResultControllerProxyProtocol, CachalotRenderPipelineComponentViewModel, AWESearchResultVerticalBaseViewControllerProtocol;

@interface AWESearchDecoratorCommentEffectInsertCardForContainerContext : NSObject

@property (retain, nonatomic) AWECommentModel *commentModel;
@property (weak, nonatomic) id<AWESearchResultVerticalBaseViewControllerProtocol, AWESearchResultControllerProxyProtocol> outerFlowViewController;
@property (retain, nonatomic) AWESearchCardTemplateModel *cardTemplate;
@property (nonatomic) BOOL scrollToTopAfterPublish;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> insertAfterAnchor;
@property (copy, nonatomic) NSDictionary *cardUIInfo;

- (void).cxx_destruct;

@end
