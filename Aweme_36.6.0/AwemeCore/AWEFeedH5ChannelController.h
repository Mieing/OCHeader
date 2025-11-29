@class AWEFeedH5ChannelModel, UIViewController, NSString;
@protocol AWEHPChannelControllerConfigProtocol, AWEFeedTabItemViewControllerProtocol;

@interface AWEFeedH5ChannelController : NSObject <AWEHPChannelControllerProtocol>

@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *contentVC;
@property (retain, nonatomic) AWEFeedH5ChannelModel *h5Model;
@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getCustomTrackParamsWithTrackInfo:(id)a0;
- (void)channelDidLoadWithType:(unsigned long long)a0;
- (BOOL)channelIsAvailableWithError:(id *)a0;
- (BOOL)channelReleaseContentViewController:(id)a0;
- (id)getContentViewController;
- (void)generateContentVCIfNeed;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
