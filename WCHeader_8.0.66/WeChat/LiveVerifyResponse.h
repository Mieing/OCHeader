@class NSString, BaseResponse;

@interface LiveVerifyResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL isVerified;
@property (retain, nonatomic) NSString *verifyUrl;

+ (void)initialize;

@end
