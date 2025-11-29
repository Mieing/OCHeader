@class TTHttpTask, NSObject;
@protocol IESECTabKitChunkParser, OS_dispatch_queue;

@interface IESECTabKitChunkRequest : NSObject

@property (retain, nonatomic) TTHttpTask *task;
@property (retain, nonatomic) id<IESECTabKitChunkParser> chunkParser;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (copy, nonatomic) id /* block */ headerCallback;
@property (copy, nonatomic) id /* block */ chunkPackage;

+ (id)requestForChunkedBinaryWithURL:(id)a0 params:(id)a1 method:(id)a2 useJSONBodyWhenPost:(BOOL)a3 headerField:(id)a4 chunkParser:(Class)a5 headerCallback:(id /* block */)a6 chunkPackage:(id /* block */)a7 completion:(id /* block */)a8;

- (void)startReadStreamWithCompletion:(id /* block */)a0;
- (void)p_readStreamWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
