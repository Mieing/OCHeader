@class NSString, BaseResponse;

@interface GetAdCanvasInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *adcanvasXml;
@property (retain, nonatomic) NSString *vangoghData;

+ (void)initialize;

@end
