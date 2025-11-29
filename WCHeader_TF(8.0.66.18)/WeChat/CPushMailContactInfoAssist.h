@class NSString, XMailBindMailControlLogic;

@interface CPushMailContactInfoAssist : PluginContactInfoAssist <XMailBindMailControlLogicDelegate, PBMessageObserverDelegate> {
    struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> { struct __tree<std::__value_type<unsigned long, unsigned long>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>>, std::allocator<std::__value_type<unsigned long, unsigned long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, unsigned long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>>> { unsigned long long __value_; } __pair3_; } __tree_; } m_mapPushMailCellToCellType;
}

@property (retain, nonatomic) XMailBindMailControlLogic *bindMailControlLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0 delegate:(id)a1;
- (BOOL)isShowOpenPushMailBtn;
- (void)reloadPushMailTableView;
- (void)doSwitchPushMail:(id)a0;
- (void)onSwitchViewOn;
- (void)onSwitchViewOff;
- (id)getPluginIntro;
- (id)getLoadingText;
- (void)installPlugin;
- (void)doUninstall;
- (void)clearPluginData;
- (void)onWrite;
- (void)startBind;
- (void)makeAccountDescCell:(id)a0 cellInfo:(id)a1;
- (id)getAccountRebindDescView;
- (void)reloadInstalledTableViewData;
- (void)onMuteChange:(id)a0;
- (void)onSessionTopStateChange:(id)a0;
- (void)showInputPwdAlert:(BOOL)a0;
- (id)getPushMailErrorTitle;
- (void)handleSwitchPushMailOk:(unsigned int)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)dealloc;
- (void)onXMailBindMailControlLogicSuccess:(id)a0 mailAddr:(id)a1;
- (void)onXMailBindMailControlLogicCanceled:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
