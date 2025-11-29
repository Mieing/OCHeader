@class NSString;

@interface AWEHomepageChannelPerfMetricsMonitorPostPlugin : NSObject <AWEHPChannelPluginControllerPrivateProtocol, AWEHPChannelPluginControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bottomChannelDidLoad:(id)a0;
- (void)bottomChannelDidReload:(id)a0;
- (void)bottomChannelViewDidLoad:(id)a0;
- (void)bottomChannelViewWillAppear:(id)a0;
- (void)bottomChannelViewDidAppear:(id)a0;
- (void)bottomChannel:(id)a0 willSelectItemWithEnterModel:(id)a1;
- (void)bottomChannel:(id)a0 didSelectItemFromPreviousSelectedType:(long long)a1 isByTap:(BOOL)a2;
- (void)bottomChannel:(id)a0 willUnselectItemWithLeaveModel:(id)a1;
- (void)bottomChannel:(id)a0 didUnselectItemToNextSelectedType:(long long)a1 isByTap:(BOOL)a2;
- (void)channelTopTabDidSelect:(id)a0;
- (void)channelTopTabDidUnSelect:(id)a0;
- (void)channel:(id)a0 didLoadWithType:(unsigned long long)a1;
- (void)channelDidReload:(id)a0;
- (void)channelViewDidLoad:(id)a0;
- (void)channelViewDidResume:(id)a0;
- (void)channelViewWillAppear:(id)a0;
- (void)channelViewDidAppear:(id)a0;
- (void)channel:(id)a0 enterWithModel:(id)a1;
- (void)channel:(id)a0 leaveWithModel:(id)a1;

@end
