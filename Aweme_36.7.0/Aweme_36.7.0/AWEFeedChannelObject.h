@class UIViewController, AWEHPChannelEditAbilityImpl, AWEHPChannelBadgeAbilityImpl, AWEHPChannelTopBarAbilityImpl, AWEHPChannelBubbleAbilityImpl, NSString, AWEHPChannelTabItemAbilityImpl, AWEHPChannelControllerPrivatedConfig, AWEHPChannelRefreshAbilityImpl, AWEHPChannelLifeCycleInfoModel, NSArray, AWEHPChannelCommonStage, AWEHPChannelBottomBarStage, AWEHPChannelTopBarStage, AWEHPChannelPageAbilityImpl, AWEHPChannelXTabStage, NSObject, AWEHPChannelCornerAbilityImpl, AWEHPChannelBaseManager, AWEHPChannelPageViewController, AWEHPTopTabItemModel, AWEHPChannelControllerConfig, AWEHPChannelThemeAbilityImpl, AWEHomePageContextTabNode;
@protocol AWEHPChannelControllerProtocol, AWEFeedTabItemViewControllerProtocol, AWEHPChannelObjectProtocol;

@interface AWEFeedChannelObject : NSObject <AWEHPChannelObjectProtocol>

@property (nonatomic) long long channelMode;
@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) NSString *channelType;
@property (readonly, nonatomic) NSString *channelTitle;
@property (readonly, nonatomic) NSString *referString;
@property (readonly, nonatomic) long long index;
@property (weak, nonatomic) AWEHomePageContextTabNode *tabNode;
@property (retain, nonatomic) AWEHPTopTabItemModel *model;
@property (nonatomic) BOOL isChannelLoaded;
@property (nonatomic) BOOL tryUnloadFlag;
@property (weak, nonatomic) AWEFeedChannelObject *parentChannel;
@property (retain, nonatomic) AWEHPChannelLifeCycleInfoModel *lcInfoModel;
@property (retain, nonatomic) AWEHPChannelControllerConfig *bridge;
@property (retain, nonatomic) NSObject<AWEHPChannelControllerProtocol> *controller;
@property (retain, nonatomic) AWEHPChannelBaseManager *channelManager;
@property (copy, nonatomic) NSArray *lifeCycleControllers;
@property (retain, nonatomic) NSArray *bizPrePluginControllers;
@property (retain, nonatomic) NSArray *bizPostPluginControllers;
@property (retain, nonatomic) NSArray *publicPrePluginControllers;
@property (retain, nonatomic) NSArray *publicPostPluginControllers;
@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *contentViewController;
@property (retain, nonatomic) AWEHPChannelPageViewController *pageViewController;
@property (nonatomic) BOOL isChannelViewAppear;
@property (nonatomic) double viewAppearTimeInterval;
@property (retain, nonatomic) AWEHPChannelTopBarAbilityImpl *topBarAbilityImpl;
@property (retain, nonatomic) AWEHPChannelPageAbilityImpl *pageAbilityImpl;
@property (retain, nonatomic) AWEHPChannelTabItemAbilityImpl *tabItemAbilityImpl;
@property (retain, nonatomic) AWEHPChannelBubbleAbilityImpl *bubbleAbilityImpl;
@property (retain, nonatomic) AWEHPChannelEditAbilityImpl *editAbilityImpl;
@property (retain, nonatomic) AWEHPChannelRefreshAbilityImpl *refreshAbilityImpl;
@property (retain, nonatomic) AWEHPChannelBadgeAbilityImpl *badgeAbilityImpl;
@property (retain, nonatomic) AWEHPChannelThemeAbilityImpl *themeAbilityImpl;
@property (retain, nonatomic) AWEHPChannelCornerAbilityImpl *cornerAbilityImpl;
@property (copy, nonatomic) NSArray *abilityImplList;
@property (retain, nonatomic) AWEHPChannelBottomBarStage *tabBarStage;
@property (retain, nonatomic) AWEHPChannelTopBarStage *topTabStage;
@property (retain, nonatomic) AWEHPChannelXTabStage *xTabStage;
@property (retain, nonatomic) AWEHPChannelCommonStage *commonStage;
@property (retain, nonatomic) AWEHPChannelControllerPrivatedConfig *privatedConfig;
@property (retain, nonatomic) NSArray *privatedPrePluginControllers;
@property (retain, nonatomic) NSArray *privatedPostPluginControllers;
@property (copy, nonatomic) NSArray *privatedLifeCycleControllers;
@property (weak, nonatomic) id<AWEHPChannelObjectProtocol> bottomHomeChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)topBarThemeStyle;
- (BOOL)bottomBarFillBackground;
- (unsigned long long)bottomBarThemeStyle;
- (id)getParentChannel;
- (long long)getChannelMode;
- (id)getSelectedChannel;
- (id)getTopBarAlphaQueue;
- (id)getTopBarHiddenQueue;
- (id)getTabBarAlphaQueue;
- (id)getTabBarHiddenQueue;
- (void).cxx_destruct;
- (id)init;
- (id)getChannelID;

@end
