@class BDPClientAIRegulusModel;

@interface BDPClientAIRegulusFileLoader : NSObject

@property (nonatomic) long long retryCount;
@property (nonatomic) long long loadStatus;
@property (retain, nonatomic) BDPClientAIRegulusModel *model;

+ (id)loaderWithModel:(id)a0;

- (void)downloadStrategyRuleWithCompletion:(id /* block */)a0;
- (void)retryDownloadTaskForNextUrl;
- (BOOL)checkModelMd5AndMoveFileFrom:(id)a0 finalPath:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)readDataWithError:(id *)a0;

@end
