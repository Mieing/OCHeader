@class NSString, ShowMessage, BaseResponse;

@interface CgiTransferRecallResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *revokeTicket;
@property (retain, nonatomic) ShowMessage *showmessage;

+ (void)initialize;

@end
