@class NSString, CommonReliableSyncLogic;

@interface CommonReliableSyncMgr : MMUserService <MMKernelExt, MMServiceProtocol>

@property (retain, nonatomic) CommonReliableSyncLogic *oCommonReliableSyncLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)initData;
- (void)onServiceClearData;
- (void)syncWithActionNotifyData:(id)a0 commBizIdBit:(unsigned int)a1;
- (void)onAuthOK;
- (void)onInitOK;
- (void).cxx_destruct;

@end
