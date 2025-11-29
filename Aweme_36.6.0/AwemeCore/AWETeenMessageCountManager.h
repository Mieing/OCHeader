@interface AWETeenMessageCountManager : NSObject

@property (nonatomic) BOOL isRequestOnAir;

+ (id)sharedInstance;

- (void)fetchUnreadMessageCount:(id /* block */)a0;
- (long long)getTeenUnreadCount:(id)a0;

@end
