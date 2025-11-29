@protocol TingEventPluginProtocol;

@interface WebviewJSEventHandlerTingBase : WebviewJSEventHandlerBase

@property (weak, nonatomic) id<TingEventPluginProtocol> outterTingPlugin;

- (id)tingPlugin;
- (void).cxx_destruct;

@end
