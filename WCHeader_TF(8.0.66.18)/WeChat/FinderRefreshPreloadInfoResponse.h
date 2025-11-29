@class FinderPreloadInfo, BaseResponse;

@interface FinderRefreshPreloadInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderPreloadInfo *preloadInfo;
@property (nonatomic) unsigned int minRefreshInterval;

+ (void)initialize;

@end
