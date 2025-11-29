@class WCJdRemindItem, NSMutableArray, NSString;

@interface WCJdBussinessMgr : MMUserService <MMServiceProtocol, IMsgExt>

@property (retain, nonatomic) NSMutableArray *aryHadHandleRemindItemList;
@property (retain, nonatomic) WCJdRemindItem *currEntranceTipItem;
@property (nonatomic) BOOL hadLoadEntranceItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)addActivityIdInHandleList:(id)a0;
- (BOOL)hadInHandleList:(id)a0;
- (BOOL)isNotTimeWithStart:(unsigned int)a0 Expire:(unsigned int)a1;
- (void)reloadfindEntry;
- (void)checkFindEntry;
- (id)getAddSceneUrl:(id)a0 scene:(long long)a1;
- (id)GetJDStoreCellItem;
- (BOOL)hasJDStoreCell;
- (long long)getCurrentScene;
- (id)getJDCellJumpURL;
- (id)getJDCellJumpTarget;
- (long long)getJDCellJumpType;
- (id)getJDCellJumpWeappPath;
- (long long)getJDCellJumpWeappVersion;
- (BOOL)shouldUseEntranceTipItem;
- (BOOL)needShowRedDotInFindTab;
- (BOOL)needShowTipInJDCell;
- (id)getJDCellTipItem;
- (void)setHadEnterJDCell;
- (BOOL)needShowDutyFreeTip;
- (void)gotoWebViewController:(id)a0 scene:(long long)a1 needPresent:(BOOL)a2;
- (id)getJDBussinessCachePath;
- (void)saveEntranceTipItem;
- (void)tryLoadEntranceTipItem;
- (void)handleBackgroundAPNSPushWithUsrInfo:(id)a0;
- (void)handleInactiveAPNSPushWithUsrInfo:(id)a0;
- (void)handleAPNSPushWithUsrInfo:(id)a0;
- (void)handleLocalPushWithUsrInfo:(id)a0;
- (void)handleRecvBewXmlJdEtranceTip:(id)a0;
- (void)handleRecvNewXmlNotication:(id)a0;
- (void)onAlertViewConfirm;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void).cxx_destruct;

@end
