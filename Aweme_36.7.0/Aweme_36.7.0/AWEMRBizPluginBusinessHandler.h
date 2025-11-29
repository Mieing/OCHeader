@protocol AWEMessageReachPluginAbilityProtocol;

@interface AWEMRBizPluginBusinessHandler : NSObject

@property (weak, nonatomic) id<AWEMessageReachPluginAbilityProtocol> plugin;

- (id)initWithChannelPlugin:(id)a0;
- (id)createMessageReachComponentController;
- (void)updateParamContextWhenShowNext:(id)a0;
- (void)handleClearComponentListWithSource:(id)a0;
- (void)clearShowContextFromSource:(id)a0;
- (id)config;
- (void).cxx_destruct;
- (id)channelID;
- (id)showContext;
- (id)componentList;

@end
