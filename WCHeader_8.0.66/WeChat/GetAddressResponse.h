@class NSString, BaseResponse;

@interface GetAddressResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *retJson;
@property (retain, nonatomic) NSString *language;

+ (void)initialize;

@end
