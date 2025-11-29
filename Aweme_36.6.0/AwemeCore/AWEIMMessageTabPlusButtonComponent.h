@class NSArray, AWEButton, NSString, AFDLeftExtensionPopoverSheetView, AWEIMComponentManager;
@protocol AWEIMMessageTabModeInterface, AWEIMMessageTabPlusButtonSettingsDataInterface, AWEIMMessageTabPlusButtonPriorityInterface, AWEIMMessageTabNaviBarInterface;

@interface AWEIMMessageTabPlusButtonComponent : AWEIMComponentBase <AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMMessageTabNaviButtonProvider, AWEIMMessageTabPlusButtonInterface>

@property (retain, nonatomic) AWEButton *barIconPlusButton;
@property (weak, nonatomic) id<AWEIMMessageTabNaviBarInterface> naviBarService;
@property (retain, nonatomic) AFDLeftExtensionPopoverSheetView *plusListPopView;
@property (weak, nonatomic) id<AWEIMMessageTabModeInterface> messageTabModeService;
@property (weak, nonatomic) id<AWEIMMessageTabPlusButtonPriorityInterface> messageTabPlusButtonPriorityService;
@property (weak, nonatomic) id<AWEIMMessageTabPlusButtonSettingsDataInterface> messageTabPlusButtonSettingsDataService;
@property (copy) NSArray *displayedDatasPriorities;
@property (copy) NSArray *displayedDatasItems;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)hostVC_viewDidDisappear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (long long)buttonPosition;
- (BOOL)canShowInNaviBar;
- (id)customNaviButtonView;
- (BOOL)isPlusPanelDislaying;
- (void)dismissPlusPanel;
- (BOOL)hasEntryView;
- (id)displayedPriorities;
- (id)p_customizeButtonPosition;
- (id)p_constructPlusListData;
- (void)p_showBarPlusList:(id)a0;
- (void)p_trackClickCornerPlusActionList:(id)a0;
- (BOOL)hitServiceContainerRoleIdWhiteList;
- (id)p_constructServiceChatPlusListData;
- (long long)__popoverSheetColorMode;
- (id)__buttonTitleColor;
- (void)configPopoverSheetShapeColor:(id)a0;
- (void)p_plusListPopViewWillShow:(id)a0;
- (void)p_didClickPlusButton;
- (void).cxx_destruct;
- (id)displayedItems;

@end
