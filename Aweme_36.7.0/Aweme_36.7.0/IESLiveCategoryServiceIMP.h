@class IESLiveActionSheetPresentViewController, NSString, IESLiveOptCategoryStore, IESLiveOptCategoryContainerView, IESLiveOptCategoryAPI, UIView;

@interface IESLiveCategoryServiceIMP : NSObject <IESLiveCategoryService>

@property (retain, nonatomic) IESLiveOptCategoryStore *store;
@property (retain, nonatomic) IESLiveOptCategoryAPI *categoryApi;
@property (retain, nonatomic) IESLiveOptCategoryContainerView *containerView;
@property (retain, nonatomic) IESLiveActionSheetPresentViewController *actionPresentor;
@property (retain, nonatomic) UIView *maskView;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissOptCategoryContainer;
- (void)trackOptCategoryViewDisplay;
- (void)trackOptCategoryViewDidSelectWithCategory:(id)a0;
- (void)openCategoryPanelWithHostVC:(id)a0 liveType:(unsigned long long)a1 eventContext:(id)a2 category:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
