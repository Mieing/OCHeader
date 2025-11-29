@class NSArray, NSString;

@interface TTVideoEngineDownloadURLTask : TTVideoEngineDownloadTask

@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *videoId;

+ (id)taskItem;
+ (id)urlTaskWithKey:(id)a0 urls:(id)a1 vid:(id)a2;

- (void)setupBaseFiled;
- (BOOL)_shouldRetry:(id)a0;
- (void)assignWithDict:(id)a0;
- (void)updateUrls:(id)a0;
- (id)jsonDict;
- (void).cxx_destruct;
- (void)suspend;
- (void)resume;
- (BOOL)isEqual:(id)a0;

@end
