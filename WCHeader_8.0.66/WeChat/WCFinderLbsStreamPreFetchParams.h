@class NSString;

@interface WCFinderLbsStreamPreFetchParams : WCFinderLiveStreamPreFetchBaseParams

@property (nonatomic) BOOL onlyFollowFeed;
@property (retain, nonatomic) NSString *jumpBuffer;

- (id)description;
- (id)prefetchCacheHashKey;
- (void).cxx_destruct;

@end
