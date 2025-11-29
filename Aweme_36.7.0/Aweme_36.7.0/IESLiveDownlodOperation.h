@class TTHttpTask, NSString;

@interface IESLiveDownlodOperation : IESLiveConcurrentOperation

@property (retain, nonatomic) TTHttpTask *downloadTask;
@property (copy, nonatomic) NSString *downloadUrl;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) id /* block */ failureBlock;

- (void).cxx_destruct;
- (void)start;
- (void)cancel;

@end
