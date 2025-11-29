@class NSString;
@protocol AWEHPChannelControllerProtocol;

@interface AWEHPContentVCSetChannelConfigPluginController : NSObject <AWEHPChannelPluginControllerMultiInstanceProtocol>

@property (weak, nonatomic) id<AWEHPChannelControllerProtocol> channelController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
