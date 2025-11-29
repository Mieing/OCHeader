@class NSString;

@interface HTSLiveRoomCommentTopicMessage_ChatItem : IESLivePBBaseMessage

@property (nonatomic) long long type;
@property (nonatomic) long long msgId;
@property (copy, nonatomic) NSString *featuredChat;
@property (nonatomic) long long eventTime;
@property (copy, nonatomic) NSString *guideText;

+ (id)descriptor;

@end
