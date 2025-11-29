@class AWEIMComponentManager;

@interface IESIMMultiTopFloatingTipsComponent : AWEIMComponentBase <AWEIMFloatingViewDispatchProtocol, AWEIMComponentManagerDependency, IESIMMultiTopFloatingTipsService, AWEIMComponentContainer, AWEIMMessageBaseVCLayoutAction, IESIMMessageTopLoadingAction, AWEIMOverseaUserMutingAction, AWEIMMultiSelectedAction> {
    void /* unknown type, empty encoding */ isDisplaying;
    void /* unknown type, empty encoding */ topFloatingTipType;
    void /* unknown type, empty encoding */ typeToPriorityDict;
    void /* unknown type, empty encoding */ messageListTopFloatingService;
    void /* unknown type, empty encoding */ containerVC;
    void /* unknown type, empty encoding */ cellViewModels;
    void /* unknown type, empty encoding */ uniqueIdToCellViewModelDict;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ isEditMode;
    void /* unknown type, empty encoding */ isLoading;
    void /* unknown type, empty encoding */ isOverseaUserState;
    void /* unknown type, empty encoding */ firstFrameOpt;
    void /* function */ continueBlock;
    void /* function */ removeBlock;
}

@property (nonatomic, retain) AWEIMComponentManager *componentManager;
@property (nonatomic, copy) id /* block */ continueBlock;
@property (nonatomic, copy) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;
@property (nonatomic) BOOL showInFloatMode;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)viewWillAnimateAlongsideTransitionToSizeWith:(struct CGSize { double x0; double x1; })a0;
- (void)foldContainer;
- (void)changeToOverseaUserState;
- (void)loadingComponentDidShowLoading;
- (void)loadingComponentDidDismissLoading;
- (void)multiSelectedStateDidChanged:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
