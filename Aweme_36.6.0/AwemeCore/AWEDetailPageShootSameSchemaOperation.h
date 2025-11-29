@class NSMutableArray, NSMutableDictionary, AWEDetailPageShootSameSchemaRequestModel;
@protocol AWEHttpTask;

@interface AWEDetailPageShootSameSchemaOperation : NSOperation {
    BOOL _isExecuting;
    BOOL _isFinished;
}

@property (retain, nonatomic) AWEDetailPageShootSameSchemaRequestModel *requestModel;
@property (nonatomic) double requestTimeout;
@property (retain, nonatomic) NSMutableDictionary *trackDic;
@property (retain, nonatomic) NSMutableArray *resultBlocks;
@property (weak, nonatomic) id<AWEHttpTask> requestTask;
@property (nonatomic) BOOL operationHasStarted;

- (id)initWithRequestModel:(id)a0;
- (void)addResultBlockHandler:(id /* block */)a0;
- (void)didCancelled;
- (void)didFailedWithError:(id)a0;
- (void)removeResultBlockHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)finish;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (void)main;
- (void)cancel;
- (BOOL)isFinished;

@end
