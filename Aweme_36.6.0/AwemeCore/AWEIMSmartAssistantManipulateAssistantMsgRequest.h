@class NSString, AWEIMSmartAssistantSuggestMsg;

@interface AWEIMSmartAssistantManipulateAssistantMsgRequest : GPBMessage

@property (retain, nonatomic) AWEIMSmartAssistantSuggestMsg *msg;
@property (nonatomic) BOOL hasMsg;
@property (copy, nonatomic) NSString *messageType;
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) long long userId;
@property (nonatomic) BOOL hasUserId;
@property (nonatomic) long long commerceId;
@property (nonatomic) BOOL hasCommerceId;
@property (nonatomic) long long recommendId;
@property (nonatomic) BOOL hasRecommendId;

+ (id)descriptor;

@end
