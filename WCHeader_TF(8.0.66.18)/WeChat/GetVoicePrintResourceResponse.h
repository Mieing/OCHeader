@class ResourceCtx, BaseResponse;

@interface GetVoicePrintResourceResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) ResourceCtx *resourceData;

+ (void)initialize;

@end
