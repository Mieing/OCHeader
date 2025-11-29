@class TextStatusBrandInfo, BaseResponse;

@interface TextStatusGetBrandInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) TextStatusBrandInfo *brandInfo;

+ (void)initialize;

@end
