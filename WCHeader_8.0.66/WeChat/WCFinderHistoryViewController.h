@class WCFinderHistoryViewModel, NSString, WCFinderInteractiveHeader, WCFinderWXInteractivePage, WCFinderHistoryPageBase;

@interface WCFinderHistoryViewController : MMUIViewController <WCFinderFeedBaseViewControllerProtocol, WCFinderHistoryViewModelDelegate, WCFinderHistorySwitchExtension, WCFinderInteractiveHeaderDelegate, WCFinderWXInteractivePageVC>

@property (retain, nonatomic) WCFinderHistoryViewModel *viewModel;
@property (retain, nonatomic) WCFinderInteractiveHeader *header;
@property (retain, nonatomic) WCFinderHistoryPageBase *pageView;
@property (retain, nonatomic) WCFinderWXInteractivePage *interactivePage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)dealloc;
- (BOOL)showNavigationBarSepLine;
- (void)setupHeader;
- (void)updateCurrentPage;
- (void)setupMenuItems;
- (id)makeSearchBtn;
- (id)makeMoreBtn;
- (void)onClickSearch;
- (void)onClickMore;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)onInteractiveHeaderClickTab:(id)a0;
- (void)onHistoryRecardDayChanges;
- (void)onHistoryShowSearchIconChanged;
- (void)onFinderHistoryDidClean;
- (void).cxx_destruct;

@end
