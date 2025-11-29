@class NSString, NSArray;

@interface TTVideoEngineDirectURLItem : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *cacheFilePath;
@property (nonatomic) long long urlExpiredTime;

+ (id)urlItem:(id)a0 urls:(id)a1 urlExpiredTime:(long long)a2;

- (void).cxx_destruct;

@end
