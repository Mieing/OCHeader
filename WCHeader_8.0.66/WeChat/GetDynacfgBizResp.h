@class NSString, BaseResponse;

@interface GetDynacfgBizResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *dynaCfgXml;

+ (void)initialize;

@end
