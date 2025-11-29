@class MMLoadingView, NSString, UIButton, WCDevice, UIView, NSMutableArray, MMTableView;
@protocol WCMyDeviceInfoAssistDelegate;

@interface WCMyDeviceInfoAssist : MMObject <WCActionSheetDelegate, UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, MMTipsViewControllerDelegate> {
    id<WCMyDeviceInfoAssistDelegate> m_delegate;
    MMTableView *m_tableView;
    UIView *m_headerView;
    UIView *m_footerView;
    MMLoadingView *m_loadingView;
    UIButton *m_bindBtn;
    UIButton *m_unbindBtn;
    UIButton *m_urlBtn;
    NSMutableArray *m_arrSectionType;
    BOOL m_isMyDevice;
}

@property (retain, nonatomic) WCDevice *deviceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (void)updateRelationState;
- (id)initWithMyDeviceInfo:(id)a0 delegate:(id)a1;
- (void)initTableView;
- (void)initLoadingView;
- (void)initFooterView;
- (void)updateData;
- (void)updateFooterView;
- (void)updateNavigationBarRightButton;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)makeCell:(id)a0 row:(unsigned long long)a1 section:(unsigned int)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)calDeviceDescCell;
- (double)calManagerCell;
- (void)makeDeviceInfoCell:(id)a0;
- (void)makeDeviceDescCell:(id)a0;
- (void)makeLanDeviceOwnerCell:(id)a0;
- (void)makeRemarkCell:(id)a0;
- (void)makeDeviceManageCell:(id)a0 rowData:(id)a1;
- (void)onShowDeviceSession;
- (void)onBindDevice;
- (void)onRemark;
- (void)onUnbindDevice;
- (id)getLoadingText;
- (void)startLoading;
- (void)stopLoading;
- (void)startLoadingWithText:(id)a0;
- (void)stopLoadingWithOKText:(id)a0;
- (void)stopLoadingWithFailText:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1 withText:(id)a2 withTipsVC:(id)a3;
- (void)onUpdateMyDeviceNickNameWithDeviceId:(id)a0 nickName:(id)a1 errorCode:(unsigned int)a2;
- (void)onClickNavRightButton;
- (id)GetTableView;
- (id)GetLoadingView;
- (double)deviceDescLabelWidth;
- (void)onRemarkNameEdit:(id)a0;
- (void)onManageCellClicked:(long long)a0;
- (void).cxx_destruct;

@end
