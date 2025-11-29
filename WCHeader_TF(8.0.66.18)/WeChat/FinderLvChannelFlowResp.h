@class FinderPrefetchFlowConfig, FinderPreloadInfo, FinderLvChannelWording, NSData, NSMutableArray, BaseResponse;

@interface FinderLvChannelFlowResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *oftenreadItems;
@property (retain, nonatomic) NSMutableArray *recommendItems;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned int prefetchLastFeedCount;
@property (retain, nonatomic) FinderPreloadInfo *preloadInfo;
@property (retain, nonatomic) FinderPrefetchFlowConfig *prefetchFlowConfig;
@property (retain, nonatomic) NSData *clientPrefetchData;
@property (retain, nonatomic) FinderLvChannelWording *wordingConfig;

+ (void)initialize;

@end
