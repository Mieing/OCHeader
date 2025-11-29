@class NSObject, NSString, HMDThreadSafeDictionary;
@protocol TTJSONResponseSerializerProtocol, AWESearchFlowPreRequestResponseSerializerProtocol;

@interface AWESearchVerticalPreRequestManager : NSObject <CSPChunkResponseSerializer>

@property (retain, nonatomic) HMDThreadSafeDictionary *tasksMap;
@property (retain, nonatomic) HMDThreadSafeDictionary *preInitTasksMap;
@property (retain, nonatomic) HMDThreadSafeDictionary *chunkStateMachineMap;
@property (retain, nonatomic) HMDThreadSafeDictionary *usedChunkStateMachineMap;
@property (retain, nonatomic) HMDThreadSafeDictionary *chunkRequestManagerMap;
@property (retain, nonatomic) HMDThreadSafeDictionary *commonFlowManagerMap;
@property (retain, nonatomic) HMDThreadSafeDictionary *usedCommonFlowManagerMap;
@property (retain, nonatomic) HMDThreadSafeDictionary *ackMap;
@property (retain, nonatomic) NSObject<TTJSONResponseSerializerProtocol> *jsonSerializerImp;
@property (copy, nonatomic) NSString *responseClassName;
@property (copy, nonatomic) NSString *responseCardDataKey;
@property (copy, nonatomic) Class flowManagerClass;
@property (weak, nonatomic) id<AWESearchFlowPreRequestResponseSerializerProtocol> flowManagerResponseSerializer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableMultiAppendChunk;
+ (BOOL)allowUseAckTimerWithPrefetchType:(id)a0;

- (void)handleFlowPreRequest:(id)a0;
- (void)handlePreRequest:(id)a0 responseBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)handleDiscardedPreRequest:(id)a0;
- (id)chunkRequestManagerForIdentifier:(id)a0;
- (id)preRequestForIdentifier:(id)a0;
- (void)removeCSPChunkRequestManagerForIdentifier:(id)a0;
- (id)responseWithTTResponse:(id)a0 fromJSONDictionary:(id)a1 error:(id *)a2;
- (id)mergeAppendBaseJSON:(id)a0 withAppendJSON:(id)a1;
- (BOOL)enableMultiAppendChunk;
- (void)removeCSPMachineForIdentifier:(id)a0;
- (id)preInitRequestForIdentifier:(id)a0;
- (void)preInitPreRequest:(id)a0 forIdentifier:(id)a1;
- (id)allPreInitRequest;
- (void)handleDiscardAllPreInitRequest;
- (void)sendPreRequest:(id)a0 forIdentifier:(id)a1;
- (id)cspMachineForIdentifier:(id)a0;
- (id)commonFlowManagerForIdentifier:(id)a0;
- (id)allPreRequest;
- (BOOL)reportACKIfNeedWithPreRequest:(id)a0 searchSource:(id)a1 result:(id)a2 reason:(id)a3 requestCreateTime:(double)a4;
- (void)removeCommonFlowManagerForIdentifier:(id)a0;
- (id)p_createMachineForIdentifier:(id)a0;
- (id)usedCommonFlowManagerForIdentifier:(id)a0;
- (id)usedCspMachineForIdentifier:(id)a0;
- (void)handlePreInitRequestWithIdentifier:(id)a0;
- (void)sendFlowPreRequest:(id)a0 forIdentifier:(id)a1;
- (void)sendHTTPPreRequest:(id)a0 forIdentifier:(id)a1;
- (id)p_createCommonManagerForIdentifier:(id)a0;
- (id)p_cspChunkRequestManagerForIdentifier:(id)a0;
- (id)p_cspMachineForIdentifier:(id)a0;
- (BOOL)enablePreRequstAutoReportAckIfNeed;
- (id)preRequestForPrefetchID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
