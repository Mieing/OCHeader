@class NSString, NSMutableDictionary, PendingMsgStorage;

@interface PendingMsgMgr : MMUserService <IMsgExt, BaseMsgViewControllerExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *sessionInfos;
@property (retain, nonatomic) PendingMsgStorage *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (BOOL)isExptOpened;
- (id)getFirstInfo:(id)a0;
- (BOOL)containsInfo:(id)a0 msgLocalId:(unsigned int)a1;
- (id)getInfos:(id)a0;
- (void)onAddMsg:(id)a0 type:(int)a1 fromMsgLogicController:(id)a2;
- (void)addInfo:(id)a0 chatName:(id)a1;
- (void)deleteInfo:(id)a0 msgLocalId:(unsigned int)a1;
- (void)deleteAllInfos:(id)a0;
- (id)handleNewMsg:(id)a0 inSession:(BOOL)a1;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)handleAddMsg:(id)a0 outsideSession:(id)a1;
- (void)OnDelMsg:(id)a0 DelAll:(BOOL)a1;
- (void)OnDelMsg:(id)a0 MsgWrap:(id)a1;
- (void)onEnterBaseMsgSession:(id)a0;
- (void)onExitBaseMsgSession:(id)a0;
- (void).cxx_destruct;

@end
