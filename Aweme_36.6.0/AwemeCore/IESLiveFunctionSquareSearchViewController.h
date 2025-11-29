@class IESLiveWebpLoadingView, UIView, NSArray, NSString, IESLiveFunctionSquareSearchViewModel, UIButton, IESLiveFunctionSquareViewSceneConfig, IESLiveFunctionSquareTextField, UITableView;
@protocol IESLiveFunctionSquareSearchViewControllerDelegate;

@interface IESLiveFunctionSquareSearchViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, IESLiveFunctionSquareCategoryContentTableViewCellDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *tableFooterView;
@property (retain, nonatomic) IESLiveFunctionSquareSearchViewModel *viewModel;
@property (retain, nonatomic) IESLiveFunctionSquareViewSceneConfig *sceneConfig;
@property (retain, nonatomic) IESLiveFunctionSquareTextField *textField;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIView *searchResultEmptyView;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingIndicator;
@property (copy, nonatomic) id /* block */ closeHandler;
@property (copy, nonatomic) id /* block */ cancelHandler;
@property (weak, nonatomic) id<IESLiveFunctionSquareSearchViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *gameList;
@property (nonatomic) BOOL clicked;
@property (nonatomic) unsigned long long searchMode;
@property (readonly, copy, nonatomic) NSString *currentSearchKeyword;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBinding;
- (void)updateDeleteAllSearchHistoryView;
- (void)deleteAllSearchHistory:(id)a0;
- (void)closeButtonDidClicked;
- (void)cancelButtonDidClicked;
- (void)tableViewDidClickItem:(id)a0;
- (void)tableViewDidClickDebugButtonWithItem:(id)a0;
- (void)refreshDataWithKeyword:(id)a0;
- (void)textFieldDidClearContent;
- (id)getMPParamWithRowNode:(id)a0 indexPath:(id)a1;
- (id)createSearchResultViewV2;
- (id)initWithSceneConfig:(id)a0;
- (void)refreshButtonDidClick:(id)a0;
- (void)updateSearchModelWithItems:(id)a0 useSearchMode:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })sizeWithSystemFontOfSize:(id)a0 maxHeight:(double)a1 str:(id)a2;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)dealloc;
- (void)setupUI;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void)searchBecomeFirstResponder;
- (void)reloadTableViewData;

@end
