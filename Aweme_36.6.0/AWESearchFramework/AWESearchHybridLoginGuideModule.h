@class AWESearchHomePageHybridViewController, CAGradientLayer, AWESearchHybridLoginTipsView, NSDictionary, NSString;
@protocol AWESearchServiceManagerProtocol, AWESearchResultVerticalBaseViewControllerProtocol;

@interface AWESearchHybridLoginGuideModule : AWESearchBaseContainerService <AWEUserMessage, AWESearchVerticalServiceProtocol>

@property (retain, nonatomic) AWESearchHybridLoginTipsView *tipsView;
@property (retain, nonatomic) CAGradientLayer *notiGradient;
@property (weak, nonatomic) AWESearchHomePageHybridViewController *homepageVC;
@property (nonatomic) long long guideType;
@property (copy, nonatomic) NSDictionary *config;
@property (nonatomic) BOOL isDrag;
@property (nonatomic) double lastContentOffset;
@property (nonatomic) BOOL isShowed;
@property (nonatomic) BOOL isOtherBubbleShow;
@property (nonatomic) BOOL isReady;
@property (nonatomic) BOOL isFirstShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESearchResultVerticalBaseViewControllerProtocol> container;
@property (weak, nonatomic) id<AWESearchServiceManagerProtocol> serviceManager;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) long long priority;

+ (id)moduleName;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)handleABTestChange;
- (void)addNotifications;
- (void)feedDidScroll:(id)a0;
- (void)feedWillBeginDragging:(id)a0;
- (void)feedDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)feedDidEndDecelerating:(id)a0;
- (void)feedDidEndScrollingAnimation:(id)a0;
- (void)onAWEUIThemeChangeNotification;
- (void)searchHybird_setupUI;
- (void)registerColor;
- (void)showLoginTipsViewIfNeed;
- (void)_realShowTips;
- (void)handleAvoidEvent:(id)a0;
- (void)waitReady;
- (void)updatetRightButtonBgLayer:(BOOL)a0;
- (BOOL)checkAndUpdateExposureCount;
- (id)fetchGuideContent;
- (void)postDelayShowTips;
- (void)clearExposureCount;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)dealloc;
- (double)bottomOffset;

@end
