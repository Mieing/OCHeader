@class NSString, AWEFeedChannelManager;
@protocol AWEHPTopBarCommonAdapterFactory;

@interface AWEHPTabViewModelManager : NSObject <AWEHPChannelManagerDelegate>

@property (retain, nonatomic) AWEFeedChannelManager *channelManager;
@property (retain, nonatomic) id<AWEHPTopBarCommonAdapterFactory> adapterFactory;
@property (readonly, nonatomic) BOOL needResumeDelayUselessChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_generateHomepageChannel;
+ (id)sharedInstance;

- (id)getTopTabLandTabIndex;
- (id)getDefaultLandChannelWithManager:(id)a0 switchConfig:(id)a1;
- (void)reloadWithConfig:(id)a0 detail:(id)a1;
- (void)p_reloadWithConfig:(id)a0 detail:(id)a1;
- (id)getTopBarLeftEntrances;
- (void)reloadCurrentTabIDList:(id)a0 selectedTabID:(id)a1;
- (id)p_colorWithHexString:(id)a0;
- (void).cxx_destruct;

@end
