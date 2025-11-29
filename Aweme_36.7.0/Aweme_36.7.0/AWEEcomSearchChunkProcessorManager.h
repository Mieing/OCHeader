@class NSMutableDictionary, NSArray, AWEEcomSearchChunkContext, NSObject, AWEEcomSearchChunkRelationManager;
@protocol OS_dispatch_queue, AWEEcomSearchChunkProcessorManagerDelegate, AWEEcomSearchChunkStorageProtocol;

@interface AWEEcomSearchChunkProcessorManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *processors;
@property (retain, nonatomic) NSObject<AWEEcomSearchChunkStorageProtocol> *storageManager;
@property (retain, nonatomic) AWEEcomSearchChunkRelationManager *relationManager;
@property (weak, nonatomic) AWEEcomSearchChunkContext *context;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processorQueue;
@property (weak, nonatomic) id<AWEEcomSearchChunkProcessorManagerDelegate> delegate;
@property (copy, nonatomic) NSArray *relationRules;

- (id)getProcessorForChunkType:(unsigned long long)a0;
- (void)checkAndProcessChunk:(id)a0 context:(id)a1 processor:(id)a2;
- (void)processChunkImmediately:(id)a0 context:(id)a1 processor:(id)a2;
- (void)checkAndProcessWaitingChunks;
- (void)processChunk:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)registerProcessor:(id)a0 forChunkType:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)setStorage:(id)a0;
- (id)init;
- (void)clearData;

@end
