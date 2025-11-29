@class NSString, HoneyPayerDetail, BaseResponse;

@interface CreateHoneyPayCardResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) HoneyPayerDetail *detail;

+ (void)initialize;

@end
