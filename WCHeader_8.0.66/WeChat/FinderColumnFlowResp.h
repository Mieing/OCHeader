@class FinderColumnPostConfig, FinderPreloadInfo, NSData, NSMutableArray, BaseResponse;

@interface FinderColumnFlowResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) FinderPreloadInfo *preloadInfo;
@property (nonatomic) unsigned int prefetchLastFeedCount;
@property (retain, nonatomic) FinderColumnPostConfig *postConfig;

+ (void)initialize;

@end
