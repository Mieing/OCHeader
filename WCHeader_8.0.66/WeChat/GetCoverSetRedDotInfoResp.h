@class CoverSetRedDotInfo, BaseResponse;

@interface GetCoverSetRedDotInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) CoverSetRedDotInfo *info;
@property (nonatomic) unsigned int effectiveEndTime;

+ (void)initialize;

@end
