@class NSString, BaseResponse;

@interface ForeignHbReceiveResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *sendId;
@property (retain, nonatomic) NSString *wishing;
@property (nonatomic) unsigned int isSender;
@property (nonatomic) unsigned int receiveStatus;
@property (nonatomic) unsigned int hbStatus;
@property (retain, nonatomic) NSString *statusMess;
@property (nonatomic) unsigned int hbType;
@property (retain, nonatomic) NSString *sendUserName;
@property (retain, nonatomic) NSString *timingIdentifier;
@property (nonatomic) BOOL jumpH5;

+ (void)initialize;

@end
