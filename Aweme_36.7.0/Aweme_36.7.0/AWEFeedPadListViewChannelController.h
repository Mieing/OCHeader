@class DUXPopover, NSString, AWEPadListViewChannelInfo, UIViewController;
@protocol AWEFeedTabItemViewControllerProtocol, AWEHPActivityDispatchComponentProtocol, AWEHPChannelControllerConfigProtocol, AWEPadListViewChannelGuideManagerProtocol;

@interface AWEFeedPadListViewChannelController : NSObject <AWEFeedPadListViewChannelGuideManagerDelegate, AWEHPChannelControllerProtocol>

@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *contentVC;
@property (retain, nonatomic) AWEPadListViewChannelInfo *channelInfo;
@property (retain, nonatomic) id<AWEHPActivityDispatchComponentProtocol> dispatchComponent;
@property (retain, nonatomic) id<AWEPadListViewChannelGuideManagerProtocol> guideManager;
@property (retain, nonatomic) DUXPopover *popOver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> config;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (BOOL)channelRefreshWithModel:(id)a0 completion:(id /* block */)a1;
- (void)hideBadgeWithCompletion:(id /* block */)a0;
- (id)getCustomTrackParamsWithTrackInfo:(id)a0;
- (void)channelDidLoadWithType:(unsigned long long)a0;
- (BOOL)channelIsAvailableWithError:(id *)a0;
- (void)channelViewDidAppear;
- (void)channelViewDidDisappear;
- (void)channelLandingTabWithModel:(id)a0;
- (BOOL)channelReleaseContentViewController:(id)a0;
- (id)getContentViewController;
- (void)generateContentVCIfNeed;
- (id)refreshMethod:(unsigned long long)a0;
- (void)fetchMediumChannelTypeWithConfig:(id)a0;
- (void)trackRefreshData:(unsigned long long)a0;
- (void)showBadge:(id)a0 completion:(id /* block */)a1;
- (void)showBubble:(id)a0 clickCallBack:(id /* block */)a1 completion:(id /* block */)a2 dismissBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
