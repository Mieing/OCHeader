@class NSString, NSURL, NSDictionary;

@interface AWEVideoPublishDraftTempProductModel : MTLModel

@property (copy, nonatomic) NSString *publishTaskId;
@property (copy, nonatomic) NSURL *uploadMediaURL;
@property (copy, nonatomic) NSURL *watermarkVideoURL;
@property (copy, nonatomic) NSDictionary *uploadMediaURLDic;
@property (copy, nonatomic) NSDictionary *watermarkVideoURLDic;

+ (void)destroyWithTaskId:(id)a0;
+ (id)restoreWithTaskId:(id)a0;
+ (id)fixSandboxPrefixWithURL:(id)a0;
+ (id)cacheKey:(id)a0;

- (void)setUploadMediaURL:(id)a0 autoRemove:(BOOL)a1;
- (void)synchronize;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (void)destroy;

@end
