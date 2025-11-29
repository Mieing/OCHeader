@class AWEPadChildChannelInfo, UIViewController, NSString;
@protocol AWEHPChannelControllerConfigProtocol, AWEFeedTabItemViewControllerProtocol;

@interface AWEFeedPadChildChannelController : NSObject <AWEFeedPadListViewChannelGuideManagerDelegate, AWEHPChannelControllerProtocol>

@property (retain, nonatomic) AWEPadChildChannelInfo *channelInfo;
@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *contentVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> config;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (BOOL)channelRefreshWithModel:(id)a0 completion:(id /* block */)a1;
- (void)channelEnterWithModel:(id)a0;
- (id)getCustomTrackParamsWithTrackInfo:(id)a0;
- (void)channelDidLoadWithType:(unsigned long long)a0;
- (BOOL)channelIsAvailableWithError:(id *)a0;
- (BOOL)channelReleaseContentViewController:(id)a0;
- (id)getContentViewController;
- (void)generateContentVCIfNeed;
- (id)refreshMethod:(unsigned long long)a0;
- (void)fetchMediumChannelTypeWithConfig:(id)a0;
- (void)trackRefreshData:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
