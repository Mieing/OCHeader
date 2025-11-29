@class AWEIMFloatingViewDispatcher, AWEIMMessageListLayoutConfig, NSString, UIView, AWEIMFloatingContainerView;
@protocol AWEIMMessageListBottomFloatingAction, AWEIMMessageListLayoutInterface, AWEIMMessageListBottomFloatingViewProtocol, AWEIMMessageListInputModuleInterface;

@interface AWEIMMessageListBottomFloatingComponent : AWEIMComponentBase <AWEIMMessageListBottomFloatingInterface, AWEIMMultiSelectedAction, AWEIMMessageListInputModuleAction, AWEIMMessageBaseVCLayoutAction>

@property (retain, nonatomic) AWEIMFloatingContainerView *bottomFloatingContainer;
@property (weak, nonatomic) id<AWEIMMessageListLayoutInterface> layoutService;
@property (retain, nonatomic) AWEIMFloatingViewDispatcher *bottomFloatingViewDispatch;
@property (weak, nonatomic) id<AWEIMMessageListInputModuleInterface> inputService;
@property (weak, nonatomic) AWEIMMessageListLayoutConfig *currentAnimation;
@property (weak, nonatomic) id<AWEIMMessageListBottomFloatingAction> publisher;
@property (weak, nonatomic) id<AWEIMMessageListBottomFloatingViewProtocol> viewHost;
@property (nonatomic) BOOL isManualHidden;
@property (weak, nonatomic) UIView *dismissingView;
@property (weak, nonatomic) UIView *showingView;
@property (nonatomic) BOOL isFloatMode;
@property (nonatomic) BOOL delayForceLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)currentPriorityObject;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)viewWillAnimateAlongsideTransitionToSizeWith:(struct CGSize { double x0; double x1; })a0;
- (void)createContainerViewIfNeeded;
- (void)showBottomFloatingViewInHost:(id)a0 withConfig:(id)a1;
- (void)autoDispatchFloatingViewWithPriority:(long long)a0 priorityObject:(id)a1;
- (void)registerPriority:(long long)a0 priorityObject:(id)a1;
- (void)dismissBottomFloatingView:(id)a0 withConfig:(id)a1;
- (double)collectionViewBottomInset;
- (void)multiSelectedStateDidChanged:(BOOL)a0;
- (void)didUpdateInputVCFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputViewType:(long long)a1 oldInputViewType:(long long)a2;
- (double)p_viewWidth;
- (void)p_setupBottomContainer;
- (void)p_tryRegisterPriority:(long long)a0 priorityObject:(id)a1;
- (void).cxx_destruct;
- (void)dispatch;

@end
