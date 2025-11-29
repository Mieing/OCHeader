@class NSString, UIView;
@protocol IESIMContactPickerContentDataProviderDelegate, IESIMHalfScreenSearchView, IESIMContactPickerSelectService, IESIMContactPickerContentSectionBuilder;

@interface IESIMContactPickerSearchComponent : AWEIMComponentBase <IESIMHalfScreenSearchViewDelegate, IESIMContactPickerContentDataProvider, IESIMContactPickerSearchService, IESIMContactPickerCollectionViewAction, IESIMContactPickerComponentViewProvider>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView<IESIMHalfScreenSearchView> *searchView;
@property (retain, nonatomic) UIView *bottomLine;
@property (copy, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (weak, nonatomic) id<IESIMContactPickerSelectService> selectService;
@property (nonatomic) BOOL searchServiceIsActive;
@property (copy, nonatomic) id /* block */ flexTopContainerAnimationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (copy, nonatomic) id /* block */ modelTransformBlock;

- (id)getSearchResultWithKeyword:(id)a0;
- (id)componentContext;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)searchWithKeyword:(id)a0;
- (void)beginEdit;
- (id)getSearchProvider;
- (void)searchViewCancelSearch;
- (void)enableSearch:(BOOL)a0;
- (void)updateSearchKey:(id)a0;
- (id)currentSearchKey;
- (void)finishSearch;
- (void)endEdit;
- (void)setupFlexTopContainerAnimationBlock:(id /* block */)a0;
- (void)searchUser;
- (void)p_layoutUI;
- (BOOL)p_enableElongateHeightWhileSearch;
- (id)p_placeholderString;
- (void)p_refreshSearchState;
- (void)injectCommonInfoToCellModel:(id)a0;
- (void)updateCellModel:(id)a0 withIsSelected:(BOOL)a1;
- (id)cellModelForShareModel:(id)a0;
- (void)p_setupUI;
- (BOOL)isSearching;
- (void).cxx_destruct;
- (id)layout;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)log:(id)a0;
- (id)componentView;
- (void)cancelButtonTapped;

@end
