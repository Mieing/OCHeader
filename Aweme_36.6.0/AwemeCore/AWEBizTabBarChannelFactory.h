@interface AWEBizTabBarChannelFactory : NSObject

+ (id)sharedInstance;

- (id)getPublicPrePluginWithChannel:(id)a0;
- (id)getPublicPostPluginWithChannel:(id)a0;
- (id)getPrivatedPrePluginWithChannel:(id)a0;
- (id)getPrivatedPostPluginWithChannel:(id)a0;

@end
