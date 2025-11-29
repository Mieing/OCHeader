@class NSString, UIViewController, AWEFeedActivityChannelInfoModel;
@protocol AWEHPChannelControllerConfigProtocol, AWEFeedTabItemViewControllerProtocol, AWEHPCommonActivityContainer;

@interface AWEHPCommonActivityNormalAdapter : NSObject <AWEHPCommonActivityAdapter>

@property (retain, nonatomic) id<AWEHPChannelControllerConfigProtocol> config;
@property (retain, nonatomic) AWEFeedActivityChannelInfoModel *infoModel;
@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *contentVC;
@property (weak, nonatomic) id<AWEHPCommonActivityContainer> activityContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)topBarItemConfig;
- (id)badgeArray;
- (id)bubbleArray;
- (unsigned long long)topTabTheme;
- (unsigned long long)bottomTabTheme;
- (id)initWithActivityContainer:(id)a0 channelConfig:(id)a1;
- (BOOL)activityAllowReloadWithConfig:(id)a0;
- (void)activityWillReloadWithConfig:(id)a0;
- (void)activityDidReload;
- (BOOL)activityIsAvailableWithError:(id *)a0;
- (id)getActivityViewController;
- (void)destroyActivityViewController;
- (void)activityDidLoadWithType:(unsigned long long)a0;
- (id)p_getInfoModelFromDict:(id)a0;
- (BOOL)p_checkActivityTabDataWithError:(id *)a0;
- (BOOL)p_canShow;
- (void).cxx_destruct;
- (id)activityID;

@end
