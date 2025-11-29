@class CBaseContact, NSString, MMTableViewInfo;
@protocol GameLifeMsgChatInfoViewControllerDelegate;

@interface GameLifeMsgChatInfoViewController : GameCenterNativeVc <WCActionSheetDelegate, GameLifeBlackHalfViewControllerDelegate> {
    BOOL _isInBlackList;
    BOOL _isAssociateWithWxGame;
}

@property (retain, nonatomic) MMTableViewInfo *tableViewMgr;
@property (weak, nonatomic) id<GameLifeMsgChatInfoViewControllerDelegate> delegate;
@property (retain, nonatomic) CBaseContact *myRoleContact;
@property (retain, nonatomic) CBaseContact *sessionContact;
@property (retain, nonatomic) CBaseContact *realChatContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)initView;
- (void)reloadTableViewData;
- (void)checkBlackListStatus:(unsigned int)a0 callback:(id /* block */)a1;
- (void)makeContactInfo:(id)a0 CellInfo:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)openContactInfo;
- (void)onClearAllMessage:(id)a0;
- (void)clearAllMsg;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onExpose:(id)a0;
- (void)addBlackList:(id)a0;
- (void)showDealBlackDialog:(id)a0 accoutType:(unsigned int)a1 isBlack:(BOOL)a2 isAssociate:(BOOL)a3;
- (void)onCancelClick:(BOOL)a0 isAssociateWithWxGame:(BOOL)a1;
- (void)onConfirmClick:(BOOL)a0 isAssociateWithWxGame:(BOOL)a1;
- (id)getSessionId;
- (void)reportChattingInfoUIExposure;
- (void)reportClickAvatar;
- (void)reportClearMsg:(int)a0;
- (void)reportExpose;
- (void)reportClickBlackListDialog;
- (void)reportBlackListDialogExposure:(BOOL)a0;
- (void)reportBlackListDialogUserAction:(BOOL)a0 isAssociateWithWxGame:(BOOL)a1 isCancel:(BOOL)a2;
- (void).cxx_destruct;

@end
