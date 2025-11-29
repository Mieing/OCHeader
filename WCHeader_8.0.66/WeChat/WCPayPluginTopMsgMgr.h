@class NSString;

@interface WCPayPluginTopMsgMgr : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getTopMsgMMKVId;
- (id)getTopMsgMMKVKey:(id)a0;
- (void)handleAddMsg:(id)a0 msgWrap:(id)a1;
- (void)addTopMsg:(id)a0 msgItem:(id)a1;
- (void)removeTopMsg:(id)a0 msgSvrId:(long long)a1;
- (id)getTopMsgRecord:(id)a0;

@end
