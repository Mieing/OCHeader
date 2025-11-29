@class DynamicAttrInfo, GlobalAttrInfo, BaseResponse;

@interface WxaRuntimeHostAttrSyncResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) DynamicAttrInfo *dynamicAttrInfo;
@property (retain, nonatomic) GlobalAttrInfo *globalAttrInfo;

+ (void)initialize;

@end
