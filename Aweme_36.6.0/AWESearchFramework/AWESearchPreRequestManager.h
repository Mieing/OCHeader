@class NSString, NSMutableDictionary, NSObject;
@protocol TTJSONResponseSerializerProtocol;

@interface AWESearchPreRequestManager : NSObject <CSPChunkResponseSerializer>

@property (retain, nonatomic) NSMutableDictionary *tasksMap;
@property (retain, nonatomic) NSMutableDictionary *chunkStateMachineMap;
@property (retain, nonatomic) NSMutableDictionary *chunkRequestManagerMap;
@property (retain, nonatomic) NSMutableDictionary *ackMap;
@property (retain, nonatomic) NSObject<TTJSONResponseSerializerProtocol> *jsonSerializerImp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableMultiAppendChunk;
+ (id)manager;

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
- (void)sendPreRequest:(id)a0 forIdentifier:(id)a1;
- (id)cspMachineForIdentifier:(id)a0;
- (void)sendFlowPreRequest:(id)a0 forIdentifier:(id)a1;
- (void)sendHTTPPreRequest:(id)a0 forIdentifier:(id)a1;
- (id)p_cspChunkRequestManagerForIdentifier:(id)a0;
- (id)p_cspMachineForIdentifier:(id)a0;
- (id)preRequestForPrefetchID:(id)a0;
- (void)reportACKIfNeedWithPrefetchID:(id)a0 searchSource:(id)a1 result:(id)a2 reason:(id)a3 requestCreateTime:(double)a4;
- (id)createPrefetchID;
- (void)p_flowPreRequestMonitorWithParams:(id)a0 requestPath:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
