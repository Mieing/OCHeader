@class NSString, UIViewController;
@protocol AWEHPChannelControllerConfigProtocol, AWEFeedTabItemViewControllerProtocol, AWEPlayletTabViewControllerProtocol;

@interface AWEFeedPlayletCardChannelController : NSObject <AWEHPChannelControllerProtocol>

@property (retain, nonatomic) UIViewController<AWEPlayletTabViewControllerProtocol, AWEFeedTabItemViewControllerProtocol> *contentVC;
@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)channelTopTabDidSelect;
- (void)channelEnterWithModel:(id)a0;
- (void)channelTopTabDidUnSelect;
- (id)topBarAbility;
- (void)channelDidLoadWithType:(unsigned long long)a0;
- (void)channelLandingTabWithModel:(id)a0;
- (BOOL)channelReleaseContentViewController:(id)a0;
- (id)getContentViewController;
- (void)generateContentVCIfNeed;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
