@class AlertDialog, NSString, BubbleMsg, BaseResponse;

@interface RealNameVerifyGuardianResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) BubbleMsg *bubbleMsg;
@property (retain, nonatomic) AlertDialog *alertDialog;
@property (retain, nonatomic) NSString *leaveMessage;

+ (void)initialize;

@end
