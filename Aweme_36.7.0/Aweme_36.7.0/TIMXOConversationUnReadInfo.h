@class NSString;

@interface TIMXOConversationUnReadInfo : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isMute;
@property (nonatomic) unsigned long long unreadCount;
@property (nonatomic) unsigned long long anotherUnreadCount;

- (void).cxx_destruct;

@end
