@class UIButton, AWEBasicModeTabBarViewController, NSString;
@protocol AWEBasicModeTabBarGeneralButtonProtocol;

@interface AWEBizTabBarBasicModeFamiliarItemConfig : NSObject <AWEBasicModeTabBarItemConfigProtocol>

@property (retain, nonatomic) UIButton<AWEBasicModeTabBarGeneralButtonProtocol> *familiarButton;
@property (retain, nonatomic) AWEBasicModeTabBarViewController *familiarController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEBasicModeAdapterClass;
+ (id)sharedConfig;

- (id)aAWEBasicModeAdapter;
- (id)tabBarItemViewController;
- (id)tabBarItemButton;
- (id)selectInfoAtTabBarItemSelection;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (BOOL)canLandingWithTabId:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
