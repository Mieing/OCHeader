@class CEnterpriseContact, NSString, MMTableViewInfo, NSMutableArray;

@interface EnterpriseContactInfoViewController : MMUIViewController <MMWebViewDelegate, EnterpriseMemberViewDelegate, WCActionSheetDelegate, IEnterpriseGroupMgrExt, IEnterpriseContactMgrExt> {
    CEnterpriseContact *_enterpriseContact;
    NSString *_myUserName;
    NSMutableArray *_memberDataItemList;
    NSMutableArray *_memberViewList;
    BOOL _isMuteChanged;
    BOOL _isFavoriteChanged;
    BOOL _isTopChanged;
    BOOL _isChatStatusNotifyOpen;
    BOOL _isFavorite;
    BOOL _isTop;
    BOOL _isDeleteButtonHidden;
    BOOL _chatConfig;
    MMTableViewInfo *_tableViewInfo;
    unsigned int _colCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEnterpriseContact:(id)a0;
- (void)dealloc;
- (void)initData;
- (void)initTableViewInfo;
- (void)initView;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)updateTitleView;
- (void)updateTableFooterView;
- (void)reloadTableViewInfo;
- (id)makeChatRoomSection;
- (id)makeSettingSection;
- (id)makeMemberListSection;
- (void)makeMemberCell:(id)a0 CellInfo:(id)a1;
- (void)makeWhiteCell:(id)a0 CellInfo:(id)a1;
- (void)onQuitButtonClicked:(id)a0;
- (void)quitChatRoom;
- (void)openEditTitle;
- (void)setGroupName:(id)a0;
- (void)setMuteStatus:(id)a0;
- (void)setFavStatus:(id)a0;
- (void)setTopStatus:(id)a0;
- (void)updateContactSetting;
- (void)enterEnterpriseChat:(id)a0;
- (void)updateDeleteButtonHidden:(BOOL)a0;
- (void)switchDeleteButtonHidden;
- (BOOL)isContactInRoomMember:(id)a0;
- (void)onEnterpriseMemberHeadImageClick:(id)a0;
- (void)onEnterpriseMemberHeadImageLongPress:(id)a0;
- (void)onEnterpriseMemberViewDelete:(id)a0;
- (void)onEnterpriseMemberViewAdd:(id)a0;
- (void)onWebViewWillClose:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onBatchModifyEnterpriseContact:(id)a0;
- (void)onCreateEnterpriseGroup:(id)a0 errorCode:(int)a1 extDic:(id)a2;
- (void)onUpdateEnterpriseGroupMemberList:(id)a0 errorCode:(int)a1;
- (void)onUpdateEnterpriseGroupName:(id)a0 errorCode:(int)a1;
- (void).cxx_destruct;

@end
