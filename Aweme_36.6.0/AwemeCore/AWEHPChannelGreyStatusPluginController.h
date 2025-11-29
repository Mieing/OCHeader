@class NSString;
@protocol AWEHPChannelControllerPrivateConfigProtocol, AWEHPChannelControllerProtocol;

@interface AWEHPChannelGreyStatusPluginController : NSObject <AWEHPChannelPrivatedLifeCycle, AWEHPChannelPluginControllerPrivateProtocol, AWEHPChannelPluginControllerMultiInstanceProtocol>

@property (readonly, weak, nonatomic) id<AWEHPChannelControllerPrivateConfigProtocol> privatedConfig;
@property (weak, nonatomic) id<AWEHPChannelControllerProtocol> channelController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowInjectToChannel:(id)a0;

@end
