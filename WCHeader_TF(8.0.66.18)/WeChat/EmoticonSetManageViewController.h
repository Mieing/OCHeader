@class EmoticonManageSectionInfo, EmoticonManageDataLogic, StoreEmotionReplaceMyPanelListCgi, EmoticonManageDataObject, NSString, MMTableView;

@interface EmoticonSetManageViewController : MMUIViewController <IEmoticonPackageMgrExt, UITableViewDelegate, UITableViewDataSource, EmoticonManageCellDelegate, StoreEmotionReplaceMyPanelListCgiDelegate>

@property (retain, nonatomic) EmoticonManageSectionInfo *sectionInfo;
@property (retain, nonatomic) EmoticonManageDataLogic *dataLogic;
@property (retain, nonatomic) EmoticonManageDataObject *dataObj;
@property (retain, nonatomic) MMTableView *tableView;
@property (nonatomic) BOOL isDeleteMode;
@property (nonatomic) BOOL hasUndownload;
@property (retain, nonatomic) StoreEmotionReplaceMyPanelListCgi *replaceCgi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataObj:(id)a0 andDataLogic:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)initView;
- (void)viewDidTransitionToNewSize;
- (void)updateNavigationBarConfig;
- (void)loadData;
- (void)configSessionInfoArray;
- (void)updateEditButtonStatus;
- (void)onGotoDeleteMode;
- (void)OnCancel;
- (void)onSaveEdit;
- (void)onGotoNormalMode;
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
- (void)onStoreEmotionReplaceMyPanelListCgiOKWithPids:(id)a0;
- (void)onStoreEmotionReplaceMyPanelListCgiFailed;
- (void).cxx_destruct;

@end
