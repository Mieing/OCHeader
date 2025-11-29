@class UIView, NSString, AWETeenSubscribeBackToFeedMaskView, UITapGestureRecognizer, AWEListDataController, AWETeenAuthorRecommendViewController, UIPanGestureRecognizer, UILabel, AWETeenExtraParamModel;
@protocol AWETeenHomepageRootViewControllerProtocol, AWETeenFeedChannelControllerProxyProtocol;

@interface AWETeenSubscribeFeedViewController : AWETeenFeedBaseViewController <AWETeenCustomDisplayViewControllerDelegate, AWETeenSubscribeBackToFeedMaskViewDelegate, AWEPadUITrackerProtocol, UIScrollViewDelegate, UIGestureRecognizerDelegate, AWETeenHomepageContentViewControllerProtocol>

@property (retain, nonatomic) UIView *subscribeEmptyPageView;
@property (retain, nonatomic) UILabel *emptyPageInformativeLabel;
@property (retain, nonatomic) UILabel *emptyPageTitleLabel;
@property (retain, nonatomic) AWETeenSubscribeBackToFeedMaskView *viewMask;
@property (nonatomic) BOOL shouldShowNomoreToast;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (retain, nonatomic) AWETeenAuthorRecommendViewController *authorRecommendController;
@property (nonatomic) BOOL shouldRefreshWhenAppear;
@property (weak, nonatomic) id<AWETeenHomepageRootViewControllerProtocol> rootVC;
@property (nonatomic) BOOL maskViewIsApearing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *awe_padUITrackerPageEnterFrom;
@property (nonatomic) BOOL awe_padUITrackerIgnoreStayTime;
@property (readonly, nonatomic) long long vcType;
@property (readonly, nonatomic) AWEListDataController *dataController;
@property (readonly, nonatomic) AWETeenExtraParamModel *extraParam;
@property (nonatomic) BOOL scrollEnabled;
@property (retain, nonatomic) id<AWETeenFeedChannelControllerProxyProtocol> controllerProxy;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)currentTabIsTop;
- (void)handleConnectionChanged:(id)a0;
- (id)currentVideoModel;
- (void)showMask;
- (void)refreshWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)setMaxPlayedIndex:(long long)a0;
- (void)autoRefreshIfNeeded;
- (BOOL)bottomBarFillBackground;
- (unsigned long long)bottomTabThemeType;
- (id)initWithDataController:(id)a0 initialIndex:(long long)a1 vcType:(long long)a2 extra:(id)a3;
- (void)p_addGestureRecognizer;
- (void)didUpdateSubscribeStatus:(long long)a0 secUserID:(id)a1;
- (void)trackHomepageTabChangeWithEnterFrom:(id)a0 enterMethod:(id)a1;
- (unsigned long long)currentTopTabBarTheme;
- (BOOL)supportInterestChannel:(id)a0;
- (void)dismissSubscribeMaskAndShowInteractionViewIfNeeded;
- (BOOL)p_isShowAuthorRecommend;
- (void)subscribeMaskViewBackToFeed:(id)a0;
- (void)p_addAuthorRecommendViewController;
- (void)p_checkAppearQulityEvent;
- (void)dismissMaskAndShowInteractionView;
- (void)p_cancelQulityEvent;
- (void)p_qualitySceneSubscribeSuccess:(BOOL)a0 qualityDesc:(id)a1 error:(id)a2;
- (void)p_checkEmptyPageQulityEvent;
- (BOOL)p_isTimeToShowMask;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
