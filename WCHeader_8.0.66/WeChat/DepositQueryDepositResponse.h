@class NSString, BaseResponse;

@interface DepositQueryDepositResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSString *cardType;
@property (nonatomic) int depositState;
@property (retain, nonatomic) NSString *depositStateDesc;

+ (void)initialize;

@end
