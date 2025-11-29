@class IESIMFansTagFilterView, NSString, UIView;

@interface IESIMContactPickerMultiTabsTagFilterComponent : AWEIMComponentBase <IESIMContactPickerSearchAction, IESIMContactPickerSearchResultAction, IESIMContactPickerMultiTabTagFilterInterface, IESIMContactPickerComponentViewProvider>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESIMFansTagFilterView *filterView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)refreshTagsInfo:(id)a0;
- (void)updateSelectedTag:(id)a0;
- (void)onSearchResult;
- (void).cxx_destruct;
- (void)cancelSearch;
- (id)componentView;

@end
