@class UITableView, MMLoadingView, NSString, UIView, NSMutableArray, UIButton;

@interface WXGRoamSelectDeviceView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, ILinkDeviceExt, IRoamOutBoxServiceExt, IRoamBackupPackageServiceExt, MMPageSheetBottomViewDelegate> {
    double m_cellHeight;
    double m_cellHeightPortable;
}

@property (retain, nonatomic) UITableView *mainTableView;
@property (retain, nonatomic) UIView *emptyView;
@property (retain, nonatomic) UIButton *addDeviceBtn;
@property (retain, nonatomic) NSMutableArray *deviceArr;
@property (retain, nonatomic) MMLoadingView *loadingView;
@property (retain, nonatomic) NSString *onlineDeviceId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)initData;
- (void)pageSheetWillAppear;
- (void)setupDetailView;
- (void)initEmptyView;
- (void)addDeviceAction;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)reloadAndSetHeightForTable;
- (void)onILinkDeviceUpdate:(id)a0;
- (void)onILinkDeviceRequestFailed;
- (void)onRoamBackupPackageServiceDeviceAddComplete;
- (void).cxx_destruct;

@end
