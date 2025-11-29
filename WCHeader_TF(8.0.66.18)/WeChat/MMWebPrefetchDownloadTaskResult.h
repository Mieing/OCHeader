@class NSDictionary, MMWebPrefetchDownloadTaskRequest, NSString;

@interface MMWebPrefetchDownloadTaskResult : MMObject

@property (retain, nonatomic) MMWebPrefetchDownloadTaskRequest *request;
@property (nonatomic) BOOL notModified;
@property (retain, nonatomic) NSDictionary *respHeaderFields;
@property (nonatomic) BOOL isRedirect;
@property (copy, nonatomic) NSString *redirectUrl;
@property (nonatomic) unsigned int dataSize;
@property (nonatomic) unsigned int downloadTime;

- (id)description;
- (void).cxx_destruct;

@end
