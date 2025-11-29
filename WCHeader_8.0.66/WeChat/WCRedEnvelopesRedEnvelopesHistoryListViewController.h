@class NSString, WCPayPickerView, MMTableView;
@protocol WCRedEnvelopesRedEnvelopesHistoryListViewControllerDelegate;

@interface WCRedEnvelopesRedEnvelopesHistoryListViewController : WCRedEnvelopesBaseViewController <UITableViewDelegate, UITableViewDataSource, WCPayPickerViewDelegate, WCActionSheetDelegate> {
    id<WCRedEnvelopesRedEnvelopesHistoryListViewControllerDelegate> m_delegate;
    BOOL m_loadingMoreOrderList;
    MMTableView *m_tableView;
    int m_enWCRedEnvelopesRedEnvelopesHistoryListViewControllerScene;
    BOOL m_bDidBack;
    WCPayPickerView *m_pickerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithScene:(int)a0;
- (id)navigationBarBackgroundColor;
- (void)initNavigationBar;
- (void)OnLeftBarButtonDone;
- (void)viewDidBePoped:(BOOL)a0;
- (void)loadMoreOrderList;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)getBottomView;
- (void)initTableView;
- (id)GetHeaderView:(id)a0;
- (void)refreshViewWithData:(id)a0;
- (void)commentRedEnvelopes;
- (void)setDelegate:(id)a0;
- (void)setScene:(int)a0;
- (void)changeHistoryType;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)getRecordNickNameAttributedStringWithSuffix:(id)a0 suffix:(id)a1;
- (void)makeCell:(id)a0 cell:(id)a1 row:(unsigned long long)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)OnSelectYears;
- (void)WCPayPickerViewDidCancel;
- (void)WCPayPickerViewDidChooseRow:(long long)a0 atSession:(long long)a1;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)OnClickedHeaderImageView;
- (void)userDidTakeScreenshot:(id)a0;
- (void).cxx_destruct;

@end
