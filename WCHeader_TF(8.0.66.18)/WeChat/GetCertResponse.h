@class RSACert, BaseResponse;

@interface GetCertResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) RSACert *certValue;
@property (nonatomic) unsigned int certVersion;

+ (void)initialize;

@end
