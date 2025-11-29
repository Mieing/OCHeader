@class NSString, BaseResponse;

@interface TransIdResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *openid;
@property (retain, nonatomic) NSString *username;

+ (void)initialize;

@end
