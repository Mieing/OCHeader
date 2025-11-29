@class BatchResourceDescriptionList, BaseResponse;

@interface BatchGetResourceDescriptionResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) BatchResourceDescriptionList *appResp;
@property (retain, nonatomic) BatchResourceDescriptionList *pushAppResp;

+ (void)initialize;

@end
