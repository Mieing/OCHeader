@class UIView, MMTableView, NSArray, WCFilterView, NSDate, UIImageView, UIButton, NSMutableDictionary, NSString, UILabel, MMUIActivityIndicatorView;
@protocol WXGDownloadSessionViewControllerDelegate;

@interface WXGDownloadSessionSelectViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCFilterViewDelegate, IRoamBackupPackageServiceExt>

@property (retain, nonatomic) MMTableView *sessionTableView;
@property (retain, nonatomic) UIImageView *footerImageView;
@property (retain, nonatomic) UIView *seperatorLine;
@property (retain, nonatomic) UIButton *selectAllButton;
@property (retain, nonatomic) UIButton *nextStepButton;
@property (retain, nonatomic) UILabel *emptyTipLabel;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (retain, nonatomic) UILabel *sizeLabel;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingIndicatorView;
@property (retain, nonatomic) NSArray *infoArray;
@property (retain, nonatomic) NSMutableDictionary *selectedInfoDict;
@property (nonatomic) BOOL bUpdate;
@property (retain, nonatomic) WCFilterView *filterView;
@property (retain, nonatomic) UIView *filterSeperatorLine;
@property (retain, nonatomic) NSDate *minDate;
@property (retain, nonatomic) NSDate *maxDate;
@property (retain, nonatomic) NSDate *selectBeginDate;
@property (retain, nonatomic) NSDate *selectEndDate;
@property (nonatomic) BOOL bSelectAllTime;
@property (nonatomic) unsigned long long lastSelectTimeIndex;
@property (nonatomic) unsigned long long selectedTotalSize;
@property (weak, nonatomic) id<WXGDownloadSessionViewControllerDelegate> delegate;
@property (nonatomic) BOOL isDelete;
@property (nonatomic) BOOL hideFilterView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getDateWithoutHMS:(id)a0;

- (id)init;
- (void)updateWithInfo:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)makeFilterView;
- (id)p_getFilterSection;
- (id)getTimeSection;
- (void)makeTableView;
- (void)resetSelectedAndMakeEmptyView;
- (void)startLoading;
- (void)initView;
- (void)updateView;
- (void)updateTableView;
- (void)updateTableFooterView;
- (void)resetEmptyTipLabelWithTip:(id)a0;
- (void)resetLoadingTip:(id)a0;
- (void)initFooterPannelView;
- (void)updateFooterPannelView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getTableViewFrame;
- (id)getSelectButtonTitle;
- (void)onCancel;
- (void)onDone;
- (void)dismissAndCallDelegete;
- (void)onSelecteAll;
- (void)onItemClick:(unsigned int)a0 atSection:(unsigned int)a1;
- (id)getCurrentViewController;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onRoamBackupPackageServiceDeleteBackupRet:(int)a0;
- (void).cxx_destruct;

@end
