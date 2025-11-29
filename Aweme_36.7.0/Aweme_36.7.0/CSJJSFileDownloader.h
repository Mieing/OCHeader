@class NSURLSessionDownloadTask;
@protocol BUPersistenceProtocol;

@interface CSJJSFileDownloader : NSObject {
    NSURLSessionDownloadTask *_downloadTask;
    id<BUPersistenceProtocol> _persistence;
}

+ (id)sharedInstance;

- (void)downloadWithURLString:(id)a0;
- (id)JSStringWithURLString:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
