@class TTHttpResponse, NSHashTable, NSError, AWEAIGCChunkDataHelper, NSString, CSPChunkDataMonitorRecord, NSObject, NSMutableArray, NSNumber;
@protocol CSPCommonResponseSerializer, CSPCommonResponse, OS_dispatch_queue;

@interface AWEAIGCChunkRequestManager : NSObject <AWEAIGCChunkDataReceiver>

@property (retain, nonatomic) AWEAIGCChunkDataHelper *dataHelper;
@property (weak, nonatomic) id<CSPCommonResponseSerializer> responseSerializer;
@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) NSMutableArray *cacheCallbacks;
@property (nonatomic) BOOL callbackTriggered;
@property (retain, nonatomic) id<CSPCommonResponse> latestResponse;
@property (retain, nonatomic) NSError *latestError;
@property (nonatomic) BOOL forceCanceledByUpperLevel;
@property (retain, nonatomic) Class monitorRecordClass;
@property (nonatomic) BOOL isNormalMode;
@property (readonly, nonatomic) double numberOfBytesReceived;
@property (readonly, nonatomic) CSPChunkDataMonitorRecord *monitorRecord;
@property (readonly, nonatomic) TTHttpResponse *ttResponse;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackOnQueue;
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

- (id)initWithResponseSerializer:(id)a0;
- (void)registerRequestDelegate:(id)a0;
- (void)forceStreamEnd;
- (void)didEstablishLink;
- (void)didReceiveEndSymbol;
- (void)didReceiveDictionary:(id)a0;
- (void)p_autoCallbackWithBlock:(id /* block */)a0;
- (id)initWithResponseSerializer:(id)a0 monitorRecordClass:(Class)a1;
- (long long)triggerCallback;
- (void)innerStreamBreak;
- (id)p_parseResponseFromJSONDictionary:(id)a0;
- (void)didReceiveFirstDataChunk;
- (void)didBreakLink:(long long)a0 withError:(id)a1 withCurrentResponse:(id)a2;
- (void)startNewStreamWithUrlString:(id)a0 params:(id)a1 method:(id)a2 isRetry:(BOOL)a3;
- (void)didReceiveHeader:(id)a0;
- (id)initWithResponseSerializer:(id)a0 monitorRecordClass:(Class)a1 isNormalMode:(BOOL)a2;
- (void)startNewStreamWithUrlString:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 enableHttpCache:(BOOL)a5 isRetry:(BOOL)a6;
- (void)startNewStreamWithUrlString:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 enableHttpCache:(BOOL)a5 uploadBlock:(id /* block */)a6 isRetry:(BOOL)a7;
- (void)p_clearForNewLink:(BOOL)a0;
- (void)didEndReadChunkForError:(id)a0 errorReason:(long long)a1 currentResponse:(id)a2;
- (BOOL)enableSSEPostOptimize;
- (void).cxx_destruct;

@end
