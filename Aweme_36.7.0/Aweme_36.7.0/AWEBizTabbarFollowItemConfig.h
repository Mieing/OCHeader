@class UIViewController, NSString, AWEFeedChannelEnterModel, UIButton;
@protocol AWENormalModeTabBarItemConfigAbility, AWEFeedTabItemViewControllerProtocol, AWENormalModeTabBarGeneralButtonProtocol;

@interface AWEBizTabbarFollowItemConfig : NSObject <AWEConcernYellowDotBusinessControllerDelegate, AWEInnerNotificationMessage, AWEBizTabBarItemConfigProtocol>

@property (retain, nonatomic) UIButton<AWENormalModeTabBarGeneralButtonProtocol> *followTabbarButton;
@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *followContainerViewController;
@property (retain, nonatomic) id<AWENormalModeTabBarItemConfigAbility> tabBarAbility;
@property (retain, nonatomic) AWEFeedChannelEnterModel *enterModel;
@property (nonatomic) BOOL isBubbleDemote;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINHTSAdaperClass;
+ (Class)aAWENormalModeTabBarFactoryCommonAdapterClass;
+ (BOOL)canInitByFrame;

- (void)setupNotification;
- (void)tabBarControllerViewDidAppear;
- (id)tabBarItemViewController;
- (id)tabBarItemButton;
- (id)selectInfoAtTabBarItemSelection;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (BOOL)canLandingWithTabId:(id)a0 params:(id)a1;
- (void)setupTabBarAbility:(id)a0;
- (void)innerNotificationWillDisplay:(id)a0;
- (void)innerNotificationDidDisplay:(id)a0;
- (void)refreshIfYellowDotIsShowing;
- (void)hiddenYellowDot:(id /* block */)a0;
- (id)aAWEFeedModuleServiceDOUYINHTSAdaper;
- (id)liveAvatarsBubbleContentConfigWith:(id)a0;
- (void)followFeedRecommendCardDidFinished:(id)a0;
- (id)aAWENormalModeTabBarFactoryCommonAdapter;
- (void)showPointYellowDotWithComponentID:(id)a0 completion:(id /* block */)a1;
- (void)showTextYellowDotWithComponentID:(id)a0 text:(id)a1 completion:(id /* block */)a2;
- (void)showNumberYellowDotWithComponentID:(id)a0 count:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)showFollowBubbleWithConfig:(id)a0;
- (void)hideFollowBubbleWithConfig:(id)a0;
- (BOOL)currentFollowFeedAwemeIsAntiAddict;
- (long long)bottomChannel:(id)a0 enableRefresh:(id)a1;
- (void)bottomChannel:(id)a0 refreshWithModel:(id)a1 withCompletion:(id /* block */)a2;
- (void)endLandingTabWithTabId:(id)a0 withModel:(id)a1;
- (void)tabBarWillSelectItemWithEnterModel:(id)a0;
- (void)tabBarDidUnSelectItemToNextSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (void)tabBarDidSelectItemFromPreviousSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (void)itemViewDidAppear;
- (id)getCustomTrackParamsWithTrackInfo:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (id)initWithChannel:(id)a0;
- (void)setupConfig;

@end
