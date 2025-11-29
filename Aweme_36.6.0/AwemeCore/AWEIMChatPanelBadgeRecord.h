@class NSString;

@interface AWEIMChatPanelBadgeRecord : NSObject <NSCoding>

@property (copy, nonatomic) NSString *badgeKey;
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) long long clickCount;
@property (nonatomic) long long exposeCount;

- (void)resetWithBadgeKey:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
