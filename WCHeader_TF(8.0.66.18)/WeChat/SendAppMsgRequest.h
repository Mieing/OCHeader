@class BaseRequest, AppMsg, NSString;

@interface SendAppMsgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) AppMsg *msg;
@property (retain, nonatomic) NSString *commentUrl;
@property (nonatomic) unsigned int reqTime;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned int fileType;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *fromSence;
@property (nonatomic) unsigned int hitMd5;
@property (nonatomic) unsigned int crc32;
@property (nonatomic) unsigned int msgForwardType;
@property (nonatomic) unsigned int directShare;
@property (retain, nonatomic) NSString *sendMsgTicket;
@property (retain, nonatomic) NSString *extCommonInfoXml;

+ (void)initialize;

@end
