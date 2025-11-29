@class NSString, NSDictionary, AWEAIGCChunkRequestManager, NSHashTable, NSMutableArray, NSMutableDictionary;

@interface AWESearchAIGCSSERequestManager : NSObject <CSPChunkRequestDelegate, AWESearchAIGCSSERequestManagerProtocol>

@property (retain, nonatomic) AWEAIGCChunkRequestManager *chunkRequestManager;
@property (retain, nonatomic) NSDictionary *lastResponse;
@property (nonatomic) BOOL isCurrentRequestEnd;
@property (nonatomic) long long intervalTimePerRequest;
@property (nonatomic) long long retryRequestMaxCount;
@property (nonatomic) long long retryRequestCount;
@property (copy, nonatomic) NSString *requestUrl;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (nonatomic) BOOL isNormalMode;
@property (retain, nonatomic) NSMutableArray *cacheCallbacks;
@property (nonatomic) BOOL callbackTriggered;
@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) NSMutableArray *responseArray;
@property (retain, nonatomic) NSMutableDictionary *responseDict;
@property (copy, nonatomic) NSString *localSearchUniqueid;
@property (retain, nonatomic) NSString *searchUniqueID;
@property (retain, nonatomic) NSMutableDictionary *keepAliveResponseDict;
@property (copy, nonatomic) NSString *searchID;
@property (nonatomic) BOOL cacheCallbackMode;
@property (nonatomic) BOOL highThreadPriority;
@property (nonatomic) double defaultThreadPriority;
@property (nonatomic) BOOL highRequestMethodPriority;
@property (nonatomic) BOOL highNetworkPriority;
@property (copy, nonatomic) NSDictionary *headerField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveJSON:(id)a0;
- (void)didReceiveAllData;
- (void)chunkRequestDidEndWithCommonResponse:(id)a0 withError:(id)a1 forceCanceled:(BOOL)a2;
- (void)clearBeforeNewLink;
- (void)willStartReadChunk;
- (void)didStartReadChunk;
- (void)willEndReadChunk:(long long)a0;
- (void)didReceiveCommonResponse:(id)a0;
- (void)willStartParseChunkData;
- (void)didEndParseChunkDataWithError:(id)a0;
- (id)initWithResponseSerializer:(id)a0;
- (void)registerRequestDelegate:(id)a0;
- (void)forceStreamEnd;
- (void)p_autoCallbackWithBlock:(id /* block */)a0;
- (long long)triggerCallback;
- (void)startNewStreamWithUrlString:(id)a0 params:(id)a1 method:(id)a2;
- (void)didReceiveFirstDataChunk;
- (void)didReceiveHeader:(id)a0;
- (void)didEndReadChunk:(long long)a0 withError:(id)a1 withCurrentResponse:(id)a2;
- (void)didEndReadChunkForError:(id)a0 errorReason:(long long)a1 currentResponse:(id)a2;
- (id)getKeepAliveData:(id)a0;
- (id)initWithIsNormalMode:(BOOL)a0;
- (void)updateKeepAliveData:(id)a0;
- (void)cleanPreviousConversationKeepAlive;
- (id)getKeepAliveCallback:(id)a0;
- (void)startNewStreamWithUrlString:(id)a0 params:(id)a1 method:(id)a2 isAppendData:(BOOL)a3;
- (void)clearLastRequest;
- (void)retryRequest:(id)a0 reason:(long long)a1 error:(id)a2;
- (void)networkRetryRequest:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (double)networkTimeout;
- (void)cancelCurrentRequest;
- (BOOL)keepAliveEnabled;

@end
