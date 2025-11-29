@class BaseRequest, NSString, SendFileUploadMsgFileInfo;

@interface SendFileUploadMsgReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *toUserName;
@property (retain, nonatomic) NSString *clientMsgId;
@property (nonatomic) unsigned int action;
@property (retain, nonatomic) SendFileUploadMsgFileInfo *fileInfo;
@property (retain, nonatomic) NSString *fileUploadToken;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSString *lanInfo;

+ (void)initialize;

@end
