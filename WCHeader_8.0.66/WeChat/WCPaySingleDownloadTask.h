@class NSString, NSURLSessionDownloadTask;

@interface WCPaySingleDownloadTask : NSObject

@property (retain, nonatomic) NSString *downloadUrl;
@property (retain, nonatomic) NSURLSessionDownloadTask *urlSessionDownloadTask;
@property (retain, nonatomic) NSString *filePath;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL isDownloading;
@property (retain, nonatomic) id extraInfo;

- (id)initWithDownloadTask:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
