@class NSString, BaseResponse;

@interface GetCardItemInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *jsonRet;

+ (void)initialize;

@end
