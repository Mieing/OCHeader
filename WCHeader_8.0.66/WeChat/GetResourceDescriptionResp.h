@class ResourceDescriptionList, BaseResponse;

@interface GetResourceDescriptionResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) ResourceDescriptionList *appResp;

+ (void)initialize;

@end
