@class TTNetworkManager, NSMutableSet, NSString;

@interface AWEDitoNetworkChunkImpl : NSObject <DitoNetworkChunkProtocol>

@property (retain, nonatomic) NSMutableSet *chunkTaskSet;
@property (retain, nonatomic) TTNetworkManager *networkManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)networkByChunkModeWithURL:(id)a0 method:(unsigned long long)a1 headers:(id)a2 params:(id)a3 completion:(id /* block */)a4;
- (void)removeChunkTask:(id)a0;
- (void)networkByChunkModeWithURL:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)networkByChunkModeWithURL:(id)a0 method:(unsigned long long)a1 params:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
