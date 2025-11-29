@class WCFinderPrefetchCache, FinderNavLiveStreamResponse, FinderNavLiveStreamRequest;

@interface MMFinderLiveNavLiveStreamModel : MMFinderLiveNavLiveStreamBaseModel

@property (retain, nonatomic) FinderNavLiveStreamResponse *resp;
@property (retain, nonatomic) WCFinderPrefetchCache *prefetchCache;
@property (retain, nonatomic) FinderNavLiveStreamRequest *request;

- (BOOL)enterPullUsePrefetchCache;
- (BOOL)isValidToSaveToDataCache;
- (void).cxx_destruct;

@end
