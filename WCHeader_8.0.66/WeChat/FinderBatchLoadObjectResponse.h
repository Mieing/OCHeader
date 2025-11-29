@class FinderPreloadInfo, NSMutableArray, BaseResponse;

@interface FinderBatchLoadObjectResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *objects;
@property (nonatomic) unsigned int refreshInterval;
@property (retain, nonatomic) NSMutableArray *objectResponses;
@property (nonatomic) BOOL canPreDownload;
@property (retain, nonatomic) FinderPreloadInfo *preloadInfo;

+ (void)initialize;

@end
