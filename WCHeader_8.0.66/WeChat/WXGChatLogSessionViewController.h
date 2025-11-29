@class UIView, UILabel, MMTableView, NSDate, NSString, UIImageView, UIButton, WCFilterView, MMUIActivityIndicatorView;
@protocol WXGChatLogSessionViewControllerDelegate;

@interface WXGChatLogSessionViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, IChatLogDataMgrExt, WCFilterViewDelegate> {
    struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<ChatLogSessionItem> *, std::allocator<std::shared_ptr<ChatLogSessionItem>>> { void *__value_; } __end_cap_; } _arrAllSessionItem;
    struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<ChatLogSessionItem> *, std::allocator<std::shared_ptr<ChatLogSessionItem>>> { void *__value_; } __end_cap_; } _arrSelectedData;
}

@property (retain, nonatomic) MMTableView *sessionTableView;
@property (retain, nonatomic) UIImageView *footerImageView;
@property (retain, nonatomic) UIView *seperatorLine;
@property (retain, nonatomic) UIButton *selectAllButton;
@property (retain, nonatomic) UIButton *nextStepButton;
@property (retain, nonatomic) UILabel *emptyTipLabel;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (retain, nonatomic) UILabel *sizeLabel;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingIndicatorView;
@property (retain, nonatomic) WCFilterView *filterView;
@property (retain, nonatomic) UIView *filterSeperatorLine;
@property (retain, nonatomic) NSDate *minDate;
@property (retain, nonatomic) NSDate *maxDate;
@property (nonatomic) BOOL bSelectAllTime;
@property (nonatomic) BOOL bSelectTextOnly;
@property (retain, nonatomic) NSDate *selectBeginDate;
@property (retain, nonatomic) NSDate *selectEndDate;
@property (nonatomic) unsigned long long lastSelectTimeIndex;
@property (nonatomic) BOOL bLoadDataEnd;
@property (nonatomic) BOOL showSelectTime;
@property (nonatomic) BOOL showSelectTextOnly;
@property (retain, nonatomic) NSString *emptyTipString;
@property (retain, nonatomic) NSString *sizeRemindString;
@property (retain, nonatomic) NSString *titleString;
@property (nonatomic) unsigned long long textType;
@property (weak, nonatomic) id<WXGChatLogSessionViewControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL hideFilterView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getDateWithoutHMS:(id)a0;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)makeFilterView;
- (void)makeTableView;
- (void)makeEmptyView;
- (void)initView;
- (void)initData;
- (void)reInitData;
- (void)updateView;
- (void)updateFilterView;
- (void)updateTableView;
- (void)updateTableFooterView;
- (void)resetEmptyTipLabelWithTip:(id)a0;
- (void)resetLoadingTip:(id)a0;
- (void)initFooterPannelView;
- (void)updateFooterPannelView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getTableViewFrame;
- (id)getSelectButtonTitle;
- (id)getDataSizeShowString:(const void *)a0;
- (void)onCancel;
- (void)onDone;
- (void)onSelecteAll;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onChatLogDataLoadFinished;
- (void)onChatLogDataReloadItem;
- (void)onChatLogDataLoad:(unsigned long long)a0 total:(unsigned long long)a1;
- (id)getTimeSection;
- (id)getTypeSection;
- (id)p_getFilterSection;
- (void)onItemClick:(unsigned int)a0 atSection:(unsigned int)a1;
- (id)getCurrentViewController;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
