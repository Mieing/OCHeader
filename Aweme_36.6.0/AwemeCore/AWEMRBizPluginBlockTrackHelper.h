@protocol AWEMessageReachPluginAbilityProtocol;

@interface AWEMRBizPluginBlockTrackHelper : NSObject

@property (weak, nonatomic) id<AWEMessageReachPluginAbilityProtocol> plugin;

- (id)initWithChannelPlugin:(id)a0;
- (void)trackBlockComponentList:(id)a0 paramContext:(id)a1 blockCode:(long long)a2 blockDesc:(id)a3;
- (void)trackBlockComponentListForSamePriority:(id)a0 componentModel:(id)a1 paramContext:(id)a2;
- (void)trackBlockComponentModel:(id)a0 paramContext:(id)a1 fromCache:(BOOL)a2 blockCode:(long long)a3 blockDesc:(id)a4;
- (void)trackBlockComponentList:(id)a0 paramContext:(id)a1 showResult:(long long)a2;
- (void)trackBlockComponentModel:(id)a0 paramContext:(id)a1 fromCache:(BOOL)a2 showResult:(long long)a3;
- (id)getBlockBizTrackExtraWithComponentModel:(id)a0 paramContext:(id)a1;
- (id)config;
- (void).cxx_destruct;
- (id)channelID;
- (id)showContext;

@end
