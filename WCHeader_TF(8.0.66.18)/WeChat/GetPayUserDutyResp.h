@class NSString, BaseResponse;

@interface GetPayUserDutyResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *dutyInfo;
@property (nonatomic) BOOL needAgreeDuty;
@property (retain, nonatomic) NSString *darkModeDutyInfo;

+ (void)initialize;

@end
