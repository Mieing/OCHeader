@class CSPChunkRequestManager, NSString, CSPChunkStateMachine, NSObject;
@protocol TTJSONResponseSerializerProtocol, AWESearchCachalotFlowRequestManagerDelegate;

@interface AWESearchCachalotFlowRequestManager : NSObject <CSPChunkResponseSerializer, CSPChunkStateMachineDelegate, CSPChunkRequestDelegate>

@property (nonatomic) unsigned long long flowRequestType;
@property (retain, nonatomic) CSPChunkStateMachine *chunkStateMachine;
@property (retain, nonatomic) NSObject<TTJSONResponseSerializerProtocol> *jsonSerializerImp;
@property (retain, nonatomic) CSPChunkRequestManager *chunkRequestMangaer;
@property (nonatomic) BOOL cacheCallBackMode;
@property (weak, nonatomic) id<AWESearchCachalotFlowRequestManagerDelegate> flowRequestDelegate;
@property (retain, nonatomic) Class cardModelClass;
@property (copy, nonatomic) NSString *JSONCardDataKey;
@property (nonatomic) BOOL highThreadPriority;
@property (nonatomic) double defaultThreadPriority;
@property (nonatomic) BOOL highRequestMethodPriority;
@property (nonatomic) BOOL fixGlobalChunkReceivedTS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveJSON:(id)a0;
- (void)chunkRequestDidEndWithCommonResponse:(id)a0 withError:(id)a1 forceCanceled:(BOOL)a2;
- (void)didStartReadChunk;
- (void)forceStreamEnd;
- (double)numberOfBytesReceived;
- (void)willStartParseChunkData:(unsigned long long)a0;
- (id)responseWithTTResponse:(id)a0 fromJSONDictionary:(id)a1 error:(id *)a2;
- (void)didEndParseChunkData:(unsigned long long)a0 error:(id)a1;
- (void)handlePredictResponse:(id)a0;
- (void)showPredictContent:(id)a0;
- (void)clearPredictContent:(id)a0;
- (void)replacePredictContentWithResponse:(id)a0;
- (void)appendMoreContentWithResponse:(id)a0;
- (void)syncPageParamsWithResponse:(id)a0;
- (void)handlePatchResponse:(id)a0;
- (void)handlePatchOperationsData:(id)a0;
- (void)handleGlobalChunkData:(id)a0;
- (void)chunkRequestDidEndWithResponse:(id)a0 withError:(id)a1 forceCanceled:(BOOL)a2;
- (id)mergeAppendBaseJSON:(id)a0 withAppendJSON:(id)a1;
- (void)startNewStreamWithUrlString:(id)a0 params:(id)a1 method:(id)a2;
- (BOOL)predictDidHit;
- (id)initWithFlowRequestType:(unsigned long long)a0 delegate:(id)a1;
- (void)updateChunkStateMachine;
- (id)cspChunkDataMonitorRecord;
- (void)handleInitialResponse:(id)a0;
- (void)registStateDelegate;
- (void).cxx_destruct;
- (long long)chunkIndex;

@end
