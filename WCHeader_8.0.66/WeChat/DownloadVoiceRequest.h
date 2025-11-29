@class NSString, BaseRequest;

@interface DownloadVoiceRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int msgId;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int length;
@property (retain, nonatomic) NSString *clientMsgId;
@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long newMsgId;
@property (retain, nonatomic) NSString *chatRoomName;
@property (nonatomic) unsigned long long masterBufId;

+ (void)initialize;

@end
