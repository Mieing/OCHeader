@class NSString, NSMutableDictionary, UDRResourceDBMgr, MMIlinkCheckResourceMgr, NSObject;
@protocol OS_dispatch_queue;

@interface UDRLogic : MMUserService <MMIlinkCheckResourceMgrDelegate, MMServiceProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_paramsMap;
}

@property (retain, nonatomic) UDRResourceDBMgr *udrDBMgr;
@property (retain, nonatomic) MMIlinkCheckResourceMgr *resourceMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)alive:(id)a0;
- (id)getAllResource;
- (id)getResource:(id)a0 name:(id)a1;
- (id)getResourceList:(id)a0;
- (id)getWxResourceList:(id)a0;
- (id)getWxResource:(id)a0 name:(id)a1;
- (id)getWxResourceDecrypt:(id)a0 name:(id)a1;
- (void)removeResource:(id)a0;
- (void)updateResource:(id)a0;
- (void)checkResource:(id)a0 nameList:(id)a1 qos:(int)a2 parameter:(id)a3;
- (void)batchCheckResource:(id)a0 nameMap:(id)a1 qos:(int)a2 parameterMap:(id)a3;
- (void)periodCheckResource:(id)a0 parameterMap:(id)a1 offset:(id)a2;
- (void)checkSpecifiedResource:(id)a0 name:(id)a1 version:(unsigned int)a2 extInfo:(id)a3;
- (BOOL)checkIsIntervalTime;
- (BOOL)preCheckBlockTime:(id)a0;
- (BOOL)postCheckExpireTime:(id)a0 node:(id)a1;
- (void)setIntervalTime:(unsigned int)a0;
- (void)setBlockTime:(id)a0 block:(unsigned int)a1;
- (id)getResourceDescriptionReqItem:(id)a0 nameList:(id)a1 qos:(int)a2 parameter:(id)a3;
- (void)dealResourceCallback:(id)a0 infos:(id)a1 blockTime:(unsigned int)a2 errorType:(int)a3 errorCode:(int)a4 timeStamp:(unsigned int)a5 extInfo:(id)a6 scene:(long long)a7 reqItems:(id)a8;
- (void)dealFailResourceCallback:(id)a0 name:(id)a1 version:(int)a2 remoteVersion:(int)a3 errorType:(int)a4 errorCode:(int)a5 timeStamp:(unsigned int)a6 scene:(long long)a7 sampleRate:(float)a8;
- (void)configParameters:(struct GetResourceDescriptionInfo { } *)a0;
- (void)onCheckResource:(id)a0 resources:(id)a1 blockTime:(unsigned int)a2 errorType:(unsigned long long)a3 errorCode:(int)a4 isBatch:(BOOL)a5 timeStamp:(unsigned int)a6;
- (void)onBatchCheckResource:(id)a0 resourcesDic:(id)a1 blockTimeDic:(id)a2 noUpdateProjectIds:(id)a3 errorProjectIds:(id)a4 errorType:(unsigned long long)a5 errorCode:(int)a6 timeStamp:(unsigned int)a7;
- (void)onPeriodCheckResource:(id)a0 resourcesDic:(id)a1 noUpdateProjectIds:(id)a2 errorProjectIds:(id)a3 errorType:(unsigned long long)a4 errorCode:(int)a5 timeStamp:(unsigned int)a6 nextUpdateInterval:(int)a7 isFinish:(int)a8 newOffset:(id)a9;
- (void)onSpecifiedCheckResource:(id)a0 resources:(id)a1 blockTime:(unsigned int)a2 errorType:(unsigned long long)a3 errorCode:(int)a4 timeStamp:(unsigned int)a5 extInfo:(id)a6;
- (void)onReceiveCheckResource:(id)a0 resources:(id)a1;
- (void)onReceiveBugFixCDN:(id)a0;
- (void)onReceiveCheckUpdateBackend:(id)a0 nameList:(id)a1;
- (void)onReceiveGetSpecifiedResource:(id)a0 name:(id)a1 version:(unsigned int)a2 extInfo:(id)a3;
- (void).cxx_destruct;

@end
