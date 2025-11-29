@class FinderPrefetchFlowConfig, FinderPreloadInfo, NSString, NSData, NSMutableArray, BaseResponse;

@interface FinderTopStoryFlowResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned int prefetchLastFeedCount;
@property (retain, nonatomic) FinderPreloadInfo *preloadInfo;
@property (retain, nonatomic) NSString *fromSessionId;
@property (retain, nonatomic) FinderPrefetchFlowConfig *prefetchFlowConfig;

+ (void)initialize;

@end
