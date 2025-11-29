@class NSString, FinderNotifyGetMoreLiveResponse;

@interface MMFinderNotifyGetMoreLiveRespCacheItem : NSObject

@property (retain, nonatomic) FinderNotifyGetMoreLiveResponse *resp;
@property (nonatomic) double cacheTimestamp;
@property (copy, nonatomic) NSString *cacheKey;
@property (nonatomic) BOOL needDisplay;

- (void).cxx_destruct;

@end
