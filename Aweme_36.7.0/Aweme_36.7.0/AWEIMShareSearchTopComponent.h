@class IESIMShareMoreSelectionContext, NSString, IESIMShareSearchBar, IESIMContactPickerComponentContext;
@protocol IESIMContactPickerContentDataProviderDelegate, IESIMContactPickerContentSectionBuilder, IESIMContactPickerSelectService;

@interface AWEIMShareSearchTopComponent : AWEIMComponentBase <IESIMContactPickerSelectAction, IESIMContactPickerSearchService, IESIMContactPickerContentSubComponent, IESIMContactPickerContentDataProvider, IESIMContactPickerComponentViewProvider>

@property (retain, nonatomic) IESIMShareSearchBar *topSearchView;
@property (copy, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (retain, nonatomic) IESIMContactPickerComponentContext *pickerComponent;
@property (retain, nonatomic) IESIMShareMoreSelectionContext *selectionContext;
@property (weak, nonatomic) id<IESIMContactPickerSelectService> selectService;
@property (nonatomic) double lastSearchTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ modelTransformBlock;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;

- (id)getSearchResultWithKeyword:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (id)getSearchProvider;
- (void)searchViewCancelSearch;
- (void)enableSearch:(BOOL)a0;
- (void)updateSearchKey:(id)a0;
- (id)currentSearchKey;
- (void)contactPickerSelectService:(id)a0 didAddSelectIdentifiers:(id)a1;
- (void)contactPickerSelectService:(id)a0 didRemoveSelectIdentifier:(id)a1;
- (id)p_searchTypes;
- (id)p_filterGroupIfNeeded:(id)a0;
- (id)p_filterPublicGroupIfNeeded:(id)a0;
- (id)p_filterBAccountUserIfNeeded:(id)a0;
- (void)searchTextDidChange:(id)a0;
- (void)p_searchWithText:(id)a0 deferPromise:(id)a1;
- (id)p_filterAndMapSearchUserResult:(id)a0;
- (void)setupCellModel:(id)a0;
- (void)didSelectContact:(id)a0;
- (BOOL)isSearching;
- (void).cxx_destruct;
- (void)cancelSearch;
- (BOOL)isEditing;
- (id)componentView;

@end
