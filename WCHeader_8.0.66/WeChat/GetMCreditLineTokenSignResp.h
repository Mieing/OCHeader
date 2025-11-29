@class TokeMess, NSString, MakeSureButton, BaseResponse;

@interface GetMCreditLineTokenSignResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) TokeMess *tokeMess;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSString *takeMessage;
@property (retain, nonatomic) MakeSureButton *toRemind;

+ (void)initialize;

@end
