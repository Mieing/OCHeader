@class NSString, UIViewController, AWEFeedLynxChannelInfo;
@protocol AWEHPChannelControllerConfigProtocol, AWEFeedTabItemViewControllerProtocol;

@interface AWEFeedLynxChannelController : NSObject <AWEHPChannelControllerProtocol>

@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *contentVC;
@property (retain, nonatomic) AWEFeedLynxChannelInfo *channelInfo;
@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)channelDidLoadWithType:(unsigned long long)a0;
- (BOOL)channelIsAvailableWithError:(id *)a0;
- (BOOL)channelReleaseContentViewController:(id)a0;
- (id)getContentViewController;
- (void)generateContentVCIfNeed;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
