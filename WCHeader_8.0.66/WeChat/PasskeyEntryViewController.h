@class WCSheetView, UIView, WCButtonListView, NSString, UIButton, MMUILabel, PasskeyEntryHeaderView, PasskeyCreateLogic;

@interface PasskeyEntryViewController : MMUIViewController <PasskeyCreateDelegate>

@property (retain, nonatomic) WCSheetView *sheetView;
@property (retain, nonatomic) PasskeyEntryHeaderView *headerView;
@property (retain, nonatomic) MMUILabel *createLabel;
@property (retain, nonatomic) UIButton *createButton;
@property (retain, nonatomic) UIView *itemsView;
@property (retain, nonatomic) PasskeyCreateLogic *createLogic;
@property (retain, nonatomic) WCButtonListView *bottomButtonList;
@property (nonatomic) BOOL isUnsupportedIOSVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initData;
- (BOOL)passkeyExists;
- (BOOL)passkeySwitch;
- (id)navigationBarBackgroundColor;
- (void)initView;
- (void)updateSheetViewFrame;
- (void)reloadView;
- (void)reloadViewForCreate;
- (void)reloadViewForUnsupported;
- (void)reloadViewForManage;
- (void)useDefaultHeaderView;
- (void)reloadItemsView;
- (void)reloadButtonBottomList;
- (void)onPasskeyCreateOrReset;
- (void)onPasskeySwitchChanged:(id)a0;
- (void)onPasskeyDelete;
- (void)onDelete;
- (void)showAgreementWebviewWithUrl:(id)a0;
- (void)onPasskeySettingsChanged;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
