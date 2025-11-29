@class NSString, AWEHPXTabChannelManager;

@interface AWEHPXTabChannelTopTabTapPluginController : NSObject <AWEHPChannelPluginControllerProtocol>

@property (nonatomic) double lastClickTimestamp;
@property (weak, nonatomic) AWEHPXTabChannelManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)channelTopTabShouldRepeatedClickTab;
- (void).cxx_destruct;

@end
