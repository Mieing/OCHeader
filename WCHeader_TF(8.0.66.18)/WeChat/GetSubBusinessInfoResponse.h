@class NSString, BaseResponse;

@interface GetSubBusinessInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *subBusinessUsername;

+ (void)initialize;

@end
