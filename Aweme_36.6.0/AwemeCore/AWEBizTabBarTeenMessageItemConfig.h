@class UIButton, AWETeenMessageViewController, NSString;
@protocol AWETeenModeTabBarGeneralButtonProtocol;

@interface AWEBizTabBarTeenMessageItemConfig : NSObject <AWEUserMessage, AWETeenModeTabBarItemConfigProtocol>

@property (retain, nonatomic) UIButton<AWETeenModeTabBarGeneralButtonProtocol> *teenMessageButton;
@property (retain, nonatomic) AWETeenMessageViewController *teenModeMessageViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)tabBarItemViewController;
- (id)tabBarItemButton;
- (id)selectInfoAtTabBarItemSelection;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (void)tabBarDidSelectItemFromPreviousSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (BOOL)loginIfNeededAtTabBarItemSelection:(BOOL)a0;
- (id)loginInfoAtTabBarItemSelectionFromPreviousSelectedType:(long long)a0;
- (void)tabBarDidDeselectItem;
- (void)p_fetchUnreadMessageCount;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupConfig;

@end
