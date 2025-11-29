@class NSString, AAAlertItem, AARealNameItem, BaseResponse;

@interface AALaunchByMoneyRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *billNo;
@property (retain, nonatomic) NSString *msgxml;
@property (retain, nonatomic) AARealNameItem *realNameInfo;
@property (retain, nonatomic) AAAlertItem *alertItem;

+ (void)initialize;

@end
