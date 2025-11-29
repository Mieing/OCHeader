@class BaseRequest;

@interface DownloadVideoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int msgId;
@property (nonatomic) unsigned int totalLen;
@property (nonatomic) unsigned int startPos;
@property (nonatomic) unsigned int networkEnv;
@property (nonatomic) unsigned int mxPackSize;
@property (nonatomic) unsigned long long newMsgId;

+ (void)initialize;

@end
