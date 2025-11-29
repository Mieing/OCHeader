@class NSMutableDictionary, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface AWEEcomSearchChunkStorage : NSObject <AWEEcomSearchChunkStorageProtocol>

@property (retain, nonatomic) NSMutableDictionary *receivedChunks;
@property (retain, nonatomic) NSMutableSet *waitingChunks;
@property (retain, nonatomic) NSMutableSet *processedChunks;
@property (retain, nonatomic) NSMutableDictionary *chunkDependencies;
@property (retain, nonatomic) NSMutableDictionary *pendingCompletions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *storageQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearAllChunks;
- (BOOL)isChunkProcessed:(id)a0;
- (BOOL)containsChunk:(id)a0;
- (void)storeChunkData:(id)a0;
- (void)addChunkToWaitingQueue:(id)a0 withDependencies:(id)a1 completion:(id /* block */)a2;
- (void)markChunkAsProcessed:(id)a0;
- (id)allWaitingChunks;
- (id)allProcessedChunks;
- (id)allChunks;
- (id)getChunkDataById:(id)a0;
- (void)clearWaitingQueue;
- (void).cxx_destruct;
- (id)init;

@end
