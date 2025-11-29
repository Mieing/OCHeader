@class NSString, NSMutableDictionary;

@interface CgiReportDataSender : NSObject <IExptServiceExt, WCSessionFlowMonitorExt, IOnCgiReportTaskEnd>

@property (retain, nonatomic) NSMutableDictionary *sendingMaps;
@property (nonatomic) unsigned long long mmkvReportItemCount;
@property (retain, nonatomic) NSMutableDictionary *routerMap;
@property (nonatomic) BOOL useMMKV;
@property (nonatomic) unsigned long long lastMMKVTrimTimeMs;
@property (nonatomic) unsigned int lastReadCacheFileTimeSec;
@property (nonatomic) long long maxSendCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initDefaultConfig;
- (void)putCgiRouter:(unsigned int)a0 andCmdId:(unsigned int)a1 andTryCount:(unsigned int)a2 andCgiPath:(id)a3;
- (void)onEnterForeground;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)putToQueue:(id)a0;
- (void)checkToSend;
- (void)onCgiTaskEnd:(int)a0 andTask:(id)a1;
- (void)sendFail:(id)a0;
- (void)sendSuccess:(id)a0;
- (BOOL)isSendingQueueFull;
- (id)getReportDataFromMMKV;
- (void)saveToMMKV:(id)a0;
- (void)removeFromMMKV:(id)a0;
- (void)readMMKVCount;
- (id)mmkvMapID;
- (id)getRouteInfo:(unsigned int)a0;
- (id)createDefaultRouterInfo:(unsigned int)a0;
- (void)onExptItemListChange;
- (void)readExptConfig;
- (void)checkMMKVSize;
- (id)mmCgiReportPath:(id)a0;
- (id)mmkvFileMapID;
- (id)saveDataToFile:(id)a0;
- (id)readDataFromFile:(id *)a0;
- (void).cxx_destruct;

@end
