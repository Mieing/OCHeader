@class BaseResponse, FinderLiveAggregationCardInfoBundle, FinderLiveSquareInteractionEntryInfo, FinderLiveStreamGetAsyncLoadInfoConfig, NSMutableArray;

@interface FinderLiveStreamGetAsyncLoadInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *objectAsyncInfoMap;
@property (retain, nonatomic) NSMutableArray *contactAsyncInfoMap;
@property (nonatomic) unsigned int objectInfoRefreshIntervalSeconds;
@property (nonatomic) unsigned int liveContactTtlSeconds;
@property (retain, nonatomic) FinderLiveStreamGetAsyncLoadInfoConfig *getAsyncLoadInfoConfig;
@property (retain, nonatomic) FinderLiveAggregationCardInfoBundle *liveAggregationCardInfo;
@property (retain, nonatomic) NSMutableArray *resultList;
@property (retain, nonatomic) FinderLiveSquareInteractionEntryInfo *liveSquareInteractionEntryInfo;

+ (void)initialize;

@end
