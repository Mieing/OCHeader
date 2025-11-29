@class NSString, GetWxaDebugInfoResp_ModuleItem, BaseResponse;

@interface GetWxaDebugInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *extJson;
@property (retain, nonatomic) GetWxaDebugInfoResp_ModuleItem *moduleItem;

+ (void)initialize;

@end
