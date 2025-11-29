@class NSString;

@interface AWEIMMyGroupInputComponent_SinglePlugin : AWEIMComponentBase <IESIMContactPickerSearchAction, AWEIMMyGroupContentAction>

@property (nonatomic) double panelNormalHeight;
@property (nonatomic) double customPanelHeight;
@property (nonatomic) double lastPanelHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_willDealloc;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppearAndRender;
- (id)searchService;
- (void)searchCancelButtonClicked;
- (void)p_resetHeight;
- (void)handleKeyboardShowWithNoti:(id)a0;
- (void)p_updatePanelHeightIfNeed;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)cancelSearch;
- (id)containerContext;

@end
