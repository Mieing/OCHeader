@class NSObject;
@protocol OS_dispatch_source;

@interface BDUGSyncCore : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *pollTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *httpPollTimer;
@property (nonatomic) BOOL isRollback;

+ (id)sharedCore;

- (void)onReceivedFrontierMessage:(id)a0;
- (void)onPushManagerConnectionStateChanged:(id)a0;
- (void)_startHttpSyncWithMessage:(id)a0;
- (void)_monitorSyncRetry;
- (void)_sendMessage:(id)a0 completion:(id /* block */)a1;
- (id)_buildPollData;
- (void)_sendHttpMessage:(id)a0;
- (void)_sendReportLogs:(id)a0;
- (void)_monitorSync;
- (void)_dealWithSyncPackets:(id)a0 did:(id)a1 uid:(id)a2;
- (void)_monitorReceiveDataWithDataPackets:(id)a0 channel:(unsigned long long)a1;
- (void)_dealWithDataPackets:(id)a0 did:(id)a1 uid:(id)a2 channel:(unsigned long long)a3;
- (void)_dealWithACKPackets:(id)a0 did:(id)a1 uid:(id)a2;
- (void)_dealWithCtrlProtocol;
- (void)_dealWithData:(id)a0 channel:(unsigned long long)a1;
- (BOOL)_storageHistorySynclogs:(id)a0;
- (id)_deliverSyncDataWithSynclogs:(id)a0 bucketMap:(id)a1;
- (void)_sendFinDataWithDeliverSynclogs:(id)a0 dataPkts:(id)a1;
- (void)startPoll;
- (void)startHttpPoll;
- (void)deliverSyncLogWithBusinessID:(long long)a0 callback:(id /* block */)a1;
- (void)reportBusinessSyncLog;
- (void)httpPollData;
- (void)startSyncData;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_sendMessage:(id)a0;

@end
