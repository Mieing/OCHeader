@class NSString;

@interface AFDFriendsFeedHistoryCacheModel : MTLModel

@property (nonatomic) BOOL isFromCache;
@property (nonatomic) double cacheTimeStamp;
@property (copy, nonatomic) NSString *cachedURL;
@property (copy, nonatomic) NSString *urlKey;

- (void).cxx_destruct;

@end
