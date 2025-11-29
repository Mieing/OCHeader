@interface AWEBookImpl.BookpageInnerTableViewController : UIViewController <AWEBookDetailPageTabListViewControllerDelegate, AWERouterViewControllerProtocol, AWEAwemeDetailTableViewControllerDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_topTitleView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomView;
    void /* unknown type, empty encoding */ bookDetailSchema;
    void /* unknown type, empty encoding */ _hasShootButton;
    void /* unknown type, empty encoding */ isFirstOpen;
    void /* unknown type, empty encoding */ isFirstShow;
    void /* unknown type, empty encoding */ pageContext;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ detailTableViewController;
    void /* unknown type, empty encoding */ videoIsPlayWhenOpenBookDetail;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void)bookDetailPartialSheet:(id)a0 play:(BOOL)a1;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)detailTableViewControllerDidScroll:(id)a0 currentAwemeModel:(id)a1 targetIndex:(long long)a2;
- (void)detailTableViewControllerWillScrollToPreviousItem:(id)a0 currentAwemeModel:(id)a1 targetIndex:(long long)a2;
- (void)detailTableViewControllerWillScrollToNextItem:(id)a0 currentAwemeModel:(id)a1 targetIndex:(long long)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;

@end
