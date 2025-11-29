@class NSString, NewLifeBizJsApiResponse;

@interface NewLifeBizWebTransferResp : WXPBGeneratedMessage

@property (nonatomic) int errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NewLifeBizJsApiResponse *jsApiResponse;

+ (void)initialize;

@end
