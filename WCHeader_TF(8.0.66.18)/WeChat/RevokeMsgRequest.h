@class BaseRequest, NSString;

@interface RevokeMsgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *clientMsgId;
@property (nonatomic) unsigned int newClientMsgId;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int svrMsgId;
@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *toUserName;
@property (nonatomic) unsigned int indexOfRequest;
@property (nonatomic) unsigned long long svrNewMsgId;
@property (retain, nonatomic) NSString *revokeTicket;

+ (void)initialize;

@end
