@class NSMutableArray;

@interface AWEIMSmartAssistantPushMsgResponse : GPBMessage

@property (retain, nonatomic) NSMutableArray *contentsArray;
@property (readonly, nonatomic) unsigned long long contentsArray_Count;
@property (nonatomic) long long userId;
@property (nonatomic) BOOL hasUserId;
@property (nonatomic) long long commerceId;
@property (nonatomic) BOOL hasCommerceId;
@property (nonatomic) long long messageType;
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) long long conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long recommendId;
@property (nonatomic) BOOL hasRecommendId;

+ (id)descriptor;

@end
