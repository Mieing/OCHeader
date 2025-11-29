@class NSString, CContact, NSArray, NSURL, MMTableViewInfo, UIView, GetSafetyInfoLogic;

@interface PersonalInformationPreviewViewController : MMUIViewController <MMNavBarInteractiveDelegate, WCAddressLogicMgrExt>

@property (retain, nonatomic) UIView *contentHeaderView;
@property (retain, nonatomic) UIView *contentFooterView;
@property (retain, nonatomic) MMTableViewInfo *tableViewInfo;
@property (retain, nonatomic) CContact *contact;
@property (retain, nonatomic) NSURL *exportUrl;
@property (retain, nonatomic) NSArray *arrAddress;
@property (retain, nonatomic) GetSafetyInfoLogic *getSafetyInfoLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)initView;
- (void)initTableView;
- (void)initHeaderView;
- (void)initFooterView;
- (void)reloadData;
- (void)viewDidLayoutSubviews;
- (void)onShowMyAddress;
- (void)onShowSafeDevice;
- (void)onExportInformation;
- (id)getSexString;
- (id)getAddressString;
- (id)getSignature;
- (id)getMobile;
- (id)getQQ;
- (id)getEmail;
- (id)getVersion;
- (id)customCellInfoForTitle:(id)a0 rightValue:(id)a1;
- (id)customCellRightViewWithText:(id)a0 cellTitle:(id)a1;
- (BOOL)isSetNormalToBlackStyle;
- (void)OnGetAllAddress:(id)a0 UserName:(id)a1 NickName:(id)a2 Error:(id)a3;
- (void).cxx_destruct;

@end
