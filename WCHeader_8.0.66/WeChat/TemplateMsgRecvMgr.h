@class NSString, NSMutableDictionary;

@interface TemplateMsgRecvMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate, MMConfigMgrExt> {
    NSMutableDictionary *_dictTemplateMsgRecvState;
    NSMutableDictionary *_dictIdListOfUser;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)getRecvStateByUsername:(id)a0;
- (void)setRecvState:(id)a0 toUser:(id)a1;
- (void)setRecvState:(unsigned int)a0 toUser:(id)a1 withTemplateId:(id)a2;
- (BOOL)shouldShowBlockButtonForMsg:(id)a0;
- (BOOL)shouldShowEntryForUser:(id)a0;
- (void)getRecvState:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onGetRecvState:(id)a0;
- (void)onSetRecvState:(id)a0;
- (id)getRecvStateArrayByUsername:(id)a0;
- (void).cxx_destruct;

@end
