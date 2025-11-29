@class BaseRequest, NSString;

@interface GetChatroomMsgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatroomName;
@property (nonatomic) unsigned long long seqGt;
@property (nonatomic) unsigned long long seqLt;
@property (nonatomic) unsigned int channelId;

+ (void)initialize;

@end
