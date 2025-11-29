@class NSString, NSMutableDictionary, NSArray;

@interface TTVideoEnginePreloaderURLItem : NSObject

@property (retain, nonatomic) NSMutableDictionary *customHeaders;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *cacheFilePath;
@property (nonatomic) long long preloadSize;
@property (nonatomic) long long priorityLevel;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *subTag;
@property (copy, nonatomic) NSString *groupId;
@property (nonatomic) long long urlExpiredTime;
@property (nonatomic) long long preloadFooterSize;
@property (copy, nonatomic) id /* block */ preloadEnd;
@property (copy, nonatomic) id /* block */ preloadCanceled;
@property (copy, nonatomic) id /* block */ preloadDidStart;
@property (copy, nonatomic) id /* block */ preloadProgress;

+ (id)urlItem:(id)a0 videoId:(id)a1 preloadSize:(long long)a2 urls:(id)a3;
+ (id)urlItemWithKey:(id)a0 videoId:(id)a1 urls:(id)a2 preloadSize:(long long)a3;
+ (id)urlItemWitFilePath:(id)a0 videoId:(id)a1 urls:(id)a2 preloadSize:(long long)a3;

- (void)setCustomHeaderValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
