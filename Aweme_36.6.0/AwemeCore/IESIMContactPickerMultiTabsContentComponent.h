@class AWEIMComponentManager, NSString, NSDictionary, UIView, IESIMContactPickerViewController, IESIMContactPickerPageSwitchConfig;

@interface IESIMContactPickerMultiTabsContentComponent : AWEIMComponentBase <AWEIMComponentContainer, AWEIMComponentManagerDependency, IESIMContactPickerSearchAction, IESIMContactPickerMultiTabsTagFilterAction, IESIMContactPickerContentService, IESIMContactPickerSearchService, IESIMContactPickerSelectAction, IESIMContactPickerSearchResultAction, IESIMContactPickerMultiTabsInterface, IESIMContactPickerComponentViewProvider>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSDictionary *childVCInfo;
@property (retain, nonatomic) IESIMContactPickerViewController *mainPickerVC;
@property (copy, nonatomic) NSString *selectedTag;
@property (retain, nonatomic) IESIMContactPickerPageSwitchConfig *multiTabConfig;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ modelTransformBlock;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })emptyPageEdgeInsets;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)searchWithKeyword:(id)a0;
- (void)beginEdit;
- (id)getSearchProvider;
- (void)searchViewCancelSearch;
- (void)enableSearch:(BOOL)a0;
- (void)updateSearchKey:(id)a0;
- (id)currentSearchKey;
- (BOOL)searchServiceIsActive;
- (void)didSelectCellModel:(id)a0;
- (void)didDeselectCellModel:(id)a0;
- (id)currentVC;
- (id)tagForViewController:(id)a0;
- (id)emptyPageConfigForState:(unsigned long long)a0 emptyPage:(id)a1;
- (void)emptyPagePrimaryButtonTapped:(id)a0;
- (void)contactPickerSelectService:(id)a0 didAddSelectIdentifiers:(id)a1;
- (void)contactPickerSelectService:(id)a0 didRemoveSelectIdentifier:(id)a1;
- (void)endEdit;
- (id)pageSwitchConfig;
- (id)naviBarConfig;
- (BOOL)shouldShowNaviBar;
- (id)makeIdentifierForCellModel:(id)a0 extraInfo:(id)a1;
- (void)onSearchResult;
- (void)multiTabsTagFilterdidChangeToTag:(id)a0;
- (void)createSubVCWithTagIfNeed:(id)a0;
- (void)__resetViewHiddenState;
- (void)p_bindActionsAndServicesForPickerVCContext:(id)a0;
- (BOOL)isSearching;
- (void).cxx_destruct;
- (id)conversationID;
- (void)cancelSearch;
- (id)componentView;

@end
