@class NSArray, NSString, MMTableViewInfo, UIView;

@interface PersonalInformationAddressViewController : MMPageSheetBaseViewController <WCAddressLogicMgrExt>

@property (retain, nonatomic) UIView *contentHeaderView;
@property (retain, nonatomic) MMTableViewInfo *tableViewInfo;
@property (nonatomic) BOOL loadingData;
@property (retain, nonatomic) NSArray *arrAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)initView;
- (void)initData;
- (void)initTableView;
- (void)initHeaderView;
- (void)reloadData;
- (void)viewDidLayoutSubviews;
- (void)makeCell:(id)a0 cellInfo:(id)a1;
- (double)getCellHeightForAddress:(id)a0;
- (void)makeNoContentCell:(id)a0;
- (id)getAddressDetailString:(id)a0;
- (void)OnGetAllAddress:(id)a0 UserName:(id)a1 NickName:(id)a2 Error:(id)a3;
- (void).cxx_destruct;

@end
