@class NSString;

@interface BDPPluginAuthentication : BDPBridgeInstancePlugin

@property (copy, nonatomic) NSString *token;

- (void)getInnerTokenSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;

@end
