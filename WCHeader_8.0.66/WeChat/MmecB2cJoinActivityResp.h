@class EcsErrorAction, NSString, BizAcctActivity, BaseResponse;

@interface MmecB2cJoinActivityResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long participateCount;
@property (retain, nonatomic) NSString *participateCountWording;
@property (retain, nonatomic) BizAcctActivity *activity;
@property (retain, nonatomic) EcsErrorAction *errorAction;
@property (retain, nonatomic) EcsErrorAction *successAction;

+ (void)initialize;

@end
