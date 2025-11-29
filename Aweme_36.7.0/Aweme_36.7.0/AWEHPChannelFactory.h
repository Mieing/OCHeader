@class NSString;

@interface AWEHPChannelFactory : NSObject <AWEHPChannelFactoryProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (Class)getChannelControllerWithChannelModel:(id)a0;
- (id)getPublicPrePluginControllerWithChannel:(id)a0;
- (id)getPublicPostPluginControllerWithChannel:(id)a0;
- (id)getPrivatedPrePluginControllerWithChannel:(id)a0;
- (id)getPrivatedPostPluginControllerWithChannel:(id)a0;
- (BOOL)hasRegisterChannelType:(id)a0;

@end
