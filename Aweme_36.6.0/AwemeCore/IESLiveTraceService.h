@class NSString, NSMutableDictionary, NSDictionary, IESLiveGCDTimer, IESLiveTraceAPI, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, IESLiveMessageUplinkService, IESLiveAppInfo;

@interface IESLiveTraceService : NSObject <IESLiveTraceService>

@property (nonatomic) long long routeServiceId;
@property (nonatomic) long long routeMethodId;
@property (nonatomic) BOOL isTraceEnable;
@property (nonatomic) long long uploadStrategy;
@property (nonatomic) long long maxBatchSize;
@property (nonatomic) double maxCacheTime;
@property (retain, nonatomic) NSDictionary *blockSettingKeyList;
@property (retain, nonatomic) NSMutableDictionary *blockServerKeyList;
@property (nonatomic) long long maxServerKeyBlockTime;
@property (retain, nonatomic) IESLiveGCDTimer *timeoutCheckTimer;
@property (nonatomic) long long uploadByHTTP;
@property (nonatomic) long long maxSingleByte;
@property (nonatomic) long long maxBatchByte;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventProcessQueue;
@property (retain, nonatomic) NSMutableArray *eventCache;
@property (nonatomic) double lastUploadTime;
@property (retain, nonatomic) IESLiveGCDTimer *uploadCheckTimer;
@property (retain, nonatomic) id<IESLiveMessageUplinkService> uplinkService;
@property (retain, nonatomic) IESLiveTraceAPI *traceAPI;
@property (retain, nonatomic) NSMutableArray *eventDicCache;
@property (nonatomic) long long totalCachedBytes;
@property (nonatomic) BOOL timerOptimize;
@property (retain, nonatomic) id<IESLiveAppInfo> appInfo;
@property (copy, nonatomic) id /* block */ uploadCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFrontierReceivingMessage:(id)a0;
- (void)traceWith:(id)a0;
- (void)uploadEvents:(id)a0;
- (void)setupUploadConfig;
- (void)stopTimeoutCheckTimer;
- (void)startUploadCheckTimer;
- (void)startTimeoutCheckTimer;
- (BOOL)isValidMessageForTrace:(id)a0;
- (BOOL)isFilterBySettingKeyList:(id)a0;
- (BOOL)isFilterByServerKeyList:(id)a0;
- (void)uploadEventByHTTP:(id)a0;
- (void)uploadEventByFrontier:(id)a0;
- (void)runOnEventProcessSerialQueue:(id /* block */)a0;
- (void)realUploadEventData:(id)a0;
- (void)doUploadCheck;
- (BOOL)isFilterBySettingKeyRate:(id)a0;
- (void)stopUploadCheckTimer;
- (void)batchUploadEventData:(id)a0;
- (void)doTimeoutCheck;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
