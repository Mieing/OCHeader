@class NSURLSessionDownloadTask;

@interface MPPageResourceDownloadTaskContext : NSObject

@property (nonatomic) unsigned int templateType;
@property (retain, nonatomic) NSURLSessionDownloadTask *downloadTask;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;

@end
