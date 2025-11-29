@class NSString;

@interface AWEIMChatListServiceUnreadCountUpdateModel : NSObject

@property (copy, nonatomic) NSString *uid;
@property (nonatomic) long long totalUnreadCount;
@property (nonatomic) long long serviceType;

- (void).cxx_destruct;
- (id)description;

@end
