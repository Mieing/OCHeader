@interface AWEIMDefaultLandingUnreadCountStrategy : NSObject <NSCoding>

@property (nonatomic) int preUnreadCount;
@property (nonatomic) int prePreUnreadCount;
@property (nonatomic) int zeroCount;
@property (nonatomic) int preZeroCount;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
