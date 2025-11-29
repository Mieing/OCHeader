@class IESLiveActionSheetPresentViewController, NSString, IESLiveOptCategoryStore, IESLiveOptCategoryContainerView, IESLiveGuideCategoryOptView;
@protocol IESLiveAnchorOptCategoryActions;

@interface IESLiveOptCategoryFragment : IESLiveGuideComponent <IESLiveContentCategoryModuleOptCategoryInterface, IESLiveContentCategoryModuleOptCategoryAction, IESLiveGuideActions>

@property (retain, nonatomic) IESLiveOptCategoryStore *store;
@property (retain, nonatomic) IESLiveOptCategoryContainerView *containerView;
@property (retain, nonatomic) IESLiveActionSheetPresentViewController *actionPresentor;
@property (retain, nonatomic) id<IESLiveAnchorOptCategoryActions> actionCreator;
@property (nonatomic) BOOL hasShowToast;
@property (retain, nonatomic) IESLiveGuideCategoryOptView *categoryView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentOrientationChanged:(long long)a0;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (id)currentAnchorId;
- (void)trackOptCategoryViewDisplay;
- (void)fetchOptCategoriesWithCurrentCategory:(id)a0 liveType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)trackOptCategoryViewDidSelectWithCategory:(id)a0;
- (void)showOptCategoryViewWithCategory:(id)a0 withLiveType:(unsigned long long)a1 eventContext:(id)a2;
- (void)dismissLiveOptCategoryContainer;
- (BOOL)shouldUseCategoryOptimizeAB;
- (void)checkOptCategoryLegalWithLiveType:(unsigned long long)a0 completion:(id /* block */)a1;
- (BOOL)shouldHideCategoryView;
- (BOOL)needShowCategoryView;
- (id)getSelectedCategory;
- (id)lastSelectedCategoryCache:(unsigned long long)a0;
- (id)categoryModelWithId:(long long)a0;
- (void)changeCategoryTo:(id)a0;
- (void)setupStore;
- (id)actionPresentorVC;
- (void)_dismissOptCategoryContainer;
- (void)refreshCategoryView;
- (void).cxx_destruct;
- (void)setupViews;

@end
