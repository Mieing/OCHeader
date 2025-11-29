@class IESLiveAnchorContext, NSMutableDictionary;

@interface IESLiveAnchorBizPlugin : IESLiveContainerBasePlugin <IESLiveAnchorBizPluginLifeCycle>

@property (readonly, weak, nonatomic) IESLiveAnchorContext *context;
@property (retain, nonatomic) NSMutableDictionary *tokens;

- (id)subscribeMessages;
- (void).cxx_destruct;
- (id)init;
- (void)setContext:(id)a0;

@end
