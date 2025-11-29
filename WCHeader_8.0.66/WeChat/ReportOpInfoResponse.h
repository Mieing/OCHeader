@class NSData, BaseResponse;

@interface ReportOpInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResp;
@property (retain, nonatomic) NSData *opRespBuffer;

+ (void)initialize;

@end
