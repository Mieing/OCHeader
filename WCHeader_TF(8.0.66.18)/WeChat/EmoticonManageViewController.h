@class EmoticonManageDataLogic, StoreEmotionReplaceMyPanelListCgi, NSString, NSMutableArray, MMTableView;

@interface EmoticonManageViewController : MMUIViewController <IEmoticonPackageMgrExt, UITableViewDelegate, UITableViewDataSource, EmoticonManageCellDelegate, StoreEmotionReplaceMyPanelListCgiDelegate>

@property (retain, nonatomic) NSMutableArray *sectionInfoArray;
@property (retain, nonatomic) EmoticonManageDataLogic *dataLogic;
@property (retain, nonatomic) MMTableView *tableView;
@property (nonatomic) BOOL isDeleteMode;
@property (nonatomic) BOOL isFromStore;
@property (retain, nonatomic) StoreEmotionReplaceMyPanelListCgi *m_replaceCgi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithIsFromStore:(BOOL)a0;
- (void)viewDidLoad;
- (void)loadData;
- (void)configSessionInfoArray;
- (void)initView;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidTransitionToNewSize;
- (void)updateNavigationBarConfig;
- (void)updateEditButtonStatus;
- (void)onGotoDeleteMode;
- (void)OnCancel;
- (void)onSaveEdit;
- (void)onGotoNormalMode;
- (void)onClickPrivacyCell;
- (void)onClickPurchasedCell;
- (void)onClickManageCustomEmoticonCell;
- (void)onClickManageCameraEmoticonCell;
- (void)OnUpdateEmoticonPackageListFor:(unsigned long long)a0 WithPid:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 targetIndexPathForMoveFromRowAtIndexPath:(id)a1 toProposedIndexPath:(id)a2;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (BOOL)isEmoticonManageCellDeleteMode;
- (void)onUnstallButtonClickWithPid:(id)a0 index:(unsigned long long)a1;
- (void)onUninstallIPSetWithObj:(id)a0;
- (void)loopUninstallIPSetPackagesIn:(id)a0 failedUninstallPids:(id)a1;
- (void)reportEvent:(id)a0 eventId:(id)a1 params:(id)a2;
- (void)onStoreEmotionReplaceMyPanelListCgiOKWithPids:(id)a0;
- (void)onStoreEmotionReplaceMyPanelListCgiFailed;
- (void).cxx_destruct;

@end
