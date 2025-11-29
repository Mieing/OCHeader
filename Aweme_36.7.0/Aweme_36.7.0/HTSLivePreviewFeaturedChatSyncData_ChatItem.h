@class NSString;

@interface HTSLivePreviewFeaturedChatSyncData_ChatItem : IESLivePBBaseMessage

@property (nonatomic) long long msgId;
@property (copy, nonatomic) NSString *featuredChat;
@property (nonatomic) long long eventTime;
@property (copy, nonatomic) NSString *guideText;
@property (nonatomic) long long type;

+ (id)descriptor;

@end
