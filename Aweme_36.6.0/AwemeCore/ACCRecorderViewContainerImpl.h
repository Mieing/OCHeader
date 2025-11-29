@class ACCCameraSubscription, NSMapTable, ACCRecordLayoutViewHolder, NSMutableDictionary, UIView, ACCInteractionView, NSString;
@protocol ACCSwitchModeView, ACCLayoutContainerProtocol, ACCPanelViewController, ACCRecorderBarItemContainerView;

@interface ACCRecorderViewContainerImpl : NSObject <ACCRecorderViewContainer, FPViewContainer>

@property (weak, nonatomic) UIView *rootView;
@property (nonatomic) BOOL itemsShouldHide;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) ACCCameraSubscription *eventSubscription;
@property (retain, nonatomic) ACCInteractionView *interactionView;
@property (retain, nonatomic) NSMapTable *visibleHandlers;
@property (retain, nonatomic) ACCRecordLayoutViewHolder *layoutViewHolder;
@property (nonatomic) BOOL hasDidLoad;
@property (copy, nonatomic) id /* block */ extraConfigBlock;
@property (readonly, nonatomic) id<ACCRecorderBarItemContainerView> barItemContainer;
@property (readonly, nonatomic) UIView<ACCSwitchModeView> *switchModeView;
@property (readonly, nonatomic) id<ACCLayoutContainerProtocol> layoutManager;
@property (readonly, nonatomic) UIView<ACCSwitchModeView> *scanSwitchModeView;
@property (nonatomic) BOOL isMainRecorder;
@property (copy, nonatomic) id /* block */ interactionBlock;
@property (nonatomic) BOOL shouldClearUI;
@property (nonatomic) BOOL isShowingMVDetailVC;
@property (nonatomic) unsigned long long propPanelType;
@property (readonly, nonatomic) NSMutableDictionary *itemForceShowFlags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *preview;
@property (retain, nonatomic) UIView *otherPreview;
@property (readonly, nonatomic) UIView *modeContainerView;
@property (readonly, nonatomic) UIView *popupContainerView;
@property (readonly, nonatomic) id<ACCPanelViewController> panelViewController;

- (void)updateItemsHiddenWithAnimation:(BOOL)a0;
- (void)viewContainerDidLoad;
- (void)config:(id)a0;
- (void)injectBarItemContainer:(id)a0;
- (void)addVisibleHandler:(id)a0 viewType:(id)a1;
- (void)showItems:(BOOL)a0 animated:(BOOL)a1;
- (void)updateItemVisibleWithViewType:(id)a0 animated:(BOOL)a1;
- (void)setView:(id)a0 forViewType:(id)a1;
- (id)getViewForViewType:(id)a0;
- (BOOL)isShowingAnyPanel;
- (id)initWithRootView:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)containerViewDidLayoutSubviews;
- (void)removeEventObserver:(id)a0;
- (void)addEventObserver:(id)a0;

@end
