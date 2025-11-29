@class GetRelatedListMPPrefetchExptConfig;

@interface GetRelatedListPrefetchConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int mpPrefetchValidTime;
@property (retain, nonatomic) GetRelatedListMPPrefetchExptConfig *mpHorizontalPrefetchConfig;
@property (nonatomic) unsigned int prefetchLastFeedCount;
@property (nonatomic) unsigned int mpInterestCoverValidTime;

+ (void)initialize;

@end
