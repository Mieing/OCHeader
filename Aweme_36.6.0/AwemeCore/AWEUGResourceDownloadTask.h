@class NSArray, NSString;

@interface AWEUGResourceDownloadTask : NSOperation

@property (retain, nonatomic) NSArray *URLs;
@property (retain, nonatomic) NSString *zipFileMD5;
@property (retain, nonatomic) NSString *targetPath;
@property (retain, nonatomic) NSString *unzipDirectory;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL isDownloadZip;
@property (nonatomic) BOOL isTaskExecuting;
@property (nonatomic) BOOL isTaskFinished;

- (id)initWithURLs:(id)a0 zipFileMD5:(id)a1 targetPath:(id)a2 unzipDirectory:(id)a3 completion:(id /* block */)a4;
- (id)initWithURLs:(id)a0 targetPath:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)isConcurrent;
- (void)start;
- (BOOL)isExecuting;
- (void)main;
- (BOOL)isFinished;

@end
