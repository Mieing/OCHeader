@class NSMutableSet;

@interface AWEFeedDoubleColumnChunkManager : NSObject

@property (retain, nonatomic) NSMutableSet *proxySet;

+ (id)requestAwemeItemsWithURLString:(id)a0 URLParams:(id)a1 bodyParams:(id)a2 pbFinishBlock:(id /* block */)a3 receiveDataBlock:(id /* block */)a4 chunkFinishBlock:(id /* block */)a5;
+ (BOOL)shouldUseNewHeader;
+ (BOOL)shouldOptMainThread;
+ (id)requestAwemeItemsWithURLString:(id)a0 URLParams:(id)a1 bodyParams:(id)a2 receiveDataBlock:(id /* block */)a3 chunkFinishBlock:(id /* block */)a4;
+ (id)sharedInstance;

- (void)removeCurrentProxy:(id)a0;
- (void)registCurrentProxy:(id)a0;
- (id)getChunkRequestManager;
- (void).cxx_destruct;

@end
