@class NSString, BaseResponse;

@interface UploadVoiceResponse : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *toUserName;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int length;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *clientMsgId;
@property (nonatomic) unsigned int msgId;
@property (nonatomic) unsigned int voiceLength;
@property (nonatomic) unsigned int endFlag;
@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int cancelFlag;
@property (nonatomic) unsigned long long newMsgId;
@property (nonatomic) unsigned int actionFlag;

+ (void)initialize;

@end
