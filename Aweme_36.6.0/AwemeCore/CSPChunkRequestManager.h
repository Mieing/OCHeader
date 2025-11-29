@class TTHttpResponse, NSHashTable, NSError, TTHttpRequest, NSString, CSPChunkDataMonitorRecord, NSMutableArray, CSPChunkDataHelper, NSObject, NSNumber;
@protocol CSPCommonResponseSerializer, CSPCommonResponse, CSPCommonRequestInfo, CSPThreadBlockMonitorProtocol, OS_dispatch_queue;

@interface CSPChunkRequestManager : NSObject <CSPChunkDataReceiver>

@property (retain, nonatomic) CSPChunkDataHelper *dataHelper;
@property (weak, nonatomic) id<CSPCommonResponseSerializer> responseSerializer;
@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) NSMutableArray *cacheCallbacks;
@property (nonatomic) BOOL callbackTriggered;
@property (retain, nonatomic) id<CSPCommonResponse> latestResponse;
@property (retain, nonatomic) NSError *latestError;
@property (nonatomic) BOOL forceCanceledByUpperLevel;
@property (retain, nonatomic) Class monitorRecordClass;
@property (copy, nonatomic) id /* block */ dataHelperBuilder;
@property (weak, nonatomic) id<CSPThreadBlockMonitorProtocol> threadBlockMonitor;
@property (readonly, nonatomic) double numberOfBytesReceived;
@property (readonly, nonatomic) CSPChunkDataMonitorRecord *monitorRecord;
@property (readonly, nonatomic) TTHttpRequest *ttRequest;
@property (readonly, nonatomic) TTHttpResponse *ttResponse;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackOnQueue;
@property (readonly) id<CSPCommonRequestInfo> requestInfo;
@property (nonatomic) BOOL highNetworkPriority;
@property (nonatomic) BOOL cacheCallbackMode;
@property (nonatomic) BOOL dataProcessAndCallbackSeparate;
@property (nonatomic) BOOL fixReceivingEOFEarly;
@property (nonatomic) BOOL fixBreakIllegalContent;
@property (retain, nonatomic) Class requestSerializerClass;
@property (retain, nonatomic) NSNumber *customProtectTimeout;
@property (retain, nonatomic) NSNumber *customHeaderReceiveTimeout;
@property (retain, nonatomic) NSNumber *customReadBodyTimeout;
@property (nonatomic) BOOL highThreadPriority;
@property (nonatomic) double defaultThreadPriority;
@property (nonatomic) BOOL highRequestMethodPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveRawData:(id)a0;
- (id)initWithResponseSerializer:(id)a0;
- (void)registerRequestDelegate:(id)a0;
- (void)startNewStreamWithUrlString:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 enableHttpCache:(BOOL)a5 uploadBlock:(id /* block */)a6;
- (void)forceStreamEnd;
- (void)startNewStreamWithUrlString:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 enableHttpCache:(BOOL)a5;
- (void)didEstablishLink;
- (void)didReceiveEndSymbol;
- (void)didReceiveDictionary:(id)a0;
- (void)didBreakLink:(long long)a0 withError:(id)a1;
- (id)initWithResponseSerializer:(id)a0 monitorRecordClass:(Class)a1 dataHelperBuilder:(id /* block */)a2;
- (void)p_clearForNewLink;
- (void)p_autoCallbackWithBlock:(id /* block */)a0;
- (id)initWithResponseSerializer:(id)a0 monitorRecordClass:(Class)a1;
- (void)registerThreadBlockMonitor:(id)a0;
- (long long)triggerCallback;
- (void)innerStreamBreak;
- (id)p_parseResponseFromJSONDictionary:(id)a0;
- (void)startNewStreamWithUrlString:(id)a0 params:(id)a1 method:(id)a2;
- (void).cxx_destruct;

@end
