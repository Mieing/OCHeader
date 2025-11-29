@class NSString;
@protocol AWEIMMessageListTopFloatingInterface, AWEIMMessageListBottomFloatingInterface, AWEIMMessageListBottomQuoteInterface, AWEIMMessageTableViewInterface, AWEIMMessageListFooterInterface, AWEIMMessageListInputModuleInterface;

@interface AWEIMMessageListLayoutComponent : AWEIMComponentBase <AWEIMMessageListLayoutInterface, AWEIMMessageListInputModuleAction, AWEIMMessageBaseVCLayoutAction>

@property (weak, nonatomic) id<AWEIMMessageListInputModuleInterface> inputService;
@property (weak, nonatomic) id<AWEIMMessageListTopFloatingInterface> topBannerService;
@property (weak, nonatomic) id<AWEIMMessageListBottomFloatingInterface> bottomBannerService;
@property (weak, nonatomic) id<AWEIMMessageListBottomQuoteInterface> bottomQuoteService;
@property (weak, nonatomic) id<AWEIMMessageListFooterInterface> footerService;
@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewService;
@property (nonatomic) BOOL isPureModeAdjustInset;
@property (nonatomic) BOOL enableLayout;
@property (nonatomic) BOOL isPureMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)insertSubview:(id)a0 withHierarchy:(long long)a1;
- (void)updatePageLayout:(id)a0;
- (void)viewWillAnimateAlongsideTransitionToSizeWith:(struct CGSize { double x0; double x1; })a0;
- (void)hostVC_afterFirstRender;
- (void)inputViewControllerDidChangeHeight:(id)a0;
- (id)createInitLayoutConfig;
- (id)p_layoutInfoSnapshot;
- (void)p_postLayoutChangeInfo:(id)a0 after:(id)a1 config:(id)a2;
- (void)p_layoutWithAnimation:(BOOL)a0 coordinate:(id /* block */)a1;
- (void)p_updateTableViewOffsetWithInfo:(id)a0 after:(id)a1;
- (void).cxx_destruct;
- (id)currentLayoutInfo;

@end
