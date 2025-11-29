@class ResourceCtx, BaseResponse;

@interface GetVoicePrintResourceRsaResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) ResourceCtx *resourceData;

+ (void)initialize;

@end
