@class NSDictionary;

@interface BDDownloadTaskConfig : NSObject

@property (nonatomic) long long priority;
@property (nonatomic) BOOL isGeneralizedPrefetchRequest;
@property (nonatomic) BOOL isBizPrefetchRequest;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) BOOL immediately;
@property (nonatomic) unsigned long long requestIgnoreQueueType;
@property (nonatomic) BOOL progressDownload;
@property (nonatomic) BOOL progressDownloadForThumbnail;
@property (nonatomic) BOOL verifyData;
@property (copy, nonatomic) NSDictionary *requestHeaders;
@property (nonatomic) long long throttleNetSpeed;
@property (nonatomic) BOOL mdlDownload;

- (void).cxx_destruct;
- (id)init;

@end
