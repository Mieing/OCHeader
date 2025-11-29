@class NSString, TokeMess, RightCorner, BaseResponse;

@interface QryHoneyPayCardDetailResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSString *payerUsername;
@property (nonatomic) unsigned long long remainCreditLine;
@property (nonatomic) unsigned long long creditLine;
@property (retain, nonatomic) RightCorner *rightCorner;
@property (retain, nonatomic) TokeMess *tokeMess;
@property (retain, nonatomic) NSString *cardTypeName;
@property (nonatomic) unsigned int cardType;
@property (retain, nonatomic) NSString *icon;

+ (void)initialize;

@end
