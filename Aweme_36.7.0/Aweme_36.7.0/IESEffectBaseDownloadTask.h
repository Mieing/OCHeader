@class NSString, NSMutableArray;

@interface IESEffectBaseDownloadTask : NSObject

@property (copy, nonatomic) NSString *fileMD5;
@property (copy, nonatomic) NSString *destination;
@property (retain, nonatomic) NSMutableArray *progressBlocks;
@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property (nonatomic) long long queuePriority;
@property (nonatomic) long long qualityOfService;

- (void)downloadFileWithURLs:(id)a0 downloadPath:(id)a1 downloadQueuePriority:(long long)a2 downloadQualityOfService:(long long)a3 downloadProgress:(id /* block */)a4 downloadParameters:(id)a5 completion:(id /* block */)a6;
- (id)initWithFileMD5:(id)a0 destination:(id)a1;
- (void)callProgressBlocks:(double)a0;
- (void)callCompletionBlocks:(BOOL)a0 error:(id)a1 extraInfoDict:(id)a2;
- (void)addProgressBlockSafe:(id /* block */)a0;
- (void)addCompletionBlockSafe:(id /* block */)a0;
- (void)removeAllProgressBlocksSafe;
- (void)removeAllCompletionBlocksSafe;
- (void)downloadFileWithURLs:(id)a0 downloadPath:(id)a1 downloadProgress:(id /* block */)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)startWithCompletion:(id /* block */)a0;

@end
