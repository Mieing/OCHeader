@class MMOrderCenterLandingPageContainerFilteringTitleView, MMOrderCenterLandingPageController, NSString;
@protocol MMOrderCenterReporter;

@interface MMOrderCenterLandingPageContainerController : MMUIViewController <MMOrderCenterOrderDataProviderExt>

@property (retain, nonatomic) MMOrderCenterLandingPageController *primaryController;
@property (retain, nonatomic) MMOrderCenterLandingPageController *filteringController;
@property (retain, nonatomic) MMOrderCenterLandingPageContainerFilteringTitleView *filteringTitleView;
@property (retain, nonatomic) NSString *filteringAppId;
@property (retain, nonatomic) NSString *filteringShopName;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) id<MMOrderCenterReporter> reporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFilteringAppId:(id)a0 filteringShopName:(id)a1;
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)onFilteringTitleViewTapped;
- (void)onShopNameDetermined:(id)a0 forFilteringAppId:(id)a1;
- (void)updateTitleBar;
- (void)updateViewController;
- (void)reportEntry;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
