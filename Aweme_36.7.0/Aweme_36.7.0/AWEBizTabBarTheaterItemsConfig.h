@class UIButton, NSString, AWETheaterViewController;
@protocol AWENormalModeTabBarItemConfigAbility, AWEHPBottomChannelProtocol, AWENormalModeTabBarGeneralButtonProtocol;

@interface AWEBizTabBarTheaterItemsConfig : NSObject <AWEBizTabBarMessage, AWEUserMessage, AWEBizTabBarItemConfigProtocol>

@property (retain, nonatomic) UIButton<AWENormalModeTabBarGeneralButtonProtocol> *theaterButton;
@property (retain, nonatomic) AWETheaterViewController *theaterViewController;
@property (retain, nonatomic) id<AWENormalModeTabBarItemConfigAbility> tabBarAbility;
@property (retain, nonatomic) id<AWEHPBottomChannelProtocol> channelModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWENormalModeTabBarFactoryCommonAdapterClass;
+ (id)sharedConfigWithChannel:(id)a0;
+ (Class)aAWETheaterViewControllerCommonAdapterClass;
+ (Class)aAWEBizTabBarTheaterItemsConfigAdapterClass;
+ (id)sharedConfig;

- (id)tabBarItemViewController;
- (id)tabBarItemButton;
- (id)selectInfoAtTabBarItemSelection;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (BOOL)canLandingWithTabId:(id)a0 params:(id)a1;
- (void)setupTabBarAbility:(id)a0;
- (id)aAWENormalModeTabBarFactoryCommonAdapter;
- (long long)bottomChannel:(id)a0 enableRefresh:(id)a1;
- (void)bottomChannel:(id)a0 refreshWithModel:(id)a1 withCompletion:(id /* block */)a2;
- (void)tabBarDidSelectItemFromPreviousSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (id)aAWETheaterViewControllerCommonAdapter;
- (void)showUnreadBadgeWithComponentID:(id)a0 showCallBack:(id /* block */)a1 hideCallBack:(id /* block */)a2 downgradeCallBack:(id /* block */)a3;
- (id)aAWEBizTabBarTheaterItemsConfigAdapter;
- (id)theaterButtonText;
- (void).cxx_destruct;
- (id)initWithChannel:(id)a0;

@end
