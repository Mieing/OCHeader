@class NSString;

@interface AWEIMSmartAssistantQuickReplyRecommendGetRequest : GPBMessage

@property (copy, nonatomic) NSString *input;
@property (nonatomic) BOOL hasInput;
@property (nonatomic) long long userId;
@property (nonatomic) BOOL hasUserId;
@property (nonatomic) long long commerceId;
@property (nonatomic) BOOL hasCommerceId;

+ (id)descriptor;

@end
