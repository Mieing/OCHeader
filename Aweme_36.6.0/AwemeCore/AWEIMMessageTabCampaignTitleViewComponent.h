@class NSString, UIView;
@protocol AWEIMMessageTabCampaignInterface, AWEIMMessageTabNaviBarInterface, AWEUGActivityNoticeTitleViewProtocol;

@interface AWEIMMessageTabCampaignTitleViewComponent : AWEIMComponentBase <AWEIMMessageTabNaviTitleViewProvider>

@property (retain, nonatomic) UIView<AWEUGActivityNoticeTitleViewProtocol> *campaignTitleView;
@property (nonatomic) BOOL canShow;
@property (weak, nonatomic) id<AWEIMMessageTabCampaignInterface> campaignService;
@property (weak, nonatomic) id<AWEIMMessageTabNaviBarInterface> naviBarService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)handleEnterMessageTabEvent;
- (void)onTabBarDidChangeNotification:(id)a0;
- (void)configCampaignCustomNavigation;
- (BOOL)canShowCurrentTitleView;
- (id)currentNavigationTitleView;
- (void).cxx_destruct;

@end
