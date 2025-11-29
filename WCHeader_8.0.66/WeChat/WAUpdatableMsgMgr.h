@class NSString, NSMutableSet, WAUpdatableMsgStorage;

@interface WAUpdatableMsgMgr : MMUserService <PBMessageObserverDelegate, IMsgExt, MMServiceProtocol> {
    WAUpdatableMsgStorage *_updatableMsgStorage;
    NSMutableSet *_runningReq;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (void)openSubscribeEntryWithShareKey:(id)a0;
- (void)subscribeSystemMsgWithShareKey:(id)a0;
- (id)getLatestUpdatableMsgInfoWithShareKey:(id)a0 curInfo:(id)a1;
- (BOOL)tryUpdateUpdatableMsgInfoWithShareKey:(id)a0 curInfo:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleGetUpdatableMsgInfoResponse:(id)a0;
- (void)handleGetChatToolMsgInfoResponse:(id)a0;
- (void)delayCallExtAndTryUpdateShareKey:(id)a0;
- (void)callExtAndTryUpdateShareKey:(id)a0;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void).cxx_destruct;

@end
