@class AdPushMsgDBMgr, NSString;

@interface MagicAdPushMgrService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) AdPushMsgDBMgr *dbMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getSpecificSlotMsg:(id)a0 withBizName:(id)a1;
- (BOOL)clearSpecificSlotMsg:(id)a0 withBizName:(id)a1;
- (void)handleAdMsg:(id)a0;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void).cxx_destruct;

@end
