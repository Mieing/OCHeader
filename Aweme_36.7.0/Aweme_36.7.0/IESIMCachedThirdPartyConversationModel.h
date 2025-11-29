@class NSString;

@interface IESIMCachedThirdPartyConversationModel : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int unreadCount;
@property (nonatomic) int importantUnreadCount;

- (void).cxx_destruct;

@end
