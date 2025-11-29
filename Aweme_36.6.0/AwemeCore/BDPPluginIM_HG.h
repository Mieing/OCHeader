@protocol BDPIMPluginDelegate;

@interface BDPPluginIM_HG : BDPBridgeInstancePlugin

@property (retain, nonatomic) id<BDPIMPluginDelegate> imPlugin;

- (void)shareMessageToFriendWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;

@end
