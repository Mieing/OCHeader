@class NSString, NSMutableDictionary;

@interface ExtDeviceService : MMUserService <PBMessageObserverDelegate, INewSyncExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *callBackDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableMultiPlatformImpl;

- (void)onServiceInit;
- (void)enterLoggedDevicePageFrom:(id)a0;
- (void)openFlutterExtDeviceLoginPageWithURL:(id)a0 responseData:(id)a1;
- (void)openUnlockPageWithUUID:(id)a0;
- (void)syncRecordNotify:(id)a0 args:(id)a1 complete:(id /* block */)a2;
- (void)sendStatusNotifyWithFunc:(id)a0 complete:(id /* block */)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)addCallBack:(unsigned int)a0 complete:(id /* block */)a1;
- (void)callCallBack:(unsigned int)a0 errCode:(int)a1 errMsg:(id)a2;
- (void)onNewSyncRecordSync:(id)a0;
- (void).cxx_destruct;

@end
