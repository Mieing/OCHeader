@class NSString;

@interface ChatroomSeq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *chatroomName;
@property (nonatomic) unsigned int channelId;
@property (nonatomic) unsigned long long seq;

+ (void)initialize;

@end
