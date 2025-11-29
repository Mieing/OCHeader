@class CgiReportDataController, CgiCollectConfig, CgiReportItemConfiger, NSString, CgiReportDataSender, NSMutableDictionary, NSDictionary, NSMutableSet, NSMutableArray, CgiReportFlowGuarder;

@interface CgiReportDataService : MMUserService <IExptServiceExt, IOnCgiReportTaskEnd, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *routerMap;
@property (retain, nonatomic) NSMutableArray *waitingQueue;
@property (retain, nonatomic) NSMutableSet *sendingQueue;
@property (retain, nonatomic) NSMutableDictionary *collectMap;
@property (retain, nonatomic) NSMutableDictionary *waitToReqSvrMap;
@property (nonatomic) BOOL needRptKv;
@property (nonatomic) BOOL useMMKV;
@property (retain, nonatomic) NSDictionary *clientKvMap;
@property (retain, nonatomic) CgiReportFlowGuarder *flowGuarder;
@property (retain, nonatomic) CgiReportDataSender *sender;
@property (retain, nonatomic) CgiReportDataController *controller;
@property (retain, nonatomic) NSMutableSet *liteAppCustomReportBizIds;
@property (retain, nonatomic) NSMutableDictionary *collectConfigs;
@property (retain, nonatomic) CgiCollectConfig *defaultCollectConfig;
@property (retain, nonatomic) CgiReportItemConfiger *configer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedSerialQueue;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)checkToReturnCollectMapItem:(unsigned int)a0 andItemId:(id)a1 andEventId:(id)a2;
- (BOOL)sendLiteAppCustomBatchReportData:(unsigned int)a0 andIsBatchReport:(BOOL)a1 andJsonArray:(id)a2;
- (BOOL)sendLiteAppReportData:(unsigned int)a0 andIsBatchReport:(BOOL)a1 andJsonArray:(id)a2;
- (BOOL)sendH5AppReportData:(unsigned int)a0 andIsBatchReport:(BOOL)a1 andJsonArray:(id)a2;
- (BOOL)sendReportData:(unsigned int)a0 andItemType:(unsigned int)a1 andItemId:(id)a2 andCurrPage:(id)a3 andSourcePage:(id)a4 andRefPage:(id)a5 andSdkSessionId:(id)a6 andEventId:(id)a7 andCliTimeMs:(unsigned long long)a8 andData:(id)a9;
- (BOOL)sendReportDataAutoCollect:(unsigned int)a0 andItemType:(unsigned int)a1 andItemId:(id)a2 andCurrPage:(id)a3 andSourcePage:(id)a4 andRefPage:(id)a5 andSdkSessionId:(id)a6 andEventId:(id)a7 andCliTimeMs:(unsigned long long)a8 andData:(id)a9;
- (void)checkToReportAllCollectMap:(id)a0;
- (void)collectToSend:(id)a0;
- (id)createCollectKey:(unsigned int)a0 andItemId:(id)a1 andEventId:(id)a2;
- (BOOL)sendReportData:(id)a0;
- (void)putToQueue:(id)a0;
- (void)checkToSend;
- (void)onCgiTaskEnd:(int)a0 andTask:(id)a1;
- (void)sendFail:(id)a0;
- (void)sendSuccess:(id)a0;
- (id)getAndRemoveWaitingData;
- (BOOL)isSendingQueueFull;
- (void)readExptConfig;
- (id)checkToGetRouteInfo:(unsigned int)a0;
- (id)createDefaultRouterInfo:(unsigned int)a0;
- (void)onExptItemListChange;
- (void)setUnReqSvrItem:(id)a0;
- (void)removeUnReqItemBySendSuccess:(id)a0;
- (void)saveToMMKV:(id)a0 andTrace:(id)a1;
- (id)readFromMMKV;
- (id)mmkvMapID;
- (void)clientKvReport:(id)a0 andBusinessId:(unsigned int)a1;
- (id)compressReportData:(id)a0 andMaxLength:(unsigned int)a1;
- (id)checkToReturnCollectConfig:(unsigned int)a0;
- (void).cxx_destruct;

@end
