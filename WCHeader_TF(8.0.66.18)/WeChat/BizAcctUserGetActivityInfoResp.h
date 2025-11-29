@class BizAcctActivity, BizAcctActivityParticipation, BaseResponse;

@interface BizAcctUserGetActivityInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) BizAcctActivity *activity;
@property (retain, nonatomic) BizAcctActivityParticipation *activityParticipation;

+ (void)initialize;

@end
