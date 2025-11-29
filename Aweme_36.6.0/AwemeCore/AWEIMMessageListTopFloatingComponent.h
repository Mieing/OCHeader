@class AWEIMFloatingViewDispatcher, NSString, NSDictionary, AWEIMMessageListTopFloatingConfig, AWEIMFloatingContainerView;
@protocol AWEIMMessageListLayoutInterface;

@interface AWEIMMessageListTopFloatingComponent : AWEIMComponentBase <AWEIMMessageListTopFloatingInterface, AWEIMMessageListBackgroundAction, AWEIMMultiSelectedAction, AWEIMMessageBaseVCLayoutAction, IESIMMessageTopLoadingAction, AWEIMOverseaUserMutingAction>

@property (weak, nonatomic) id<AWEIMMessageListLayoutInterface> layoutService;
@property (retain, nonatomic) AWEIMFloatingViewDispatcher *topFloatingViewDispatch;
@property (retain, nonatomic) AWEIMFloatingContainerView *topFloatingContainer;
@property (retain, nonatomic) AWEIMMessageListTopFloatingConfig *currentConfig;
@property (nonatomic) BOOL isFloatMode;
@property (copy) NSDictionary *typeToPriorityDict;
@property (nonatomic) BOOL isMultiSelected;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isOverseaState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)registerPriority:(long long)a0 type:(long long)a1 priorityObject:(id)a2;
- (void)registerAssignedPriority:(id)a0 type:(long long)a1 priorityObject:(id)a2;
- (void)autoDispatchFloatingViewWithPriority:(long long)a0 type:(long long)a1 priorityObject:(id)a2;
- (void)autoDispatchFloatingViewWithAssignedPriority:(id)a0 type:(long long)a1 priorityObject:(id)a2;
- (void)showTopFloatingView:(id)a0 withConfig:(id)a1;
- (void)dismissTopFloatingView:(id)a0 withConfig:(id)a1;
- (id)currentPriorityObject;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)viewWillAnimateAlongsideTransitionToSizeWith:(struct CGSize { double x0; double x1; })a0;
- (void)messageListBackgroundImageDidUpdated:(id)a0;
- (void)changeToOverseaUserState;
- (void)loadingComponentDidShowLoading;
- (void)loadingComponentDidDismissLoading;
- (void)multiSelectedStateDidChanged:(BOOL)a0;
- (double)p_viewWidth;
- (void)configTypeToPriorityDict;
- (void)p_setupContainerView;
- (void)p_updateBottomSeparator:(BOOL)a0;
- (void)p_updateHiddenStatus;
- (id)configTypeToPriorityDictFromServerSettingsWithTargetKey:(id)a0;
- (id)configTypeToPriorityDictFromLocalSettingsWithTargetKey:(id)a0;
- (void).cxx_destruct;

@end
