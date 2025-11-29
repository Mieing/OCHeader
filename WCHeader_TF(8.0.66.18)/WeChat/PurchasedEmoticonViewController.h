@class EmoticonStoreFootView, ModEmotionRecordCgi, NSString, NSMutableArray, MMTableView;

@interface PurchasedEmoticonViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, EmoticonBoughtListMgrExt, MMRefreshTableFooterDelegate, WCActionSheetDelegate>

@property (retain, nonatomic) NSMutableArray *m_arrTableData;
@property (retain, nonatomic) MMTableView *m_tableView;
@property (retain, nonatomic) EmoticonStoreFootView *m_tailView;
@property (nonatomic) double labelMaxWidth;
@property (retain, nonatomic) ModEmotionRecordCgi *modRecordCgi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)initView;
- (void)initTableView;
- (void)initFooterView;
- (void)OnStartLoadingAndShowString:(id)a0;
- (void)OnStopLoadingAndShowOK:(id)a0;
- (void)OnStopLoadingAndShowError:(id)a0;
- (void)OnStartLoadingAndShowStringBlocked:(id)a0;
- (void)onClickNavRightButton:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)checkIAPRet:(long long)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (void)onSwipeToDelPurchaseRecordAtIndex:(unsigned long long)a0;
- (void)OnRestoreEmoticonItemSuccess;
- (void)OnRestoreEmoticonItemFailed;
- (void)OnBoughtListChanged:(id)a0 withRet:(unsigned long long)a1;
- (void)reloadData;
- (void)viewDidLayoutSubviews;
- (void)scrollViewDidScroll:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void).cxx_destruct;

@end
