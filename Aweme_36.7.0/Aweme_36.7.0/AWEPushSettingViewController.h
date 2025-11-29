@class AWESettingBaseViewModel, NSString, AWEPushSettingTracker, AWEPushSettingsGuideBannerView, AWEPushSettingReceiveWhoseNotificationView;

@interface AWEPushSettingViewController : AWESettingBaseViewController <AWERouterViewControllerProtocol, AWEPushSettingViewModelDelegate> {
    AWESettingBaseViewModel *_viewModel;
}

@property (nonatomic) BOOL hasHighLightFriendsYellowDotSettingCell;
@property (nonatomic) BOOL useNewStyle;
@property (nonatomic) BOOL pushEnable;
@property (nonatomic) BOOL inner;
@property (retain, nonatomic) AWEPushSettingReceiveWhoseNotificationView *whoseView;
@property (retain, nonatomic) AWEPushSettingsGuideBannerView *banner;
@property (retain, nonatomic) AWEPushSettingTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPushSettingsAdapterClass;
+ (id)getAdapterRouterViewController;

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)aAWEPushSettingsAdapter;
- (void)willDisplayItemModel:(id)a0;
- (void)didSelectItemModel:(id)a0;
- (id)__showFriendsYellowDotPath;
- (void)__flashHightlightAnimationForView:(id)a0;
- (void)pushSettingViewModel:(id)a0 flashCellHighlightAtIndexPath:(id)a1;
- (void)pushSettingViewModelFlashTableHeaderHighlight:(id)a0;
- (id)initWithInner:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)applicationDidBecomeActive:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)viewModel;

@end
