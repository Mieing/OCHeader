@class AWEIMSearchView, NSString, UIView;
@protocol IESIMContactPickerContentSectionBuilder;

@interface IESIMContactPickerShowSelectedSearchComponent : AWEIMComponentBase <IESIMContactPickerSearchService, IESIMContactPickerCollectionViewAction, IESIMContactPickerSelectAction, UITextFieldDelegate, AWEIMSearchBarDelegate, AWEIMSearchViewDelegate, IESIMContactPickerComponentViewProvider>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEIMSearchView *searchView;
@property (retain, nonatomic) UIView *bottomLine;
@property (copy, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (copy, nonatomic) id /* block */ flexTopContainerAnimationBlock;
@property (copy, nonatomic) id /* block */ modelTransformBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentContext;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)searchWithKeyword:(id)a0;
- (id)getSearchProvider;
- (void)searchViewCancelSearch;
- (void)enableSearch:(BOOL)a0;
- (void)updateSearchKey:(id)a0;
- (id)currentSearchKey;
- (void)didSelectCellModel:(id)a0;
- (void)didDeselectCellModel:(id)a0;
- (void)setupFlexTopContainerAnimationBlock:(id /* block */)a0;
- (void)clearBtnDidClicked:(id)a0;
- (double)textFieldLeftInsetForSearchBar:(id)a0;
- (void)removeSelectObject:(id)a0;
- (void)p_layoutUI;
- (id)p_placeholderString;
- (void)p_setupUI;
- (BOOL)isSearching;
- (void).cxx_destruct;
- (id)layout;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)log:(id)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)isEditing;
- (id)componentView;
- (void)textFieldDidChange:(id)a0;

@end
