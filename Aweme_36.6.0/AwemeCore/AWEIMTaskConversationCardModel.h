@class NSString;

@interface AWEIMTaskConversationCardModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *sourceName;
@property (copy, nonatomic) NSString *attentionContent;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long updateTime;
@property (copy, nonatomic) NSString *convTitle;
@property (copy, nonatomic) NSString *convIcon;
@property (copy, nonatomic) NSString *convId;
@property (nonatomic) long long unreadCount;
@property (copy, nonatomic) NSString *jumpSchema;
@property (nonatomic) long long sourceType;
@property (copy, nonatomic) NSString *hintContent;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL unreadDemotion;
@property (nonatomic) BOOL noCutIcon;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
