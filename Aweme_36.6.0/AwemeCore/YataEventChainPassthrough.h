@class YataEventTriggerContext, YataRenderNode;

@interface YataEventChainPassthrough : NSObject

@property (retain, nonatomic) YataEventTriggerContext *triggerContext;
@property (retain, nonatomic) YataRenderNode *renderNode;

- (void).cxx_destruct;

@end
