@class OpenIMArchivePopUpInfo, BaseResponse;

@interface GetOpenIMArchivePopUpInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) OpenIMArchivePopUpInfo *info;

+ (void)initialize;

@end
