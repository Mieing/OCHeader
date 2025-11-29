@class UILabel, WCTimeLineFooterView, NSMutableArray, UIButton, UIView, UIScrollView, NSString, WCCardAvailableSeed, WCCardChooseEmptyView, MMUIView, MMTableView, NSData, UrlLabel;
@protocol WCCardChooseViewControllerDelegate;

@interface WCCardChooseViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, IWCCardPkgExt, MMRefreshTableFooterDelegate, WCCardChooseItemViewDelegate, IWCShareCardPkgExt, ILinkEventExt> {
    WCCardAvailableSeed *_availableSeed;
    BOOL _isLoading;
    NSMutableArray *_cardList;
    NSMutableArray *_shareCardList;
    MMTableView *_tableView;
    WCCardChooseEmptyView *_emptyView;
    UIScrollView *_loadingView;
    UIButton *_confirmBtn;
    UIView *_bottomContentView;
    UILabel *_bottomTipsLabel;
    UrlLabel *_bottomUrlLabel;
    struct map<long, WCCardChooseViewSectionType, std::less<long>, std::allocator<std::pair<const long, WCCardChooseViewSectionType>>> { struct __tree<std::__value_type<long, WCCardChooseViewSectionType>, std::__map_value_compare<long, std::__value_type<long, WCCardChooseViewSectionType>, std::less<long>>, std::allocator<std::__value_type<long, WCCardChooseViewSectionType>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long, WCCardChooseViewSectionType>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, WCCardChooseViewSectionType>, std::less<long>>> { unsigned long long __value_; } __pair3_; } __tree_; } _sectionIndexToType;
    WCTimeLineFooterView *_tableFooterView;
    MMUIView *_tableDefaultFooterView;
    NSData *_controlBuff;
    NSMutableArray *_chooseInfoLists;
}

@property (weak, nonatomic) id<WCCardChooseViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCardAvailableSeed:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initData;
- (void)initTableView;
- (void)initLoadingView;
- (void)initEmptyView;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)onWCCardChooseInfo:(id)a0;
- (BOOL)bIsSupportMultiSelect;
- (void)loadCellSubView:(id)a0 chooseInfo:(id)a1;
- (void)onLeftButtonOP;
- (void)onConfirmBtnPress:(id)a0;
- (void)onGetAvailableCardInfo:(id)a0 isEnd:(BOOL)a1 buff:(id)a2 ErrCode:(int)a3;
- (void)onMarkShareCardError;
- (void)showTableView;
- (void)showLoadingView;
- (void)showEmptyView;
- (void)onLinkClicked:(id)a0 backupUrl:(id)a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
