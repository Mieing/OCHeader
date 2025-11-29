@class NSDictionary, NSString;

@interface IESLLGDCacheValueModel : NSObject

@property (retain, nonatomic) NSDictionary *ditoData;
@property (nonatomic) long long timestamp;
@property (copy, nonatomic) NSString *cacheFrom;
@property (nonatomic) long long stayTime;
@property (nonatomic) long long stayTimeInMinutes;
@property (copy, nonatomic) NSString *cacheSubScene;
@property (nonatomic) long long expireTime;

- (void).cxx_destruct;

@end
