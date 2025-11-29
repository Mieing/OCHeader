@class NSString, MMPickerView, SettingMyAccountExtInfoLogic;
@protocol settingMyAccountExtInfoDelegate;

@interface SettingMyAccountExtInfoViewController : SettingBaseViewController <settingModifySignDelegate, MMPickerViewDelegate, MMRegionPickerViewControllerDelegate, settingMyAccountExtInfoLogicDelegate> {
    struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> { struct __tree<std::__value_type<unsigned long, unsigned long>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>>, std::allocator<std::__value_type<unsigned long, unsigned long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, unsigned long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>>> { unsigned long long __value_; } __pair3_; } __tree_; } m_mapAccountCellToCellType;
    struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> { struct __tree<std::__value_type<unsigned long, unsigned long>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>>, std::allocator<std::__value_type<unsigned long, unsigned long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, unsigned long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>>> { unsigned long long __value_; } __pair3_; } __tree_; } m_mapSessionType;
    unsigned int m_curPickerMode;
    MMPickerView *m_pickerView;
    SettingMyAccountExtInfoLogic *m_infoLogic;
}

@property (weak, nonatomic) id<settingMyAccountExtInfoDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initSessionType;
- (void)initCellType;
- (void)returnBack;
- (void)_notifyExit;
- (void)Save;
- (void)SaveAndExit;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)makeSignCell:(id)a0;
- (id)makeMustFillLabel;
- (void)makeCellInfoInternal:(id)a0 col:(id)a1 value:(id)a2 mustFill:(BOOL)a3;
- (void)makeSexCell:(id)a0;
- (void)makeAddressCell:(id)a0;
- (void)makeAccountCell:(id)a0 row:(unsigned long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)saveNewSign:(id)a0;
- (void)MMRegionPickerDidChoosRegion:(id)a0;
- (void)MMPickerViewDidChooseRowTitle:(id)a0 atSessionTitle:(id)a1;
- (void)showModifySexView:(id)a0;
- (void)showModifyAddressView;
- (void)showModifySignView;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)onInfoChange;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
