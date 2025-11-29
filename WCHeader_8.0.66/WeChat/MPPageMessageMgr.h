@class MemoryMappedKV, NSString;

@interface MPPageMessageMgr : MMUserService <IMsgExt, MMServiceProtocol>

@property (retain, nonatomic) MemoryMappedKV *messageSlotMMKV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initData;
- (void)clearData;
- (void)openBrandController:(id)a0 navigationController:(id)a1 modelModel:(unsigned int)a2 pageIdentityInfo:(id)a3 referMsg:(id)a4;
- (unsigned int)referMsgExpireTime;
- (unsigned int)lastMsgExpireTime;
- (BOOL)hasSendReferMsgToPage:(id)a0 withinTime:(unsigned int)a1;
- (void)markLastReferMsgSendToPage:(id)a0 msgWrap:(id)a1;
- (unsigned int)getFirstMsgSendTimeToPage:(id)a0;
- (void)markFirstMsgSendTimeToPage:(id)a0 msgWrap:(id)a1;
- (unsigned int)getLastMsgSendTimeToPage:(id)a0;
- (void)markLastMsgSendTimeToPage:(id)a0 msgWrap:(id)a1;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void).cxx_destruct;

@end
