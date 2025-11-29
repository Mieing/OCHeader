@class IESLiveActionSheetPresentViewController, NSString, IESLiveOptCategoryContainerView, IESLiveUpdateCategoryStore;

@interface IESLiveUpdateCategoryFragment : IESLiveRoomComponent <IESLiveContentCategoryModuleOptCategoryAction, IESLiveContentCategoryModuleOptCategoryInterface>

@property (retain, nonatomic) IESLiveUpdateCategoryStore *store;
@property (retain, nonatomic) IESLiveOptCategoryContainerView *containerView;
@property (retain, nonatomic) IESLiveActionSheetPresentViewController *actionPresentor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentCreate;
- (void)componentMount;
- (void)componentOrientationChanged:(long long)a0;
- (void)showCategoryView;
- (BOOL)canShowRedDot;
- (id)liveTypeStr;
- (void)dismissOptCategoryContainer;
- (void)trackOptCategoryViewDisplay;
- (void)trackOptCategoryViewDidSelectWithCategory:(id)a0;
- (void)dismissLiveOptCategoryContainer;
- (BOOL)shouldUseCategoryOptimizeAB;
- (void)setupToolBarItem;
- (id)actionPresentorVC;
- (void)markRedDotHasShown:(id)a0;
- (unsigned long long)fetchLastLiveTypeFromLocal;
- (void).cxx_destruct;
- (void)setupActions;

@end
