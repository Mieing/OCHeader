@class BaseResponse;

@interface FinderLikeLiveResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int statusFlag;
@property (nonatomic) unsigned int interval;

+ (void)initialize;

@end
