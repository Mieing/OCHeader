@class NSString, BaseResponse;

@interface ModifyHoneyPayerCreditLineResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) unsigned long long newCreditLine;

+ (void)initialize;

@end
