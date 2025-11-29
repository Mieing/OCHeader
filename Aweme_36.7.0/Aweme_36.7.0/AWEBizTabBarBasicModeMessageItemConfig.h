@class UIButton, AWEBasicModeTabBarViewController, NSString;
@protocol AWEBasicModeTabBarGeneralButtonProtocol;

@interface AWEBizTabBarBasicModeMessageItemConfig : NSObject <AWEBasicModeTabBarItemConfigProtocol>

@property (retain, nonatomic) UIButton<AWEBasicModeTabBarGeneralButtonProtocol> *messageButton;
@property (retain, nonatomic) AWEBasicModeTabBarViewController *messageController;
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
