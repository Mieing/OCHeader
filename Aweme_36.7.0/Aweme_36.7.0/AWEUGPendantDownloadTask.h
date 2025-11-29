@class NSString, NSURL;

@interface AWEUGPendantDownloadTask : NSOperation

@property (retain, nonatomic) NSString *URL;
@property (retain, nonatomic) NSURL *zipFileURL;
@property (retain, nonatomic) NSString *zipFileMD5;
@property (retain, nonatomic) NSString *unzipTargetPath;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL isTaskExecuting;
@property (nonatomic) BOOL isTaskFinished;

- (id)initWithURL:(id)a0 zipFileURL:(id)a1 zipFileMD5:(id)a2 unzipTargetPath:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (BOOL)isConcurrent;
- (void)start;
- (BOOL)isExecuting;
- (void)main;
- (BOOL)isFinished;

@end
