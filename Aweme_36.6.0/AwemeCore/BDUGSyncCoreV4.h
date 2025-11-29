@class NSObject;
@protocol OS_dispatch_source;

@interface BDUGSyncCoreV4 : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *pollTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *httpPollTimer;
@property (nonatomic) long long pbSum;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *batchTimer;

+ (id)sharedCore;

- (void)onReceivedFrontierMessage:(id)a0;
- (void)onPushManagerConnectionStateChanged:(id)a0;
- (void)dataLostHandler;
- (id)buildPollDataWithCtrl:(int)a0 andReason:(int)a1;
- (void)startHttpPoll:(id)a0;
- (void)sendHttpMessage:(id)a0;
- (void)sendReportLogs:(id)a0;
- (id)buildPollData;
- (void)dealWithInitAndSwitchPoll:(id)a0;
- (void)dealDefaultCommand:(id)a0 channel:(unsigned long long)a1;
- (void)dealCtrlCommand:(int)a0;
- (void)resetHttpPollTask;
- (void)dealWithData:(id)a0 channel:(unsigned long long)a1;
- (void)dealDataPackets:(id)a0 did:(id)a1 uid:(id)a2 channel:(unsigned long long)a3;
- (void)dealAckPackets:(id)a0 did:(id)a1 uid:(id)a2;
- (void)monitorReceiveDataWithDataPackets:(id)a0 channel:(unsigned long long)a1;
- (id)deliverSyncDataWithSynclogs:(id)a0;
- (void)sendFinDataWithDeliverSynclogs:(id)a0 dataPkts:(id)a1;
- (void)batchAckPoll;
- (void)deInitBatchAck;
- (void)deliverSyncLog:(id)a0 callback:(id /* block */)a1;
- (id)buildFrontierMessage:(id)a0;
- (id)buildReportPacket:(id)a0 syncID:(long long)a1;
- (void)cleanExpiredData;
- (void)deliverSyncLogWithBusinessID:(long long)a0 callback:(id /* block */)a1;
- (void)reportBusinessSyncLog;
- (void)httpPollData;
- (void)startNeedDataPollWithReason:(int)a0;
- (void)tryCloseSyncService;
- (void)cleanDatabaseAndTryCloseSyncService;
- (void)sendMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)sendMessage:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;

@end
