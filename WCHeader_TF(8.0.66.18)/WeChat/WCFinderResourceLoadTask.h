@class NSString;

@interface WCFinderResourceLoadTask : NSObject

@property (copy, nonatomic) NSString *tmpPath;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) BOOL isCanceled;
@property (copy, nonatomic) NSString *targetURL;
@property (copy, nonatomic) id /* block */ onLoadCompletionBlock;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *savePath;
@property (copy, nonatomic) NSString *fileMD5;
@property (nonatomic) unsigned long long maxRetryCount;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
