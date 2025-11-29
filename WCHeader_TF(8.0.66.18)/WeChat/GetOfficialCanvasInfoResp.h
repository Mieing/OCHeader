@class NSData, BaseResponse;

@interface GetOfficialCanvasInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *canvasXml;

+ (void)initialize;

@end
