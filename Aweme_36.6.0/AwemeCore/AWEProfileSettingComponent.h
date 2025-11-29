@class NSString, AWEBinding, UIView, UIViewController;
@protocol AWEHPProfileSideBarManagerProtocol, AWEProfileSettingSliderViewControllerProtocol;

@interface AWEProfileSettingComponent : AWEUserHomeBaseComponent <UIGestureRecognizerDelegate, AWEUserHomeControllerProtocol, AWEProfileSettingComponentProtocol>

@property (nonatomic) BOOL isHorizontalGesture;
@property (nonatomic) BOOL isSwipeGesture;
@property (retain, nonatomic) UIView *settingSliderMenuView;
@property (nonatomic) BOOL shouldKeepSettingSliderMenuView;
@property (retain, nonatomic) UIViewController<AWEProfileSettingSliderViewControllerProtocol> *profileSettingSliderVC;
@property (nonatomic) BOOL profileSettingSliderInDisplayForBtm;
@property (copy, nonatomic) id /* block */ rootFrameBlock;
@property (retain, nonatomic) AWEBinding *rootFrameBind;
@property (nonatomic) double rootOriginX;
@property (retain, nonatomic) id<AWEHPProfileSideBarManagerProtocol> hpSideBarManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)tabHelper;
- (long long)currentSelectedIndex;
- (BOOL)isShowSliderMenuView;
- (id)profileHeaderVC;
- (void)onThemeReload;
- (void)onResetUI;
- (void)onDidSyncAwemeUser:(id)a0 error:(id)a1;
- (void)resetSliderMenu;
- (void)onFindMoreExtensionAreaCardClicked;
- (void)onSliderMenuButtonClicked:(id)a0 highlightItemType:(long long)a1;
- (void)openSidebarBySchema:(id)a0;
- (BOOL)isRotationSupported;
- (void)handleShowSliderPanGestureAction:(id)a0;
- (void)__removeSettingSliderMenu;
- (void)__showSliderMenu:(BOOL)a0 animation:(BOOL)a1 highlightItemType:(long long)a2;
- (void)__handlePanGestureIfSliderShow:(BOOL)a0 gestureRecognizer:(id)a1;
- (void)__showSliderTrackerWithEnterMethod:(id)a0;
- (void)__updateTabBarSnapshot;
- (void)__showSliderTrackerWithEnterMethod:(id)a0 enterFrom:(id)a1;
- (void)publishEventForDismiss;
- (void)__showProfileSettingSliderVC;
- (void)changeViewFrameWith:(double)a0;
- (void)__sliderMenuAnimationWithOriginX:(double)a0 duration:(double)a1 showSlider:(BOOL)a2 removeSliderVC:(BOOL)a3 highlightItemType:(long long)a4;
- (void)__addProfileSettingSliderVC;
- (void)handleHideSliderPanGestureAction:(id)a0;
- (void)removeRootFrameBind;
- (void)publishEventForShow;
- (void)addRootFrameBind;
- (void)viewDidAppear;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (id)view;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewDidLoad;
- (id)parentViewController;
- (id)tabBarController;
- (void)viewDidDisappear;
- (void)onInit;
- (void)viewWillDisappear;

@end
