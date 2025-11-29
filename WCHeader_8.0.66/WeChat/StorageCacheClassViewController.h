@class UIButton, StorageFootPanelView, UILabel, NSString, UIView, NSMutableArray, MMTableView;

@interface StorageCacheClassViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, StorageFootPanelViewDelegate, IChatLogDataMgrExt>

@property (retain, nonatomic) NSMutableArray *dataArray;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) StorageFootPanelView *storageFooterPannelView;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) UIButton *selectAllButton;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UILabel *sizeLabel;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (nonatomic) unsigned long long totalCacheSize;
@property (retain, nonatomic) NSMutableArray *weAppDataArray;
@property (retain, nonatomic) NSMutableArray *selectedClassification;
@property (retain, nonatomic) NSMutableArray *selectedWeAppClassification;
@property (nonatomic) long long sectionFooterForShowRawInfo;
@property (nonatomic) long long sectionHeaderForShowRawInfo;
@property (retain, nonatomic) NSMutableArray *selectedReceiveMsgInfo;
@property (retain, nonatomic) NSMutableArray *selectedSendMsgInfo;
@property (retain, nonatomic) NSMutableArray *filterReportSendSortSessions;
@property (retain, nonatomic) NSMutableArray *filterReportRecvSortSessions;
@property (retain, nonatomic) NSMutableArray *filterReportSendFilterSessions;
@property (retain, nonatomic) NSMutableArray *filterReportRecvFilterSessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)arrageTheWeAppCacheClass:(id)a0;

- (id)initWithClassification:(id)a0;
- (void)viewDidLoad;
- (void)updateVisible;
- (void)viewDidLayoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getTableViewFrame;
- (void)initEmptyView;
- (BOOL)p_shouldShowTableFooterView;
- (void)initTableView;
- (void)makeNewFootPanelView;
- (void)updateFooterPannelView;
- (void)initFooterPannelView;
- (void)reloadData;
- (void)onReturn;
- (void)onSelecteAll;
- (id)p_getChatLogInfoFromDataItem:(void *)a0 forRawType:(int)a1;
- (void)onShowCleanHalfViewAndDelete;
- (void)p_startCleanTotalSize:(unsigned long long)a0 cleanAllRawSend:(BOOL)a1 cleanAllRawReceive:(BOOL)a2 selectRawInfo:(id)a3 selectCacheClassification:(id)a4 fastDeleteClassification:(id)a5;
- (id)p_getCleanSelectedClassification;
- (unsigned long long)p_getTotalSelectedSize:(id)a0;
- (unsigned long long)p_getTotalSelectedSizeCC:(id)a0;
- (BOOL)p_isSelectEmpty;
- (BOOL)p_isDataAllSelect;
- (unsigned long long)p_getDeleteCacheSize;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)getFootPanelSelectButtonTitle;
- (id)getFootPanelDeletebuttonTitle;
- (id)getFootPanelLabelText;
- (id)getFootPanelSizeText;
- (void)onFootPanelSelectAllButtonClick;
- (void)onFootPanelSelectButtonClick;
- (void)onFootPanelDeleteButtonClick;
- (BOOL)isFootPanelRelateDataLoading;
- (BOOL)isFootPanelRelateDataSelectEmpty;
- (BOOL)isFootPanelRelateDataSelectAll;
- (void)onChatLogDataLoadFinished;
- (void).cxx_destruct;

@end
