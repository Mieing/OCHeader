@class NSString, BaseResponse;

@interface QueryDetailResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (nonatomic) unsigned int state;
@property (retain, nonatomic) NSString *stateDesc;
@property (nonatomic) unsigned int amount;
@property (nonatomic) unsigned int commission;
@property (retain, nonatomic) NSString *payeeName;
@property (retain, nonatomic) NSString *payeeAccount;
@property (retain, nonatomic) NSString *explain;
@property (retain, nonatomic) NSString *paySuccTime;
@property (retain, nonatomic) NSString *estimatedWithdrawTime;
@property (retain, nonatomic) NSString *withdrawSuccTime;
@property (retain, nonatomic) NSString *tip;

+ (void)initialize;

@end
