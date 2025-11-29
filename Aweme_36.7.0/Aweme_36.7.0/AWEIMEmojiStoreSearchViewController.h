@class AWEIMCommonSearchView, AWEIMEmojiStoreSearchResultView, UIView, AWEIMEmojiStoreSearchViewDataSource, AWEIMEmojiStoreSearchTipView, NSString, UIButton, NSDictionary, AWEIMEmojiStoreSearchHotWordView;

@interface AWEIMEmojiStoreSearchViewController : UIViewController <AWEIMCommonSearchViewDelegate, UIGestureRecognizerDelegate, AWEIMEmojiStoreSearchResultViewDelegate, AWEIMEmojiStoreSearchHotWordViewDelegate>

@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) AWEIMCommonSearchView *searchView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) AWEIMEmojiStoreSearchHotWordView *hotWordView;
@property (retain, nonatomic) AWEIMEmojiStoreSearchResultView *searchResultView;
@property (retain, nonatomic) AWEIMEmojiStoreSearchTipView *searchResultTipView;
@property (retain, nonatomic) AWEIMEmojiStoreSearchViewDataSource *dataSource;
@property (copy, nonatomic) NSString *searchingString;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addKVO;
- (void)cancelDidClick;
- (void)commonSearchView:(id)a0 textDidChange:(id)a1;
- (void)commonSearchViewDidClickReturnButton:(id)a0;
- (void)commonSearchViewDidClickClearButton:(id)a0;
- (void)tapToDismissKeyboardGesHandler:(id)a0;
- (void)didSelectHotWordViewCellWith:(id)a0;
- (void)searchResultViewLoadMore;
- (void)searchResultViewDidScroll;
- (void)refreshWithEmptySearchingString;
- (void)refreshWithSearchingString:(id)a0;
- (void)renderWithHotKeyWords:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)dismiss:(BOOL)a0;
- (void)setupUI;
- (void)setupLayout;

@end
