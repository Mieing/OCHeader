@class TTHttpResponse, NSData, TTNetworkManager, TTHttpTask, NSMutableData;

@interface LLBizDitoNetworkChunkTask : NSObject

@property (readonly, nonatomic) TTNetworkManager *networkManager;
@property (retain, nonatomic) TTHttpTask *task;
@property (retain, nonatomic) TTHttpResponse *response;
@property (nonatomic) BOOL isChunkMode;
@property (retain, nonatomic) NSMutableData *chunkData;
@property (retain, nonatomic) NSData *splitTagData;
@property (retain, nonatomic) NSData *endTagData;
@property (nonatomic) double startTime;
@property (nonatomic) double receiveDataTime;
@property (copy, nonatomic) id /* block */ receiveChunkDataBlock;
@property (copy, nonatomic) id /* block */ endCompletion;

- (void)networkByChunkModeWithURL:(id)a0 method:(unsigned long long)a1 headers:(id)a2 params:(id)a3 receiveChunkDataBlock:(id /* block */)a4 endCompletion:(id /* block */)a5;
- (void)didCompleteWithError:(id)a0 data:(id)a1;
- (void)didReceiveChunkData:(id)a0;
- (void)didReceiveNormalData:(id)a0;
- (id)transforDataFromChunDataWithError:(id *)a0;
- (void)invokeCompletionWithData:(id)a0 error:(id)a1;
- (id)trimData:(id)a0 withTrimRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)subdata:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;
- (id)init;
- (void)didReceiveResponse:(id)a0;
- (void)didReceiveData:(id)a0;

@end
