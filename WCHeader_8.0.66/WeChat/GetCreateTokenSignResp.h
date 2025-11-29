@class NSString, TokeMess, MakeSureButton, BaseResponse;

@interface GetCreateTokenSignResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) TokeMess *tokeMess;
@property (retain, nonatomic) MakeSureButton *toRemind;

+ (void)initialize;

@end
