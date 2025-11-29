@class UIButton, AWEBasicModeFeedRootViewController, NSString;
@protocol AWEBasicModeTabBarGeneralButtonProtocol;

@interface AWEBizTabBarBasicModeFeedItemConfig : NSObject <AWEBasicModeTabBarItemConfigProtocol>

@property (retain, nonatomic) UIButton<AWEBasicModeTabBarGeneralButtonProtocol> *feedButton;
@property (retain, nonatomic) AWEBasicModeFeedRootViewController *feedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedConfig;

- (id)tabBarItemViewController;
- (id)tabBarItemButton;
- (id)selectInfoAtTabBarItemSelection;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (BOOL)canLandingWithTabId:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
