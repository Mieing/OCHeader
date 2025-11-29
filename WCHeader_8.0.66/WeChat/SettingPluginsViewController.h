@class NSString, WCPayGetCollAssitStatusCgi, ContactGetPluginSwitchCgi, NSMutableArray;

@interface SettingPluginsViewController : NewSettingBaseViewController <WCPayGetCollAssitStatusCgiDelegate, contactInfoDelegate, WCActionSheetDelegate> {
    struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> { struct __tree<std::__value_type<unsigned long, unsigned long>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>>, std::allocator<std::__value_type<unsigned long, unsigned long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, unsigned long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>>> { unsigned long long __value_; } __pair3_; } __tree_; } m_mapCellToCellType;
    struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> { struct __tree<std::__value_type<unsigned long, unsigned long>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>>, std::allocator<std::__value_type<unsigned long, unsigned long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, unsigned long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>>> { unsigned long long __value_; } __pair3_; } __tree_; } m_uninstallMapCellToCellType;
    struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> { struct __tree<std::__value_type<unsigned long, unsigned long>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>>, std::allocator<std::__value_type<unsigned long, unsigned long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, unsigned long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>>> { unsigned long long __value_; } __pair3_; } __tree_; } m_mapSectionType;
    NSMutableArray *m_nameArray;
    NSMutableArray *m_uninstallNameArray;
}

@property (retain, nonatomic) WCPayGetCollAssitStatusCgi *getCollAssistStatusCgi;
@property (retain, nonatomic) ContactGetPluginSwitchCgi *getPluginSwitchCgi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)newMessageFromContactInfo:(id)a0;
- (void)deleteAllMsgByContact:(id)a0;
- (void)openContactInfoView:(long long)a0;
- (id)viewForHeaderInSection:(long long)a0;
- (void)onSwitchChanged_MMPlugin_QQMail:(id)a0;
- (void)onSwitchChanged_MMPlugin_Facebook:(id)a0;
- (void)onSwitchChanged_MMPlugin_Reader:(id)a0;
- (void)onSwitchChanged_MMPlugin_MassSend:(id)a0;
- (void)onSwitchChanged_MMPlugin_WeSport:(id)a0;
- (void)onSwitchChanged_MMPlugin_WeChatPay:(id)a0;
- (void)onSwitchChanged_MMPlugin_WeChatPayCollAssist:(id)a0;
- (void)onSwitchChanged_MMPlugin_MinishopAssist:(id)a0;
- (void)onSwitchChanged_MMPlugin_WeChatPayHK:(id)a0;
- (void)onSwitchChanged_MMPlugin_MerchantAssist:(id)a0;
- (void)onSwitchChanged_MMPlugin_QQMsgHelper:(id)a0;
- (void)onSwitchChanged_MMPlugin_WeGame:(id)a0;
- (void)onSwitchChanged_MMPlugin_Count:(id)a0;
- (void)onSwitchChanged:(id)a0 rowType:(long long)a1;
- (void)reportUserClickWithPluginType:(long long)a0;
- (void)refreshAllData;
- (void)reloadTableData;
- (id)cellWithRowType:(unsigned int)a0 text:(id)a1 isInstallSection:(BOOL)a2;
- (void)initOnePlugin:(long long)a0;
- (void)initData;
- (void)pluginsChanged:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (void)checkCollAssistPluginEntryIfNeed;
- (void)checkPluginSwitchEntryIfNeeded;
- (void)onGetCollAssistStatusCgiSucc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
