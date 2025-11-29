@class NSMutableDictionary, NSString, WXGBackupDataMgr, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WXGBackupMigratePCLogic : WXGBackupBasicLogic <WXGBackupDataMgrDelegate, WXGBackupBasicLogicProtocol>

@property (retain, nonatomic) WXGBackupDataMgr *dataMgr;
@property (nonatomic) BOOL bStopService;
@property (retain, nonatomic) NSMutableArray *sendingArray;
@property (retain, nonatomic) NSMutableDictionary *sessionNickDictionary;
@property (retain, nonatomic) NSMutableDictionary *filterSizeDic;
@property (nonatomic) unsigned long long backFilterSizes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *migrateDataQueue;
@property (nonatomic) unsigned long long curMigrateSessionCount;
@property (nonatomic) unsigned long long totalMigrateSessionCount;
@property (nonatomic) BOOL bFirstTag;
@property (copy, nonatomic) NSString *lastMigrateSesionName;
@property (nonatomic) BOOL bSendFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startService;
- (void)stopService;
- (void)confirmLogic;
- (void)restartLogic;
- (BOOL)sendData:(id)a0;
- (void)sendStartRequest;
- (void)sendMigratePCConfirm;
- (void)sendFinishRequest;
- (void)sendRequestSession;
- (void)sendLotOfDataPush:(unsigned int)a0;
- (void)sendNextDataPushWithResponseID:(id)a0;
- (id)p_processBackupDataTag:(id)a0;
- (void)onDataMgrRequiredFilterRequest:(id)a0;
- (void)onDataMgrFilterOneMedia:(unsigned long long)a0 withMsgDataId:(id)a1;
- (void)processStartResponseData:(id)a0;
- (void)processRequestSessionResponseData:(id)a0;
- (void)processDataPushResponseData:(id)a0;
- (void)processBackupDataTagResponseData:(id)a0;
- (void)processFilterResponseData:(id)a0;
- (void)reportDisconnect:(unsigned long long)a0;
- (void).cxx_destruct;

@end
